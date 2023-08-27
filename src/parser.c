#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  anon_sym_ATbrief = 1,
  anon_sym_BSLASHbrief = 2,
  aux_sym_brief_header_token1 = 3,
  anon_sym_COMMA = 4,
  aux_sym_tag_token1 = 5,
  aux_sym_tag_token2 = 6,
  sym_tag_name_with_argument = 7,
  sym_tag_name_with_multiple_arguments = 8,
  sym_tag_name_with_types = 9,
  sym_tag_name_with_self_types = 10,
  sym_tag_name_with_type = 11,
  sym_tag_name = 12,
  aux_sym_identifier_token1 = 13,
  anon_sym_COLON_COLON = 14,
  anon_sym_TILDE = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_LBRACK = 18,
  anon_sym_in = 19,
  anon_sym_out = 20,
  anon_sym_inout = 21,
  anon_sym_RBRACK = 22,
  anon_sym_BSLASHa = 23,
  anon_sym_LTa = 24,
  aux_sym_link_token1 = 25,
  anon_sym_GT = 26,
  aux_sym_link_token2 = 27,
  anon_sym_LT_SLASHa_GT = 28,
  sym_function_link = 29,
  sym__text = 30,
  sym__begin = 31,
  anon_sym_SLASH = 32,
  anon_sym_STAR_SLASH = 33,
  sym__text_line = 34,
  sym_brief_description = 35,
  sym_code_block_start = 36,
  sym_code_block_language = 37,
  sym_code_block_content = 38,
  sym_code_block_end = 39,
  sym_document = 40,
  sym_brief_header = 41,
  sym_description = 42,
  sym_tag = 43,
  sym__expression = 44,
  sym_identifier = 45,
  sym_qualified_identifier = 46,
  sym_function = 47,
  sym_storageclass = 48,
  sym_emphasis = 49,
  sym_link = 50,
  sym_code_block = 51,
  sym__end = 52,
  aux_sym_document_repeat1 = 53,
  aux_sym_description_repeat1 = 54,
  aux_sym_tag_repeat1 = 55,
  aux_sym_tag_repeat2 = 56,
  aux_sym_qualified_identifier_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATbrief] = "tag_name",
  [anon_sym_BSLASHbrief] = "tag_name",
  [aux_sym_brief_header_token1] = "brief_description",
  [anon_sym_COMMA] = ",",
  [aux_sym_tag_token1] = "_text",
  [aux_sym_tag_token2] = "type",
  [sym_tag_name_with_argument] = "tag_name",
  [sym_tag_name_with_multiple_arguments] = "tag_name",
  [sym_tag_name_with_types] = "tag_name",
  [sym_tag_name_with_self_types] = "tag_name",
  [sym_tag_name_with_type] = "tag_name",
  [sym_tag_name] = "tag_name",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_TILDE] = "~",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_inout] = "inout",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BSLASHa] = "\\a",
  [anon_sym_LTa] = "<a",
  [aux_sym_link_token1] = "link_token1",
  [anon_sym_GT] = ">",
  [aux_sym_link_token2] = "text",
  [anon_sym_LT_SLASHa_GT] = "</a>",
  [sym_function_link] = "function_link",
  [sym__text] = "_text",
  [sym__begin] = "_begin",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_SLASH] = "*/",
  [sym__text_line] = "_text_line",
  [sym_brief_description] = "brief_description",
  [sym_code_block_start] = "code_block_start",
  [sym_code_block_language] = "code_block_language",
  [sym_code_block_content] = "code_block_content",
  [sym_code_block_end] = "code_block_end",
  [sym_document] = "document",
  [sym_brief_header] = "brief_header",
  [sym_description] = "description",
  [sym_tag] = "tag",
  [sym__expression] = "_expression",
  [sym_identifier] = "identifier",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_function] = "function",
  [sym_storageclass] = "storageclass",
  [sym_emphasis] = "emphasis",
  [sym_link] = "link",
  [sym_code_block] = "code_block",
  [sym__end] = "_end",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_tag_repeat2] = "tag_repeat2",
  [aux_sym_qualified_identifier_repeat1] = "qualified_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATbrief] = sym_tag_name,
  [anon_sym_BSLASHbrief] = sym_tag_name,
  [aux_sym_brief_header_token1] = sym_brief_description,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_tag_token1] = aux_sym_tag_token1,
  [aux_sym_tag_token2] = aux_sym_tag_token2,
  [sym_tag_name_with_argument] = sym_tag_name,
  [sym_tag_name_with_multiple_arguments] = sym_tag_name,
  [sym_tag_name_with_types] = sym_tag_name,
  [sym_tag_name_with_self_types] = sym_tag_name,
  [sym_tag_name_with_type] = sym_tag_name,
  [sym_tag_name] = sym_tag_name,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_inout] = anon_sym_inout,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_BSLASHa] = anon_sym_BSLASHa,
  [anon_sym_LTa] = anon_sym_LTa,
  [aux_sym_link_token1] = aux_sym_link_token1,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_link_token2] = aux_sym_link_token2,
  [anon_sym_LT_SLASHa_GT] = anon_sym_LT_SLASHa_GT,
  [sym_function_link] = sym_function_link,
  [sym__text] = sym__text,
  [sym__begin] = sym__begin,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym__text_line] = sym__text_line,
  [sym_brief_description] = sym_brief_description,
  [sym_code_block_start] = sym_code_block_start,
  [sym_code_block_language] = sym_code_block_language,
  [sym_code_block_content] = sym_code_block_content,
  [sym_code_block_end] = sym_code_block_end,
  [sym_document] = sym_document,
  [sym_brief_header] = sym_brief_header,
  [sym_description] = sym_description,
  [sym_tag] = sym_tag,
  [sym__expression] = sym__expression,
  [sym_identifier] = sym_identifier,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_function] = sym_function,
  [sym_storageclass] = sym_storageclass,
  [sym_emphasis] = sym_emphasis,
  [sym_link] = sym_link,
  [sym_code_block] = sym_code_block,
  [sym__end] = sym__end,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym_tag_repeat2] = aux_sym_tag_repeat2,
  [aux_sym_qualified_identifier_repeat1] = aux_sym_qualified_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATbrief] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASHbrief] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_brief_header_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_tag_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name_with_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name_with_multiple_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name_with_types] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name_with_self_types] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name_with_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTa] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_link_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_link_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_SLASHa_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_function_link] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__begin] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__text_line] = {
    .visible = false,
    .named = true,
  },
  [sym_brief_description] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_language] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_content] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_brief_header] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_storageclass] = {
    .visible = true,
    .named = true,
  },
  [sym_emphasis] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_function = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function] = "function",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 2},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 1},
  [1] =
    {field_function, 1},
    {field_function, 2},
  [3] =
    {field_function, 1},
    {field_function, 2, .inherited = true},
  [5] =
    {field_function, 1},
    {field_function, 3},
  [7] =
    {field_function, 1},
    {field_function, 3, .inherited = true},
  [9] =
    {field_function, 1},
    {field_function, 2, .inherited = true},
    {field_function, 3},
  [12] =
    {field_function, 0, .inherited = true},
    {field_function, 1, .inherited = true},
  [14] =
    {field_function, 1},
    {field_function, 3, .inherited = true},
    {field_function, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [1] = aux_sym_tag_token2,
  },
  [3] = {
    [1] = aux_sym_link_token2,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_identifier, 2,
    sym_identifier,
    aux_sym_tag_token2,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 16,
  [22] = 19,
  [23] = 19,
  [24] = 24,
  [25] = 18,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 19,
  [33] = 20,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 31,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 19,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 19,
  [49] = 34,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 19,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 71,
  [74] = 74,
  [75] = 75,
  [76] = 75,
  [77] = 51,
  [78] = 74,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 19,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 79,
  [97] = 97,
  [98] = 98,
  [99] = 81,
  [100] = 98,
  [101] = 88,
  [102] = 102,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') SKIP(3)
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == '~') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == '~') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '~') ADVANCE(177);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(214);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '~') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(214);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(219);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '~') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(225);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(219);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '~') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(225);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(225);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(18)
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(225);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '*') SKIP(20)
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(21)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(219);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '~') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(225);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(219);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '~') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(225);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 31:
      if (lookahead == ')') ADVANCE(158);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(163);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(209);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'v') ADVANCE(76);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(69);
      if (lookahead == '~') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'v') ADVANCE(76);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(69);
      if (lookahead == '~') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'v') ADVANCE(76);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(69);
      if (lookahead == '~') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'v') ADVANCE(76);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(69);
      if (lookahead == '~') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_ATbrief);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BSLASHbrief);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '!') ADVANCE(210);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(211);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(211);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '\n') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name_with_multiple_arguments);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name_with_types);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name_with_self_types);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == ':') ADVANCE(220);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 't') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == ':') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '~') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_inout);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ':') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LTa);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == '\n') ADVANCE(150);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_link_token2);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(154);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_link_token2);
      if (lookahead == '\n') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_link_token2);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LT_SLASHa_GT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_function_link);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(174);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(174);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(212);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(213);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(34);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_function_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '!') ADVANCE(210);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(211);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(211);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == ':') ADVANCE(169);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == ':') ADVANCE(169);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(189);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '~') ADVANCE(173);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '~') ADVANCE(172);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(189);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(189);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(189);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '<') ADVANCE(218);
      if (lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '!') ADVANCE(215);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '<') ADVANCE(165);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(216);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '<') ADVANCE(210);
      if (lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(216);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(218);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(189);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(218);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(189);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(218);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(189);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(218);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '~') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(189);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(218);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '~') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(189);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(218);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '/') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(218);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '/') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(218);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(218);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(218);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(189);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(218);
      if (lookahead == '/') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(189);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(218);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(189);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(33);
      if (lookahead == '*') ADVANCE(201);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(33);
      if (lookahead == '*') ADVANCE(201);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(33);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(33);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(195);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(33);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(195);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(33);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(195);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(218);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(33);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__begin);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '<') ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(204);
      if (lookahead == '<') ADVANCE(202);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '<') ADVANCE(202);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != '<') ADVANCE(174);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '<') ADVANCE(202);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(211);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '<') ADVANCE(218);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(213);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(225);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '<') ADVANCE(210);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(216);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == ':') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '~') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '~') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__text_line);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__text_line);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 5, .external_lex_state = 2},
  [3] = {.lex_state = 22, .external_lex_state = 2},
  [4] = {.lex_state = 27, .external_lex_state = 2},
  [5] = {.lex_state = 8, .external_lex_state = 2},
  [6] = {.lex_state = 8, .external_lex_state = 2},
  [7] = {.lex_state = 8, .external_lex_state = 2},
  [8] = {.lex_state = 8, .external_lex_state = 2},
  [9] = {.lex_state = 29, .external_lex_state = 2},
  [10] = {.lex_state = 27, .external_lex_state = 2},
  [11] = {.lex_state = 27, .external_lex_state = 2},
  [12] = {.lex_state = 27, .external_lex_state = 2},
  [13] = {.lex_state = 10, .external_lex_state = 2},
  [14] = {.lex_state = 27, .external_lex_state = 2},
  [15] = {.lex_state = 27, .external_lex_state = 2},
  [16] = {.lex_state = 7, .external_lex_state = 2},
  [17] = {.lex_state = 13, .external_lex_state = 2},
  [18] = {.lex_state = 7, .external_lex_state = 2},
  [19] = {.lex_state = 10, .external_lex_state = 2},
  [20] = {.lex_state = 7, .external_lex_state = 2},
  [21] = {.lex_state = 26, .external_lex_state = 2},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 7, .external_lex_state = 2},
  [24] = {.lex_state = 16, .external_lex_state = 2},
  [25] = {.lex_state = 26, .external_lex_state = 2},
  [26] = {.lex_state = 8, .external_lex_state = 2},
  [27] = {.lex_state = 18, .external_lex_state = 2},
  [28] = {.lex_state = 24, .external_lex_state = 2},
  [29] = {.lex_state = 24, .external_lex_state = 2},
  [30] = {.lex_state = 18, .external_lex_state = 2},
  [31] = {.lex_state = 8, .external_lex_state = 2},
  [32] = {.lex_state = 26, .external_lex_state = 2},
  [33] = {.lex_state = 26, .external_lex_state = 2},
  [34] = {.lex_state = 8, .external_lex_state = 2},
  [35] = {.lex_state = 18, .external_lex_state = 2},
  [36] = {.lex_state = 24, .external_lex_state = 2},
  [37] = {.lex_state = 18, .external_lex_state = 2},
  [38] = {.lex_state = 18, .external_lex_state = 2},
  [39] = {.lex_state = 8, .external_lex_state = 2},
  [40] = {.lex_state = 27, .external_lex_state = 2},
  [41] = {.lex_state = 27, .external_lex_state = 2},
  [42] = {.lex_state = 16, .external_lex_state = 2},
  [43] = {.lex_state = 18, .external_lex_state = 2},
  [44] = {.lex_state = 16, .external_lex_state = 2},
  [45] = {.lex_state = 27, .external_lex_state = 2},
  [46] = {.lex_state = 27, .external_lex_state = 2},
  [47] = {.lex_state = 24, .external_lex_state = 2},
  [48] = {.lex_state = 27, .external_lex_state = 2},
  [49] = {.lex_state = 27, .external_lex_state = 2},
  [50] = {.lex_state = 27, .external_lex_state = 2},
  [51] = {.lex_state = 27, .external_lex_state = 2},
  [52] = {.lex_state = 24, .external_lex_state = 2},
  [53] = {.lex_state = 18, .external_lex_state = 2},
  [54] = {.lex_state = 18, .external_lex_state = 2},
  [55] = {.lex_state = 18, .external_lex_state = 2},
  [56] = {.lex_state = 18, .external_lex_state = 2},
  [57] = {.lex_state = 18, .external_lex_state = 2},
  [58] = {.lex_state = 18, .external_lex_state = 2},
  [59] = {.lex_state = 18, .external_lex_state = 2},
  [60] = {.lex_state = 18, .external_lex_state = 2},
  [61] = {.lex_state = 18, .external_lex_state = 2},
  [62] = {.lex_state = 18, .external_lex_state = 2},
  [63] = {.lex_state = 18, .external_lex_state = 2},
  [64] = {.lex_state = 18, .external_lex_state = 2},
  [65] = {.lex_state = 18, .external_lex_state = 2},
  [66] = {.lex_state = 18, .external_lex_state = 2},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 22},
  [71] = {.lex_state = 21},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0, .external_lex_state = 4},
  [86] = {.lex_state = 151},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 62},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 155},
  [94] = {.lex_state = 0, .external_lex_state = 5},
  [95] = {.lex_state = 0, .external_lex_state = 6},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATbrief] = ACTIONS(1),
    [anon_sym_BSLASHbrief] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_tag_name_with_argument] = ACTIONS(1),
    [sym_tag_name_with_multiple_arguments] = ACTIONS(1),
    [sym_tag_name_with_types] = ACTIONS(1),
    [sym_tag_name_with_self_types] = ACTIONS(1),
    [sym_tag_name_with_type] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_LTa] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHa_GT] = ACTIONS(1),
    [sym_function_link] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym__begin] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym__text_line] = ACTIONS(1),
    [sym_brief_description] = ACTIONS(1),
    [sym_code_block_start] = ACTIONS(1),
    [sym_code_block_language] = ACTIONS(1),
    [sym_code_block_content] = ACTIONS(1),
    [sym_code_block_end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(90),
    [sym__begin] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(7), 1,
      aux_sym_brief_header_token1,
    ACTIONS(9), 1,
      sym_tag_name_with_argument,
    ACTIONS(11), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(13), 1,
      sym_tag_name_with_types,
    ACTIONS(15), 1,
      sym_tag_name_with_self_types,
    ACTIONS(17), 1,
      sym_tag_name_with_type,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(31), 1,
      sym__text_line,
    ACTIONS(33), 1,
      sym_code_block_start,
    STATE(4), 1,
      sym_brief_header,
    STATE(11), 1,
      sym_storageclass,
    STATE(35), 1,
      sym_description,
    STATE(84), 1,
      sym__end,
    ACTIONS(5), 2,
      anon_sym_ATbrief,
      anon_sym_BSLASHbrief,
    ACTIONS(27), 2,
      sym_function_link,
      sym__text,
    ACTIONS(29), 2,
      anon_sym_SLASH,
      anon_sym_STAR_SLASH,
    STATE(14), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    STATE(27), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [71] = 12,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(37), 1,
      aux_sym_identifier_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(43), 1,
      sym_function_link,
    STATE(17), 1,
      sym_identifier,
    STATE(53), 1,
      sym_description,
    ACTIONS(41), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(12), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
    STATE(14), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(35), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [121] = 20,
    ACTIONS(9), 1,
      sym_tag_name_with_argument,
    ACTIONS(11), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(13), 1,
      sym_tag_name_with_types,
    ACTIONS(15), 1,
      sym_tag_name_with_self_types,
    ACTIONS(17), 1,
      sym_tag_name_with_type,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(33), 1,
      sym_code_block_start,
    ACTIONS(43), 1,
      sym_function_link,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(49), 1,
      sym__text_line,
    STATE(11), 1,
      sym_storageclass,
    STATE(37), 1,
      sym_description,
    STATE(102), 1,
      sym__end,
    STATE(14), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    STATE(38), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [186] = 10,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(43), 1,
      sym_function_link,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    STATE(65), 1,
      sym_description,
    ACTIONS(55), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(14), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(53), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [228] = 10,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(43), 1,
      sym_function_link,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_tag_repeat1,
    STATE(65), 1,
      sym_description,
    ACTIONS(55), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(14), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(53), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [270] = 10,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(43), 1,
      sym_function_link,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_tag_repeat1,
    STATE(61), 1,
      sym_description,
    ACTIONS(59), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(14), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(57), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [312] = 10,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(43), 1,
      sym_function_link,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      aux_sym_tag_repeat1,
    STATE(66), 1,
      sym_description,
    ACTIONS(63), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(14), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(61), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [354] = 10,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(43), 1,
      sym_function_link,
    ACTIONS(65), 1,
      aux_sym_identifier_token1,
    STATE(10), 1,
      sym_identifier,
    STATE(53), 1,
      sym_description,
    ACTIONS(41), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(14), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(35), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [396] = 8,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(43), 1,
      sym_function_link,
    STATE(60), 1,
      sym_description,
    ACTIONS(69), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(14), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(67), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [432] = 8,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(43), 1,
      sym_function_link,
    STATE(53), 1,
      sym_description,
    ACTIONS(41), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(14), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(35), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [468] = 8,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(43), 1,
      sym_function_link,
    STATE(66), 1,
      sym_description,
    ACTIONS(63), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(14), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(61), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [504] = 5,
    ACTIONS(75), 1,
      anon_sym_COLON_COLON,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(71), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(73), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [534] = 7,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(83), 1,
      sym_function_link,
    ACTIONS(85), 1,
      sym__text,
    ACTIONS(81), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(15), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(79), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [567] = 7,
    ACTIONS(91), 1,
      anon_sym_BSLASHa,
    ACTIONS(94), 1,
      anon_sym_LTa,
    ACTIONS(97), 1,
      sym_function_link,
    ACTIONS(100), 1,
      sym__text,
    ACTIONS(89), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(15), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(87), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [600] = 4,
    ACTIONS(107), 1,
      anon_sym_COLON_COLON,
    STATE(16), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(103), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(105), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [627] = 5,
    ACTIONS(110), 1,
      anon_sym_COLON_COLON,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(71), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(73), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [656] = 4,
    ACTIONS(75), 1,
      anon_sym_COLON_COLON,
    STATE(16), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(114), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(116), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [683] = 2,
    ACTIONS(118), 7,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(120), 11,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [706] = 2,
    ACTIONS(103), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(105), 11,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [728] = 4,
    ACTIONS(122), 1,
      anon_sym_COLON_COLON,
    STATE(21), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(103), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(105), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [754] = 2,
    ACTIONS(118), 6,
      sym_code_block_start,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(120), 11,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [776] = 2,
    ACTIONS(118), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(120), 11,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [798] = 8,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      aux_sym_tag_token1,
    ACTIONS(131), 1,
      aux_sym_identifier_token1,
    ACTIONS(135), 1,
      sym_function_link,
    STATE(28), 1,
      aux_sym_tag_repeat2,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(133), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(129), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [832] = 4,
    ACTIONS(110), 1,
      anon_sym_COLON_COLON,
    STATE(21), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(114), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(116), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [858] = 4,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_tag_repeat1,
    ACTIONS(142), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(140), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [884] = 14,
    ACTIONS(9), 1,
      sym_tag_name_with_argument,
    ACTIONS(11), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(13), 1,
      sym_tag_name_with_types,
    ACTIONS(15), 1,
      sym_tag_name_with_self_types,
    ACTIONS(17), 1,
      sym_tag_name_with_type,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_code_block_start,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(144), 1,
      sym__text_line,
    STATE(11), 1,
      sym_storageclass,
    STATE(102), 1,
      sym__end,
    STATE(43), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [929] = 7,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      aux_sym_identifier_token1,
    ACTIONS(150), 1,
      sym_function_link,
    STATE(47), 1,
      aux_sym_tag_repeat2,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(148), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(146), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [960] = 7,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      aux_sym_identifier_token1,
    ACTIONS(156), 1,
      sym_function_link,
    STATE(36), 1,
      aux_sym_tag_repeat2,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(154), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(152), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [991] = 14,
    ACTIONS(9), 1,
      sym_tag_name_with_argument,
    ACTIONS(11), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(13), 1,
      sym_tag_name_with_types,
    ACTIONS(15), 1,
      sym_tag_name_with_self_types,
    ACTIONS(17), 1,
      sym_tag_name_with_type,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_code_block_start,
    ACTIONS(144), 1,
      sym__text_line,
    ACTIONS(158), 1,
      anon_sym_SLASH,
    ACTIONS(160), 1,
      anon_sym_STAR_SLASH,
    STATE(11), 1,
      sym_storageclass,
    STATE(80), 1,
      sym__end,
    STATE(43), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [1036] = 2,
    ACTIONS(162), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(164), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1057] = 2,
    ACTIONS(118), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(120), 11,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1078] = 2,
    ACTIONS(103), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(105), 11,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1099] = 2,
    ACTIONS(166), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(168), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1120] = 14,
    ACTIONS(9), 1,
      sym_tag_name_with_argument,
    ACTIONS(11), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(13), 1,
      sym_tag_name_with_types,
    ACTIONS(15), 1,
      sym_tag_name_with_self_types,
    ACTIONS(17), 1,
      sym_tag_name_with_type,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_code_block_start,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(49), 1,
      sym__text_line,
    STATE(11), 1,
      sym_storageclass,
    STATE(102), 1,
      sym__end,
    STATE(38), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [1165] = 7,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      aux_sym_identifier_token1,
    ACTIONS(174), 1,
      sym_function_link,
    STATE(47), 1,
      aux_sym_tag_repeat2,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(172), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(170), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1196] = 14,
    ACTIONS(9), 1,
      sym_tag_name_with_argument,
    ACTIONS(11), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(13), 1,
      sym_tag_name_with_types,
    ACTIONS(15), 1,
      sym_tag_name_with_self_types,
    ACTIONS(17), 1,
      sym_tag_name_with_type,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_code_block_start,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(178), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(180), 1,
      sym__text_line,
    STATE(11), 1,
      sym_storageclass,
    STATE(82), 1,
      sym__end,
    STATE(30), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [1241] = 14,
    ACTIONS(9), 1,
      sym_tag_name_with_argument,
    ACTIONS(11), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(13), 1,
      sym_tag_name_with_types,
    ACTIONS(15), 1,
      sym_tag_name_with_self_types,
    ACTIONS(17), 1,
      sym_tag_name_with_type,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_code_block_start,
    ACTIONS(144), 1,
      sym__text_line,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(178), 1,
      anon_sym_STAR_SLASH,
    STATE(11), 1,
      sym_storageclass,
    STATE(82), 1,
      sym__end,
    STATE(43), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [1286] = 2,
    ACTIONS(142), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(140), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1307] = 2,
    ACTIONS(162), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(164), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1327] = 2,
    ACTIONS(184), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(182), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1347] = 3,
    ACTIONS(188), 1,
      aux_sym_tag_token1,
    ACTIONS(186), 5,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(190), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1369] = 13,
    ACTIONS(192), 1,
      sym_tag_name_with_argument,
    ACTIONS(195), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(198), 1,
      sym_tag_name_with_types,
    ACTIONS(201), 1,
      sym_tag_name_with_self_types,
    ACTIONS(204), 1,
      sym_tag_name_with_type,
    ACTIONS(207), 1,
      sym_tag_name,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(215), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(217), 1,
      sym__text_line,
    ACTIONS(220), 1,
      sym_code_block_start,
    STATE(11), 1,
      sym_storageclass,
    STATE(43), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [1411] = 2,
    ACTIONS(118), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      aux_sym_tag_token1,
      anon_sym_LBRACK,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(120), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1431] = 2,
    ACTIONS(225), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(223), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1451] = 2,
    ACTIONS(229), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(227), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1471] = 4,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_tag_repeat2,
    ACTIONS(236), 4,
      sym_code_block_start,
      anon_sym_LBRACK,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(234), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1495] = 2,
    ACTIONS(118), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(120), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1515] = 2,
    ACTIONS(166), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(168), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1535] = 2,
    ACTIONS(240), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(238), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1555] = 2,
    ACTIONS(244), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(242), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1575] = 2,
    ACTIONS(246), 5,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(248), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1594] = 2,
    ACTIONS(63), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(61), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1610] = 2,
    ACTIONS(69), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(67), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1626] = 2,
    ACTIONS(252), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(250), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1642] = 2,
    ACTIONS(118), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(120), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1658] = 2,
    ACTIONS(256), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(254), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1674] = 2,
    ACTIONS(256), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(254), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1690] = 2,
    ACTIONS(260), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(258), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1706] = 2,
    ACTIONS(264), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(262), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1722] = 2,
    ACTIONS(268), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(266), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1738] = 2,
    ACTIONS(272), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(270), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1754] = 2,
    ACTIONS(272), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(270), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1770] = 2,
    ACTIONS(276), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(274), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1786] = 2,
    ACTIONS(59), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(57), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1802] = 2,
    ACTIONS(55), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(53), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1818] = 6,
    ACTIONS(278), 1,
      aux_sym_identifier_token1,
    ACTIONS(280), 1,
      anon_sym_TILDE,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      sym_identifier,
    STATE(69), 1,
      sym_storageclass,
    STATE(8), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [1839] = 4,
    ACTIONS(278), 1,
      aux_sym_identifier_token1,
    ACTIONS(280), 1,
      anon_sym_TILDE,
    STATE(13), 1,
      sym_identifier,
    STATE(39), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [1854] = 4,
    ACTIONS(278), 1,
      aux_sym_identifier_token1,
    ACTIONS(280), 1,
      anon_sym_TILDE,
    STATE(13), 1,
      sym_identifier,
    STATE(5), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [1869] = 3,
    ACTIONS(284), 1,
      aux_sym_identifier_token1,
    ACTIONS(286), 1,
      sym_function_link,
    STATE(42), 1,
      sym_identifier,
  [1879] = 2,
    ACTIONS(288), 1,
      anon_sym_in,
    ACTIONS(290), 2,
      anon_sym_out,
      anon_sym_inout,
  [1887] = 3,
    ACTIONS(284), 1,
      aux_sym_identifier_token1,
    ACTIONS(292), 1,
      sym_function_link,
    STATE(24), 1,
      sym_identifier,
  [1897] = 2,
    ACTIONS(294), 1,
      anon_sym_in,
    ACTIONS(296), 2,
      anon_sym_out,
      anon_sym_inout,
  [1905] = 2,
    ACTIONS(298), 1,
      aux_sym_identifier_token1,
    STATE(101), 1,
      sym_identifier,
  [1912] = 2,
    ACTIONS(300), 1,
      aux_sym_identifier_token1,
    STATE(33), 1,
      sym_identifier,
  [1919] = 2,
    ACTIONS(302), 1,
      aux_sym_identifier_token1,
    STATE(20), 1,
      sym_identifier,
  [1926] = 1,
    ACTIONS(244), 2,
      aux_sym_identifier_token1,
      anon_sym_TILDE,
  [1931] = 2,
    ACTIONS(298), 1,
      aux_sym_identifier_token1,
    STATE(88), 1,
      sym_identifier,
  [1938] = 1,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
  [1942] = 1,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
  [1946] = 1,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
  [1950] = 1,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
  [1954] = 1,
    ACTIONS(312), 1,
      sym_code_block_content,
  [1958] = 1,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
  [1962] = 1,
    ACTIONS(316), 1,
      sym_code_block_end,
  [1966] = 1,
    ACTIONS(318), 1,
      aux_sym_link_token1,
  [1970] = 1,
    ACTIONS(320), 1,
      aux_sym_identifier_token1,
  [1974] = 1,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
  [1978] = 1,
    ACTIONS(324), 1,
      aux_sym_tag_token2,
  [1982] = 1,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
  [1986] = 1,
    ACTIONS(328), 1,
      anon_sym_LT_SLASHa_GT,
  [1990] = 1,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
  [1994] = 1,
    ACTIONS(330), 1,
      aux_sym_link_token2,
  [1998] = 1,
    ACTIONS(332), 1,
      sym_brief_description,
  [2002] = 1,
    ACTIONS(334), 1,
      sym_code_block_language,
  [2006] = 1,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
  [2010] = 1,
    ACTIONS(338), 1,
      anon_sym_GT,
  [2014] = 1,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
  [2018] = 1,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
  [2022] = 1,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
  [2026] = 1,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
  [2030] = 1,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 121,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 228,
  [SMALL_STATE(7)] = 270,
  [SMALL_STATE(8)] = 312,
  [SMALL_STATE(9)] = 354,
  [SMALL_STATE(10)] = 396,
  [SMALL_STATE(11)] = 432,
  [SMALL_STATE(12)] = 468,
  [SMALL_STATE(13)] = 504,
  [SMALL_STATE(14)] = 534,
  [SMALL_STATE(15)] = 567,
  [SMALL_STATE(16)] = 600,
  [SMALL_STATE(17)] = 627,
  [SMALL_STATE(18)] = 656,
  [SMALL_STATE(19)] = 683,
  [SMALL_STATE(20)] = 706,
  [SMALL_STATE(21)] = 728,
  [SMALL_STATE(22)] = 754,
  [SMALL_STATE(23)] = 776,
  [SMALL_STATE(24)] = 798,
  [SMALL_STATE(25)] = 832,
  [SMALL_STATE(26)] = 858,
  [SMALL_STATE(27)] = 884,
  [SMALL_STATE(28)] = 929,
  [SMALL_STATE(29)] = 960,
  [SMALL_STATE(30)] = 991,
  [SMALL_STATE(31)] = 1036,
  [SMALL_STATE(32)] = 1057,
  [SMALL_STATE(33)] = 1078,
  [SMALL_STATE(34)] = 1099,
  [SMALL_STATE(35)] = 1120,
  [SMALL_STATE(36)] = 1165,
  [SMALL_STATE(37)] = 1196,
  [SMALL_STATE(38)] = 1241,
  [SMALL_STATE(39)] = 1286,
  [SMALL_STATE(40)] = 1307,
  [SMALL_STATE(41)] = 1327,
  [SMALL_STATE(42)] = 1347,
  [SMALL_STATE(43)] = 1369,
  [SMALL_STATE(44)] = 1411,
  [SMALL_STATE(45)] = 1431,
  [SMALL_STATE(46)] = 1451,
  [SMALL_STATE(47)] = 1471,
  [SMALL_STATE(48)] = 1495,
  [SMALL_STATE(49)] = 1515,
  [SMALL_STATE(50)] = 1535,
  [SMALL_STATE(51)] = 1555,
  [SMALL_STATE(52)] = 1575,
  [SMALL_STATE(53)] = 1594,
  [SMALL_STATE(54)] = 1610,
  [SMALL_STATE(55)] = 1626,
  [SMALL_STATE(56)] = 1642,
  [SMALL_STATE(57)] = 1658,
  [SMALL_STATE(58)] = 1674,
  [SMALL_STATE(59)] = 1690,
  [SMALL_STATE(60)] = 1706,
  [SMALL_STATE(61)] = 1722,
  [SMALL_STATE(62)] = 1738,
  [SMALL_STATE(63)] = 1754,
  [SMALL_STATE(64)] = 1770,
  [SMALL_STATE(65)] = 1786,
  [SMALL_STATE(66)] = 1802,
  [SMALL_STATE(67)] = 1818,
  [SMALL_STATE(68)] = 1839,
  [SMALL_STATE(69)] = 1854,
  [SMALL_STATE(70)] = 1869,
  [SMALL_STATE(71)] = 1879,
  [SMALL_STATE(72)] = 1887,
  [SMALL_STATE(73)] = 1897,
  [SMALL_STATE(74)] = 1905,
  [SMALL_STATE(75)] = 1912,
  [SMALL_STATE(76)] = 1919,
  [SMALL_STATE(77)] = 1926,
  [SMALL_STATE(78)] = 1931,
  [SMALL_STATE(79)] = 1938,
  [SMALL_STATE(80)] = 1942,
  [SMALL_STATE(81)] = 1946,
  [SMALL_STATE(82)] = 1950,
  [SMALL_STATE(83)] = 1954,
  [SMALL_STATE(84)] = 1958,
  [SMALL_STATE(85)] = 1962,
  [SMALL_STATE(86)] = 1966,
  [SMALL_STATE(87)] = 1970,
  [SMALL_STATE(88)] = 1974,
  [SMALL_STATE(89)] = 1978,
  [SMALL_STATE(90)] = 1982,
  [SMALL_STATE(91)] = 1986,
  [SMALL_STATE(92)] = 1990,
  [SMALL_STATE(93)] = 1994,
  [SMALL_STATE(94)] = 1998,
  [SMALL_STATE(95)] = 2002,
  [SMALL_STATE(96)] = 2006,
  [SMALL_STATE(97)] = 2010,
  [SMALL_STATE(98)] = 2014,
  [SMALL_STATE(99)] = 2018,
  [SMALL_STATE(100)] = 2022,
  [SMALL_STATE(101)] = 2026,
  [SMALL_STATE(102)] = 2030,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(87),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(86),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(15),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(15),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(76),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(75),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(68),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, .production_id = 7),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, .production_id = 7),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brief_header, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brief_header, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 1),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brief_header, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brief_header, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphasis, 2, .production_id = 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emphasis, 2, .production_id = 3),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 9), SHIFT_REPEAT(70),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 9),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 9),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storageclass, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storageclass, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 3, .production_id = 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat2, 3, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5, .production_id = 10),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5, .production_id = 10),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, .production_id = 8),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, .production_id = 8),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, .production_id = 6),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, .production_id = 6),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [326] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_brief_description = 0,
  ts_external_token_code_block_start = 1,
  ts_external_token_code_block_language = 2,
  ts_external_token_code_block_content = 3,
  ts_external_token_code_block_end = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_brief_description] = sym_brief_description,
  [ts_external_token_code_block_start] = sym_code_block_start,
  [ts_external_token_code_block_language] = sym_code_block_language,
  [ts_external_token_code_block_content] = sym_code_block_content,
  [ts_external_token_code_block_end] = sym_code_block_end,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_brief_description] = true,
    [ts_external_token_code_block_start] = true,
    [ts_external_token_code_block_language] = true,
    [ts_external_token_code_block_content] = true,
    [ts_external_token_code_block_end] = true,
  },
  [2] = {
    [ts_external_token_code_block_start] = true,
  },
  [3] = {
    [ts_external_token_code_block_content] = true,
  },
  [4] = {
    [ts_external_token_code_block_end] = true,
  },
  [5] = {
    [ts_external_token_brief_description] = true,
  },
  [6] = {
    [ts_external_token_code_block_language] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_doxygen_external_scanner_create(void);
void tree_sitter_doxygen_external_scanner_destroy(void *);
bool tree_sitter_doxygen_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_doxygen_external_scanner_serialize(void *, char *);
void tree_sitter_doxygen_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_doxygen(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_doxygen_external_scanner_create,
      tree_sitter_doxygen_external_scanner_destroy,
      tree_sitter_doxygen_external_scanner_scan,
      tree_sitter_doxygen_external_scanner_serialize,
      tree_sitter_doxygen_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
