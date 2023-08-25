#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
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
  sym__text = 24,
  sym__begin = 25,
  anon_sym_SLASH = 26,
  anon_sym_STAR_SLASH = 27,
  sym_brief_description = 28,
  sym_document = 29,
  sym_brief_header = 30,
  sym_description = 31,
  sym_tag = 32,
  sym__expression = 33,
  sym_identifier = 34,
  sym_qualified_identifier = 35,
  sym_function = 36,
  sym_storageclass = 37,
  sym_emphasis = 38,
  sym__end = 39,
  aux_sym_document_repeat1 = 40,
  aux_sym_description_repeat1 = 41,
  aux_sym_tag_repeat1 = 42,
  aux_sym_tag_repeat2 = 43,
  aux_sym_qualified_identifier_repeat1 = 44,
  alias_sym_text = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATbrief] = "@brief",
  [anon_sym_BSLASHbrief] = "\\brief",
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
  [sym__text] = "_text",
  [sym__begin] = "_begin",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_brief_description] = "brief_description",
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
  [sym__end] = "_end",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_tag_repeat2] = "tag_repeat2",
  [aux_sym_qualified_identifier_repeat1] = "qualified_identifier_repeat1",
  [alias_sym_text] = "text",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATbrief] = anon_sym_ATbrief,
  [anon_sym_BSLASHbrief] = anon_sym_BSLASHbrief,
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
  [sym__text] = sym__text,
  [sym__begin] = sym__begin,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_brief_description] = sym_brief_description,
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
  [sym__end] = sym__end,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym_tag_repeat2] = aux_sym_tag_repeat2,
  [aux_sym_qualified_identifier_repeat1] = aux_sym_qualified_identifier_repeat1,
  [alias_sym_text] = alias_sym_text,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATbrief] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHbrief] = {
    .visible = true,
    .named = false,
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
  [sym_brief_description] = {
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
  [alias_sym_text] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = aux_sym_tag_token2,
  },
  [2] = {
    [1] = alias_sym_text,
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
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 18,
  [24] = 18,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 16,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 19,
  [39] = 39,
  [40] = 25,
  [41] = 18,
  [42] = 28,
  [43] = 26,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 26,
  [49] = 49,
  [50] = 50,
  [51] = 18,
  [52] = 28,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 66,
  [68] = 66,
  [69] = 69,
  [70] = 47,
  [71] = 69,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 79,
  [82] = 82,
  [83] = 75,
  [84] = 84,
  [85] = 75,
  [86] = 84,
  [87] = 84,
  [88] = 78,
  [89] = 78,
  [90] = 90,
  [91] = 91,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == '~') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == '~') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '*') SKIP(3)
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == '~') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(44);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(5)
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '~') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(9)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(11)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '~') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(17)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(19)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(21)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(23)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '*') SKIP(25)
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(26)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(28)
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(27)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '~') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(49);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(158);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(68);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(68);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(68);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(68);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(33);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == '~') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_ATbrief);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BSLASHbrief);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (lookahead == 's') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name_with_multiple_arguments);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name_with_types);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name_with_self_types);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_inout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '\n' ||
          lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '\n' ||
          lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(31);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '\n' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__begin);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '!') ADVANCE(154);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '<') ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '!') ADVANCE(154);
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(153);
      if (lookahead == '<') ADVANCE(151);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '<') ADVANCE(151);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!') ADVANCE(154);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '<') ADVANCE(151);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '\n' ||
          lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(146);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 23},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 26},
  [65] = {.lex_state = 26},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 0, .external_lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 28},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 0},
};

enum {
  ts_external_token_brief_description = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_brief_description] = sym_brief_description,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_brief_description] = true,
  },
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
    [sym__text] = ACTIONS(1),
    [sym__begin] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym_brief_description] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(76),
    [sym__begin] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
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
      sym__text,
    STATE(4), 1,
      sym_brief_header,
    STATE(21), 1,
      sym_storageclass,
    STATE(30), 1,
      sym_description,
    STATE(80), 1,
      sym__end,
    ACTIONS(5), 2,
      anon_sym_ATbrief,
      anon_sym_BSLASHbrief,
    ACTIONS(27), 2,
      anon_sym_SLASH,
      anon_sym_STAR_SLASH,
    STATE(22), 2,
      sym_emphasis,
      aux_sym_description_repeat1,
    STATE(27), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [59] = 10,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      sym__text,
    ACTIONS(31), 1,
      aux_sym_identifier_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    STATE(15), 1,
      sym_identifier,
    STATE(55), 1,
      sym_description,
    ACTIONS(35), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(22), 2,
      sym_emphasis,
      aux_sym_description_repeat1,
    STATE(20), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
    ACTIONS(29), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [100] = 16,
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
      sym__text,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_STAR_SLASH,
    STATE(21), 1,
      sym_storageclass,
    STATE(33), 1,
      sym_description,
    STATE(82), 1,
      sym__end,
    STATE(22), 2,
      sym_emphasis,
      aux_sym_description_repeat1,
    STATE(35), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [151] = 8,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      sym__text,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_tag_repeat1,
    STATE(58), 1,
      sym_description,
    ACTIONS(45), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(22), 2,
      sym_emphasis,
      aux_sym_description_repeat1,
    ACTIONS(43), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [184] = 8,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      sym__text,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_tag_repeat1,
    STATE(56), 1,
      sym_description,
    ACTIONS(49), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(22), 2,
      sym_emphasis,
      aux_sym_description_repeat1,
    ACTIONS(47), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [217] = 8,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      sym__text,
    ACTIONS(51), 1,
      aux_sym_identifier_token1,
    STATE(17), 1,
      sym_identifier,
    STATE(55), 1,
      sym_description,
    ACTIONS(35), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(22), 2,
      sym_emphasis,
      aux_sym_description_repeat1,
    ACTIONS(29), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [250] = 8,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      sym__text,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_tag_repeat1,
    STATE(56), 1,
      sym_description,
    ACTIONS(49), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(22), 2,
      sym_emphasis,
      aux_sym_description_repeat1,
    ACTIONS(47), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [283] = 8,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      sym__text,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_tag_repeat1,
    STATE(53), 1,
      sym_description,
    ACTIONS(55), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(22), 2,
      sym_emphasis,
      aux_sym_description_repeat1,
    ACTIONS(53), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [316] = 9,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(59), 1,
      aux_sym_tag_token1,
    ACTIONS(61), 1,
      aux_sym_identifier_token1,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    STATE(13), 1,
      aux_sym_tag_repeat2,
    STATE(53), 1,
      sym_function,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(55), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(53), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [351] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(65), 3,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(67), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [377] = 8,
    ACTIONS(31), 1,
      aux_sym_identifier_token1,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    STATE(29), 1,
      aux_sym_tag_repeat2,
    STATE(58), 1,
      sym_function,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(45), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(43), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [409] = 8,
    ACTIONS(31), 1,
      aux_sym_identifier_token1,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    STATE(29), 1,
      aux_sym_tag_repeat2,
    STATE(56), 1,
      sym_function,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(49), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(47), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [441] = 8,
    ACTIONS(31), 1,
      aux_sym_identifier_token1,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    STATE(12), 1,
      aux_sym_tag_repeat2,
    STATE(56), 1,
      sym_function,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(49), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(47), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [473] = 5,
    ACTIONS(73), 1,
      anon_sym_COLON_COLON,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(65), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(67), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [498] = 4,
    ACTIONS(81), 1,
      anon_sym_COLON_COLON,
    STATE(16), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(77), 3,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(79), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [521] = 6,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      sym__text,
    STATE(54), 1,
      sym_description,
    ACTIONS(86), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(22), 2,
      sym_emphasis,
      aux_sym_description_repeat1,
    ACTIONS(84), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [548] = 2,
    ACTIONS(88), 5,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(90), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [567] = 4,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    STATE(16), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(92), 3,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(94), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [590] = 6,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      sym__text,
    STATE(53), 1,
      sym_description,
    ACTIONS(55), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(22), 2,
      sym_emphasis,
      aux_sym_description_repeat1,
    ACTIONS(53), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [617] = 6,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      sym__text,
    STATE(55), 1,
      sym_description,
    ACTIONS(35), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(22), 2,
      sym_emphasis,
      aux_sym_description_repeat1,
    ACTIONS(29), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [644] = 5,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(100), 1,
      sym__text,
    ACTIONS(98), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(37), 2,
      sym_emphasis,
      aux_sym_description_repeat1,
    ACTIONS(96), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [668] = 2,
    ACTIONS(88), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(90), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [686] = 2,
    ACTIONS(88), 4,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(90), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [704] = 2,
    ACTIONS(77), 4,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(79), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [722] = 2,
    ACTIONS(102), 5,
      anon_sym_COMMA,
      aux_sym_tag_token1,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(104), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_STAR_SLASH,
  [740] = 12,
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
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_STAR_SLASH,
    STATE(21), 1,
      sym_storageclass,
    STATE(82), 1,
      sym__end,
    STATE(39), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [778] = 2,
    ACTIONS(106), 5,
      anon_sym_COMMA,
      aux_sym_tag_token1,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(108), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_STAR_SLASH,
  [796] = 4,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_tag_repeat2,
    ACTIONS(115), 4,
      aux_sym_identifier_token1,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(113), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [818] = 12,
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
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_STAR_SLASH,
    STATE(21), 1,
      sym_storageclass,
    STATE(82), 1,
      sym__end,
    STATE(35), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [856] = 3,
    ACTIONS(117), 1,
      aux_sym_tag_token1,
    ACTIONS(115), 4,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(113), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_STAR_SLASH,
  [876] = 4,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_tag_repeat1,
    ACTIONS(124), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(122), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [898] = 12,
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
    ACTIONS(126), 1,
      anon_sym_SLASH,
    ACTIONS(128), 1,
      anon_sym_STAR_SLASH,
    STATE(21), 1,
      sym_storageclass,
    STATE(91), 1,
      sym__end,
    STATE(36), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [936] = 4,
    ACTIONS(130), 1,
      anon_sym_COLON_COLON,
    STATE(34), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(77), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(79), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [958] = 12,
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
    ACTIONS(126), 1,
      anon_sym_SLASH,
    ACTIONS(128), 1,
      anon_sym_STAR_SLASH,
    STATE(21), 1,
      sym_storageclass,
    STATE(91), 1,
      sym__end,
    STATE(39), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [996] = 12,
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
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(135), 1,
      anon_sym_STAR_SLASH,
    STATE(21), 1,
      sym_storageclass,
    STATE(77), 1,
      sym__end,
    STATE(39), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [1034] = 5,
    ACTIONS(141), 1,
      anon_sym_BSLASHa,
    ACTIONS(144), 1,
      sym__text,
    ACTIONS(139), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(37), 2,
      sym_emphasis,
      aux_sym_description_repeat1,
    ACTIONS(137), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [1058] = 4,
    ACTIONS(73), 1,
      anon_sym_COLON_COLON,
    STATE(34), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(92), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(94), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1080] = 11,
    ACTIONS(147), 1,
      sym_tag_name_with_argument,
    ACTIONS(150), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(153), 1,
      sym_tag_name_with_types,
    ACTIONS(156), 1,
      sym_tag_name_with_self_types,
    ACTIONS(159), 1,
      sym_tag_name_with_type,
    ACTIONS(162), 1,
      sym_tag_name,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_SLASH,
    ACTIONS(170), 1,
      anon_sym_STAR_SLASH,
    STATE(21), 1,
      sym_storageclass,
    STATE(39), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [1115] = 2,
    ACTIONS(77), 3,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(79), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1132] = 2,
    ACTIONS(88), 3,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(90), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1149] = 2,
    ACTIONS(106), 3,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(108), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1166] = 2,
    ACTIONS(102), 3,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(104), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1183] = 2,
    ACTIONS(172), 5,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(174), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [1200] = 2,
    ACTIONS(124), 3,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(122), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1217] = 2,
    ACTIONS(178), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(176), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1233] = 2,
    ACTIONS(182), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(180), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1249] = 2,
    ACTIONS(102), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(104), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1265] = 2,
    ACTIONS(186), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(184), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1281] = 2,
    ACTIONS(190), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(188), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1297] = 2,
    ACTIONS(88), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(90), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1313] = 2,
    ACTIONS(106), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(108), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1329] = 2,
    ACTIONS(49), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(47), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [1343] = 2,
    ACTIONS(194), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(192), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [1357] = 2,
    ACTIONS(55), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(53), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [1371] = 2,
    ACTIONS(45), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(43), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [1385] = 2,
    ACTIONS(86), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(84), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [1399] = 2,
    ACTIONS(198), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(196), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [1413] = 6,
    ACTIONS(200), 1,
      aux_sym_identifier_token1,
    ACTIONS(202), 1,
      anon_sym_TILDE,
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_identifier,
    STATE(60), 1,
      sym_storageclass,
    STATE(9), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [1434] = 4,
    ACTIONS(200), 1,
      aux_sym_identifier_token1,
    ACTIONS(202), 1,
      anon_sym_TILDE,
    STATE(11), 1,
      sym_identifier,
    STATE(6), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [1449] = 4,
    ACTIONS(200), 1,
      aux_sym_identifier_token1,
    ACTIONS(202), 1,
      anon_sym_TILDE,
    STATE(11), 1,
      sym_identifier,
    STATE(45), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [1464] = 4,
    ACTIONS(31), 1,
      aux_sym_identifier_token1,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    STATE(31), 1,
      sym_function,
    STATE(73), 1,
      sym_identifier,
  [1477] = 4,
    ACTIONS(31), 1,
      aux_sym_identifier_token1,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    STATE(10), 1,
      sym_function,
    STATE(73), 1,
      sym_identifier,
  [1490] = 2,
    ACTIONS(206), 1,
      anon_sym_in,
    ACTIONS(208), 2,
      anon_sym_out,
      anon_sym_inout,
  [1498] = 2,
    ACTIONS(210), 1,
      anon_sym_in,
    ACTIONS(212), 2,
      anon_sym_out,
      anon_sym_inout,
  [1506] = 2,
    ACTIONS(31), 1,
      aux_sym_identifier_token1,
    STATE(88), 1,
      sym_identifier,
  [1513] = 2,
    ACTIONS(31), 1,
      aux_sym_identifier_token1,
    STATE(78), 1,
      sym_identifier,
  [1520] = 2,
    ACTIONS(31), 1,
      aux_sym_identifier_token1,
    STATE(89), 1,
      sym_identifier,
  [1527] = 2,
    ACTIONS(214), 1,
      aux_sym_identifier_token1,
    STATE(40), 1,
      sym_identifier,
  [1534] = 1,
    ACTIONS(182), 2,
      aux_sym_identifier_token1,
      anon_sym_TILDE,
  [1539] = 2,
    ACTIONS(216), 1,
      aux_sym_identifier_token1,
    STATE(25), 1,
      sym_identifier,
  [1546] = 1,
    ACTIONS(218), 1,
      sym_brief_description,
  [1550] = 1,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
  [1554] = 1,
    ACTIONS(222), 1,
      aux_sym_tag_token2,
  [1558] = 1,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
  [1562] = 1,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
  [1566] = 1,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [1570] = 1,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
  [1574] = 1,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
  [1578] = 1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [1582] = 1,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
  [1586] = 1,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
  [1590] = 1,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
  [1594] = 1,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
  [1598] = 1,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
  [1602] = 1,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
  [1606] = 1,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
  [1610] = 1,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
  [1614] = 1,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
  [1618] = 1,
    ACTIONS(254), 1,
      aux_sym_identifier_token1,
  [1622] = 1,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 217,
  [SMALL_STATE(8)] = 250,
  [SMALL_STATE(9)] = 283,
  [SMALL_STATE(10)] = 316,
  [SMALL_STATE(11)] = 351,
  [SMALL_STATE(12)] = 377,
  [SMALL_STATE(13)] = 409,
  [SMALL_STATE(14)] = 441,
  [SMALL_STATE(15)] = 473,
  [SMALL_STATE(16)] = 498,
  [SMALL_STATE(17)] = 521,
  [SMALL_STATE(18)] = 548,
  [SMALL_STATE(19)] = 567,
  [SMALL_STATE(20)] = 590,
  [SMALL_STATE(21)] = 617,
  [SMALL_STATE(22)] = 644,
  [SMALL_STATE(23)] = 668,
  [SMALL_STATE(24)] = 686,
  [SMALL_STATE(25)] = 704,
  [SMALL_STATE(26)] = 722,
  [SMALL_STATE(27)] = 740,
  [SMALL_STATE(28)] = 778,
  [SMALL_STATE(29)] = 796,
  [SMALL_STATE(30)] = 818,
  [SMALL_STATE(31)] = 856,
  [SMALL_STATE(32)] = 876,
  [SMALL_STATE(33)] = 898,
  [SMALL_STATE(34)] = 936,
  [SMALL_STATE(35)] = 958,
  [SMALL_STATE(36)] = 996,
  [SMALL_STATE(37)] = 1034,
  [SMALL_STATE(38)] = 1058,
  [SMALL_STATE(39)] = 1080,
  [SMALL_STATE(40)] = 1115,
  [SMALL_STATE(41)] = 1132,
  [SMALL_STATE(42)] = 1149,
  [SMALL_STATE(43)] = 1166,
  [SMALL_STATE(44)] = 1183,
  [SMALL_STATE(45)] = 1200,
  [SMALL_STATE(46)] = 1217,
  [SMALL_STATE(47)] = 1233,
  [SMALL_STATE(48)] = 1249,
  [SMALL_STATE(49)] = 1265,
  [SMALL_STATE(50)] = 1281,
  [SMALL_STATE(51)] = 1297,
  [SMALL_STATE(52)] = 1313,
  [SMALL_STATE(53)] = 1329,
  [SMALL_STATE(54)] = 1343,
  [SMALL_STATE(55)] = 1357,
  [SMALL_STATE(56)] = 1371,
  [SMALL_STATE(57)] = 1385,
  [SMALL_STATE(58)] = 1399,
  [SMALL_STATE(59)] = 1413,
  [SMALL_STATE(60)] = 1434,
  [SMALL_STATE(61)] = 1449,
  [SMALL_STATE(62)] = 1464,
  [SMALL_STATE(63)] = 1477,
  [SMALL_STATE(64)] = 1490,
  [SMALL_STATE(65)] = 1498,
  [SMALL_STATE(66)] = 1506,
  [SMALL_STATE(67)] = 1513,
  [SMALL_STATE(68)] = 1520,
  [SMALL_STATE(69)] = 1527,
  [SMALL_STATE(70)] = 1534,
  [SMALL_STATE(71)] = 1539,
  [SMALL_STATE(72)] = 1546,
  [SMALL_STATE(73)] = 1550,
  [SMALL_STATE(74)] = 1554,
  [SMALL_STATE(75)] = 1558,
  [SMALL_STATE(76)] = 1562,
  [SMALL_STATE(77)] = 1566,
  [SMALL_STATE(78)] = 1570,
  [SMALL_STATE(79)] = 1574,
  [SMALL_STATE(80)] = 1578,
  [SMALL_STATE(81)] = 1582,
  [SMALL_STATE(82)] = 1586,
  [SMALL_STATE(83)] = 1590,
  [SMALL_STATE(84)] = 1594,
  [SMALL_STATE(85)] = 1598,
  [SMALL_STATE(86)] = 1602,
  [SMALL_STATE(87)] = 1606,
  [SMALL_STATE(88)] = 1610,
  [SMALL_STATE(89)] = 1614,
  [SMALL_STATE(90)] = 1618,
  [SMALL_STATE(91)] = 1622,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(71),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 2), SHIFT_REPEAT(62),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat2, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(61),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(69),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(90),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(37),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(65),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat2, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brief_header, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brief_header, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storageclass, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storageclass, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphasis, 2, .production_id = 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emphasis, 2, .production_id = 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brief_header, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brief_header, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [226] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
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
