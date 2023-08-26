#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
    BRIEF_DESCRIPTION,
};

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

void *tree_sitter_doxygen_external_scanner_create() { return ((void *)0); }

void tree_sitter_doxygen_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_doxygen_external_scanner_serialize(void *payload,
                                                        char *buffer) {
    return 0;
}

void tree_sitter_doxygen_external_scanner_deserialize(void *payload,
                                                      const char *buffer,
                                                      unsigned length) {}

bool tree_sitter_doxygen_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
    if (!valid_symbols[BRIEF_DESCRIPTION]) {
        return false;
    }

    uint32_t column_start = 0;
    bool advanced_once = false;

    while ((iswspace(lexer->lookahead) || lexer->lookahead == '*') &&
           lexer->lookahead != '\n' && !lexer->eof(lexer)) {
        skip(lexer);
    }

    if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
        return false;
    }

    column_start = lexer->get_column(lexer);

content:
    while (lexer->lookahead != '\n' && !lexer->eof(lexer)) {
        advanced_once = true;
        advance(lexer);
    }

    if (lexer->eof(lexer)) {
        return false;
    }

    lexer->mark_end(lexer);
    advance(lexer);

    // go past space, / and * to check next text's column
    while (lexer->lookahead != '\n' && !lexer->eof(lexer) &&
           (iswspace(lexer->lookahead) || lexer->lookahead == '/' ||
            lexer->lookahead == '*')) {
        advance(lexer);
    }

    if (!lexer->eof(lexer) && lexer->get_column(lexer) == column_start) {
        goto content;
    } else if (advanced_once) {
        lexer->result_symbol = BRIEF_DESCRIPTION;
        return true;
    }

    return false;
}
