/**
 * @file Doxygen grammar for tree-sitter
 * @author Amaan Qureshi <amaanq12@gmail.com>
 * @license MIT
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'doxygen',

  externals: $ => [
    $.brief_text,
    $.code_block_start,
    $.code_block_language,
    $.code_block_content,
    $.code_block_end,
  ],

  extras: _ => [
    token(choice(
      // Skip over stars at the beginnings of lines
      seq(/\n/, /[ \t]*/, repeat(seq('*', /[ \t]*/))),
      /\s/,
    )),
  ],

  rules: {
    document: $ => seq(
      $._begin,
      optional($.brief_header),
      optional($.description),
      repeat(choice($.tag, $.code_block, $._text_line)),
      $._end,
    ),

    brief_header: $ => prec(1, choice(
      seq(alias(tagName('brief'), $.tag_name), $.brief_description),
      // brief desc that ends at dot
      alias(/[^\s\\*@<\[][^.<]+[.]/, $.brief_description),
    )),

    brief_description: $ => prec.right(repeat1(choice(
      $.brief_text,
      $.tag_name,
    ))),

    description: $ => repeat1(choice(
      $._text,
      $.emphasis,
      $.code_word,
      $.link,
      $.function_link,
    )),

    tag: $ => prec.right(choice(
      // type, name, and description
      seq(
        alias($.tag_name_with_argument, $.tag_name),
        optional($._expression),
        optional($.description),
      ),

      // type, several names, and description
      seq(
        alias($.tag_name_with_multiple_arguments, $.tag_name),
        optional($.storageclass),
        commaSep1($._expression),
        optional($.description),
      ),

      // Marking a parameter inside
      seq(
        $.storageclass,
        optional($.description),
      ),

      // multiple types
      seq(
        alias($.tag_name_with_types, $.tag_name),
        commaSep1(seq(
          field('function', choice($.function_link, $.identifier)),
          optional(alias(/[a-zA-Z_][a-zA-Z_0-9]*\s+/, $._text)),
        )),
        optional(field('function', choice($.function_link, $.identifier))),
      ),

      // c types
      seq(
        alias($.tag_name_with_self_types, $.tag_name),
        alias(/.*/, $.type),
      ),

      // type and description
      seq(
        alias($.tag_name_with_type, $.tag_name),
        optional(alias($.identifier, $.type)),
        optional($.description),
      ),

      // description only
      seq(
        $.tag_name,
        optional($.description),
      ),
    )),

    tag_name_with_argument: _ => token(choice(
      tagName('namespace'),
      tagName('exception'),
    )),

    tag_name_with_multiple_arguments: _ => token(choice(
      tagName('param'),
    )),

    tag_name_with_types: _ => token(choice(
      tagName('sa'),
    )),

    tag_name_with_self_types: _ => token(choice(
      tagName('fn'),
      tagName('property'),
      tagName('var'),
      tagName('overload'),
      tagName('typedef'),
    )),

    tag_name_with_type: _ => token(choice(
      tagName('class'),
      tagName('var'),
    )),

    tag_name: _ => /(@|\\)~?([a-zA-Z_]+|\{|\})/,

    _expression: $ => choice(
      $.identifier,
      $.qualified_identifier,
      // prec(-1, $.storageclassi),
      $.function,
      // $.optional_identifier,
      // $.member_expression,
      // $.path_expression,
      // $.qualified_expression,
    ),

    identifier: _ => /[a-zA-Z_][a-zA-Z_0-9]*/,

    qualified_identifier: $ => seq(
      $.identifier,
      repeat1(seq(token.immediate('::'), $.identifier)),
    ),

    function: $ => seq(
      optional('~'),
      $.identifier,
      '(',
      ')',
    ),

    storageclass: _ => seq('[', choice('in', 'out', 'inout'), ']'),

    emphasis: $ => seq('\\a', alias(/[a-zA-Z_][a-zA-Z_0-9]*/, $.text)),

    code_word: $ => seq('\\c', alias(/[a-zA-Z_][a-zA-Z_0-9]*/, $.code)),

    link: $ => seq(
      '<a',
      /[^>]*/,
      '>',
      alias(/[^<]*/, $.text),
      '</a>',
    ),

    function_link: _ => token(choice(
      seq(/~?[a-zA-Z_][a-zA-Z_0-9]*/, '(', /[^)\n]*/, ')'),
      seq('::', /~?[a-zA-Z_][a-zA-Z_0-9]*/),
      seq(
        /~?[a-zA-Z_][a-zA-Z_0-9]*/,
        repeat1(seq('::', /~?[a-zA-Z_][a-zA-Z_0-9]*/)),
        '(',
        /[^)\n]*/,
        ')',
      ),
    )),

    code_block: $ => choice(
      seq(
        $.code_block_start,
        $.code_block_language,
        $.code_block_content,
        $.code_block_end,
      ),
      seq(
        '@code',
        optional(seq(
          token.immediate('{'),
          token.immediate('.'),
          $.code_block_language,
          token.immediate('}'),
        )),
        $.code_block_content,
        '@endcode',
      ),
    ),

    _text: _ => token(prec(-1, /[^*{}@\\\s][^*!{}\\\n]*([^*/{}\\\n][^*{}\\\n]*\*+)*/)),

    _begin: _ => token(seq('/', repeat(choice('*', '/')), optional('!'), optional('<'))),

    _end: _ => choice('/', '*/'),

    _text_line: _ => token(prec(-2, /[^\s<@\\*].*/)),
  },
});

/**
 *
 * Create a tag name that starts with @ or \
 *
 * @param {string} name
 *
 * @return {ChoiceRule}
 */
function tagName(name) {
  return choice(`@${name}`, `\\${name}`);
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
