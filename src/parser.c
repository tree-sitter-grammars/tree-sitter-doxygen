#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

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
  sym_brief_description = 34,
  sym_document = 35,
  sym_brief_header = 36,
  sym_description = 37,
  sym_tag = 38,
  sym__expression = 39,
  sym_identifier = 40,
  sym_qualified_identifier = 41,
  sym_function = 42,
  sym_storageclass = 43,
  sym_emphasis = 44,
  sym_link = 45,
  sym__end = 46,
  aux_sym_document_repeat1 = 47,
  aux_sym_description_repeat1 = 48,
  aux_sym_tag_repeat1 = 49,
  aux_sym_tag_repeat2 = 50,
  aux_sym_qualified_identifier_repeat1 = 51,
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
  [sym_link] = "link",
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
  [sym_link] = sym_link,
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
  [sym_link] = {
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

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = aux_sym_tag_token2,
  },
  [2] = {
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
  [17] = 17,
  [18] = 18,
  [19] = 10,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 14,
  [24] = 14,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 15,
  [29] = 17,
  [30] = 14,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 25,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 31,
  [40] = 40,
  [41] = 32,
  [42] = 14,
  [43] = 43,
  [44] = 44,
  [45] = 31,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 32,
  [52] = 52,
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
  [65] = 65,
  [66] = 65,
  [67] = 67,
  [68] = 67,
  [69] = 69,
  [70] = 69,
  [71] = 67,
  [72] = 50,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 80,
  [89] = 89,
  [90] = 80,
  [91] = 89,
  [92] = 86,
  [93] = 83,
  [94] = 83,
  [95] = 89,
  [96] = 96,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == '~') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == '~') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') SKIP(3)
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == '~') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(51);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '~') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '*') SKIP(23)
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(24)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(26)
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(25)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 31:
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(158);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(34);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(199);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'v') ADVANCE(78);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'v') ADVANCE(78);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'v') ADVANCE(78);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'v') ADVANCE(78);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != '<') ADVANCE(37);
      END_STATE();
    case 52:
      if (eof) ADVANCE(54);
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == '~') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(53)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(175);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_ATbrief);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BSLASHbrief);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(32);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name_with_multiple_arguments);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name_with_types);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name_with_self_types);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == 't') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == 'u') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == 'u') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ':') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_TILDE);
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
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ':') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_inout);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ':') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
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
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(183);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(183);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(36);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(37);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_function_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == '*') ADVANCE(190);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == ':') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == ':') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '*') ADVANCE(190);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == ':') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '*') ADVANCE(190);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '*') ADVANCE(190);
      if (lookahead == '/') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '*') ADVANCE(190);
      if (lookahead == '/') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '*') ADVANCE(190);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(32);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '(') ADVANCE(187);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '(') ADVANCE(187);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(170);
      if (lookahead == '\n' ||
          lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '\n' ||
          lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(170);
      if (lookahead == '\n' ||
          lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(170);
      if (lookahead == '\n' ||
          lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(33);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(34);
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '\n' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\n' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(34);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(35);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\n' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__begin);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '!') ADVANCE(195);
      if (lookahead == '*') ADVANCE(194);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '<') ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '!') ADVANCE(195);
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(194);
      if (lookahead == '<') ADVANCE(192);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '<') ADVANCE(192);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!') ADVANCE(195);
      if (lookahead == '*') ADVANCE(194);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '<') ADVANCE(192);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '\n' ||
          lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != '<') ADVANCE(183);
      END_STATE();
    case 199:
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
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 24},
  [66] = {.lex_state = 24},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 151},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 155},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0, .external_lex_state = 1},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 26},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
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
    [sym_brief_description] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(75),
    [sym__begin] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
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
    STATE(4), 1,
      sym_brief_header,
    STATE(11), 1,
      sym_storageclass,
    STATE(36), 1,
      sym_description,
    STATE(85), 1,
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
    STATE(37), 2,
      sym_tag,
      aux_sym_document_repeat1,
    STATE(20), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
  [64] = 12,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(33), 1,
      aux_sym_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      sym_function_link,
    STATE(19), 1,
      sym_identifier,
    STATE(58), 1,
      sym_description,
    ACTIONS(37), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(13), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
    STATE(20), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(31), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [112] = 18,
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
    ACTIONS(39), 1,
      sym_function_link,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_STAR_SLASH,
    STATE(11), 1,
      sym_storageclass,
    STATE(38), 1,
      sym_description,
    STATE(74), 1,
      sym__end,
    STATE(40), 2,
      sym_tag,
      aux_sym_document_repeat1,
    STATE(20), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
  [170] = 10,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(39), 1,
      sym_function_link,
    ACTIONS(45), 1,
      aux_sym_identifier_token1,
    STATE(12), 1,
      sym_identifier,
    STATE(58), 1,
      sym_description,
    ACTIONS(37), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(20), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(31), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [210] = 10,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(39), 1,
      sym_function_link,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_tag_repeat1,
    STATE(59), 1,
      sym_description,
    ACTIONS(51), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(20), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(49), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [250] = 10,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(39), 1,
      sym_function_link,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      aux_sym_tag_repeat1,
    STATE(56), 1,
      sym_description,
    ACTIONS(55), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(20), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(53), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [290] = 10,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(39), 1,
      sym_function_link,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_tag_repeat1,
    STATE(56), 1,
      sym_description,
    ACTIONS(55), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(20), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(53), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [330] = 10,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(39), 1,
      sym_function_link,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_tag_repeat1,
    STATE(57), 1,
      sym_description,
    ACTIONS(59), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(20), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(57), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [370] = 5,
    ACTIONS(65), 1,
      anon_sym_COLON_COLON,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(61), 5,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(63), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [398] = 8,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(39), 1,
      sym_function_link,
    STATE(58), 1,
      sym_description,
    ACTIONS(37), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(20), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(31), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [432] = 8,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(39), 1,
      sym_function_link,
    STATE(54), 1,
      sym_description,
    ACTIONS(71), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(20), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(69), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [466] = 8,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(27), 1,
      sym__text,
    ACTIONS(39), 1,
      sym_function_link,
    STATE(57), 1,
      sym_description,
    ACTIONS(59), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(20), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(57), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [500] = 2,
    ACTIONS(73), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(75), 10,
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
  [521] = 4,
    ACTIONS(81), 1,
      anon_sym_COLON_COLON,
    STATE(15), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(77), 5,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
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
  [546] = 7,
    ACTIONS(88), 1,
      anon_sym_BSLASHa,
    ACTIONS(91), 1,
      anon_sym_LTa,
    ACTIONS(94), 1,
      sym_function_link,
    ACTIONS(97), 1,
      sym__text,
    ACTIONS(86), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(16), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(84), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [577] = 4,
    ACTIONS(65), 1,
      anon_sym_COLON_COLON,
    STATE(15), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(100), 5,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(102), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [602] = 9,
    ACTIONS(33), 1,
      aux_sym_identifier_token1,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      aux_sym_tag_token1,
    ACTIONS(108), 1,
      anon_sym_TILDE,
    STATE(22), 1,
      aux_sym_tag_repeat2,
    STATE(57), 1,
      sym_function,
    STATE(87), 1,
      sym_identifier,
    ACTIONS(59), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(57), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [637] = 5,
    ACTIONS(110), 1,
      anon_sym_COLON_COLON,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(61), 4,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(63), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [664] = 7,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_LTa,
    ACTIONS(118), 1,
      sym_function_link,
    ACTIONS(120), 1,
      sym__text,
    ACTIONS(116), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(16), 3,
      sym_emphasis,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(114), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [695] = 8,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_TILDE,
    ACTIONS(122), 1,
      aux_sym_identifier_token1,
    STATE(26), 1,
      aux_sym_tag_repeat2,
    STATE(56), 1,
      sym_function,
    STATE(87), 1,
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
  [727] = 8,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_TILDE,
    ACTIONS(122), 1,
      aux_sym_identifier_token1,
    STATE(46), 1,
      aux_sym_tag_repeat2,
    STATE(56), 1,
      sym_function,
    STATE(87), 1,
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
  [759] = 2,
    ACTIONS(73), 5,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(75), 10,
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
  [779] = 2,
    ACTIONS(73), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(75), 10,
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
  [799] = 2,
    ACTIONS(77), 5,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(79), 10,
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
  [819] = 8,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_TILDE,
    ACTIONS(122), 1,
      aux_sym_identifier_token1,
    STATE(46), 1,
      aux_sym_tag_repeat2,
    STATE(59), 1,
      sym_function,
    STATE(87), 1,
      sym_identifier,
    ACTIONS(51), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(49), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [851] = 4,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_tag_repeat1,
    ACTIONS(129), 4,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(127), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [875] = 4,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    STATE(28), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(77), 4,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
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
  [899] = 4,
    ACTIONS(110), 1,
      anon_sym_COLON_COLON,
    STATE(28), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(100), 4,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(102), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [923] = 2,
    ACTIONS(73), 4,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(75), 10,
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
  [942] = 2,
    ACTIONS(134), 5,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(136), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [961] = 2,
    ACTIONS(138), 5,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(140), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [980] = 2,
    ACTIONS(129), 5,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(127), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [999] = 2,
    ACTIONS(77), 4,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(79), 10,
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
  [1018] = 2,
    ACTIONS(144), 4,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(142), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1036] = 12,
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
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_STAR_SLASH,
    STATE(11), 1,
      sym_storageclass,
    STATE(74), 1,
      sym__end,
    STATE(40), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [1074] = 12,
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
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_STAR_SLASH,
    STATE(11), 1,
      sym_storageclass,
    STATE(74), 1,
      sym__end,
    STATE(52), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [1112] = 12,
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
    ACTIONS(146), 1,
      anon_sym_SLASH,
    ACTIONS(148), 1,
      anon_sym_STAR_SLASH,
    STATE(11), 1,
      sym_storageclass,
    STATE(96), 1,
      sym__end,
    STATE(48), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [1150] = 2,
    ACTIONS(134), 5,
      anon_sym_COMMA,
      aux_sym_tag_token1,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(136), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_STAR_SLASH,
  [1168] = 12,
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
    ACTIONS(146), 1,
      anon_sym_SLASH,
    ACTIONS(148), 1,
      anon_sym_STAR_SLASH,
    STATE(11), 1,
      sym_storageclass,
    STATE(96), 1,
      sym__end,
    STATE(52), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [1206] = 2,
    ACTIONS(138), 5,
      anon_sym_COMMA,
      aux_sym_tag_token1,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(140), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_STAR_SLASH,
  [1224] = 2,
    ACTIONS(73), 4,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(75), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1242] = 2,
    ACTIONS(152), 4,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(150), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1260] = 2,
    ACTIONS(156), 4,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(154), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1278] = 2,
    ACTIONS(134), 4,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(136), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1296] = 4,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_tag_repeat2,
    ACTIONS(163), 4,
      aux_sym_identifier_token1,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(161), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [1318] = 3,
    ACTIONS(165), 1,
      aux_sym_tag_token1,
    ACTIONS(163), 4,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(161), 8,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_STAR_SLASH,
  [1338] = 12,
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
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      anon_sym_STAR_SLASH,
    STATE(11), 1,
      sym_storageclass,
    STATE(77), 1,
      sym__end,
    STATE(52), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [1376] = 2,
    ACTIONS(173), 4,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(171), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1394] = 2,
    ACTIONS(177), 4,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(175), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1412] = 2,
    ACTIONS(138), 4,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(140), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      sym__text,
      anon_sym_STAR_SLASH,
  [1430] = 11,
    ACTIONS(179), 1,
      sym_tag_name_with_argument,
    ACTIONS(182), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(185), 1,
      sym_tag_name_with_types,
    ACTIONS(188), 1,
      sym_tag_name_with_self_types,
    ACTIONS(191), 1,
      sym_tag_name_with_type,
    ACTIONS(194), 1,
      sym_tag_name,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_SLASH,
    ACTIONS(202), 1,
      anon_sym_STAR_SLASH,
    STATE(11), 1,
      sym_storageclass,
    STATE(52), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [1465] = 2,
    ACTIONS(204), 5,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(206), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [1482] = 2,
    ACTIONS(210), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(208), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [1496] = 2,
    ACTIONS(71), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(69), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [1510] = 2,
    ACTIONS(51), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(49), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [1524] = 2,
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
  [1538] = 2,
    ACTIONS(59), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(57), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [1552] = 2,
    ACTIONS(214), 2,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(212), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_STAR_SLASH,
  [1566] = 6,
    ACTIONS(216), 1,
      aux_sym_identifier_token1,
    ACTIONS(218), 1,
      anon_sym_TILDE,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_identifier,
    STATE(61), 1,
      sym_storageclass,
    STATE(9), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [1587] = 4,
    ACTIONS(216), 1,
      aux_sym_identifier_token1,
    ACTIONS(218), 1,
      anon_sym_TILDE,
    STATE(10), 1,
      sym_identifier,
    STATE(7), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [1602] = 4,
    ACTIONS(216), 1,
      aux_sym_identifier_token1,
    ACTIONS(218), 1,
      anon_sym_TILDE,
    STATE(10), 1,
      sym_identifier,
    STATE(33), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [1617] = 4,
    ACTIONS(108), 1,
      anon_sym_TILDE,
    ACTIONS(122), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_function,
    STATE(87), 1,
      sym_identifier,
  [1630] = 4,
    ACTIONS(108), 1,
      anon_sym_TILDE,
    ACTIONS(122), 1,
      aux_sym_identifier_token1,
    STATE(47), 1,
      sym_function,
    STATE(87), 1,
      sym_identifier,
  [1643] = 2,
    ACTIONS(222), 1,
      anon_sym_in,
    ACTIONS(224), 2,
      anon_sym_out,
      anon_sym_inout,
  [1651] = 2,
    ACTIONS(226), 1,
      anon_sym_in,
    ACTIONS(228), 2,
      anon_sym_out,
      anon_sym_inout,
  [1659] = 2,
    ACTIONS(122), 1,
      aux_sym_identifier_token1,
    STATE(94), 1,
      sym_identifier,
  [1666] = 2,
    ACTIONS(122), 1,
      aux_sym_identifier_token1,
    STATE(93), 1,
      sym_identifier,
  [1673] = 2,
    ACTIONS(230), 1,
      aux_sym_identifier_token1,
    STATE(25), 1,
      sym_identifier,
  [1680] = 2,
    ACTIONS(232), 1,
      aux_sym_identifier_token1,
    STATE(34), 1,
      sym_identifier,
  [1687] = 2,
    ACTIONS(122), 1,
      aux_sym_identifier_token1,
    STATE(83), 1,
      sym_identifier,
  [1694] = 1,
    ACTIONS(177), 2,
      aux_sym_identifier_token1,
      anon_sym_TILDE,
  [1699] = 1,
    ACTIONS(234), 1,
      aux_sym_link_token1,
  [1703] = 1,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
  [1707] = 1,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
  [1711] = 1,
    ACTIONS(240), 1,
      aux_sym_link_token2,
  [1715] = 1,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
  [1719] = 1,
    ACTIONS(244), 1,
      anon_sym_LT_SLASHa_GT,
  [1723] = 1,
    ACTIONS(246), 1,
      sym_brief_description,
  [1727] = 1,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
  [1731] = 1,
    ACTIONS(250), 1,
      anon_sym_GT,
  [1735] = 1,
    ACTIONS(252), 1,
      aux_sym_tag_token2,
  [1739] = 1,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
  [1743] = 1,
    ACTIONS(256), 1,
      aux_sym_identifier_token1,
  [1747] = 1,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
  [1751] = 1,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
  [1755] = 1,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
  [1759] = 1,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
  [1763] = 1,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
  [1767] = 1,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
  [1771] = 1,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
  [1775] = 1,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
  [1779] = 1,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
  [1783] = 1,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
  [1787] = 1,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
  [1791] = 1,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 170,
  [SMALL_STATE(6)] = 210,
  [SMALL_STATE(7)] = 250,
  [SMALL_STATE(8)] = 290,
  [SMALL_STATE(9)] = 330,
  [SMALL_STATE(10)] = 370,
  [SMALL_STATE(11)] = 398,
  [SMALL_STATE(12)] = 432,
  [SMALL_STATE(13)] = 466,
  [SMALL_STATE(14)] = 500,
  [SMALL_STATE(15)] = 521,
  [SMALL_STATE(16)] = 546,
  [SMALL_STATE(17)] = 577,
  [SMALL_STATE(18)] = 602,
  [SMALL_STATE(19)] = 637,
  [SMALL_STATE(20)] = 664,
  [SMALL_STATE(21)] = 695,
  [SMALL_STATE(22)] = 727,
  [SMALL_STATE(23)] = 759,
  [SMALL_STATE(24)] = 779,
  [SMALL_STATE(25)] = 799,
  [SMALL_STATE(26)] = 819,
  [SMALL_STATE(27)] = 851,
  [SMALL_STATE(28)] = 875,
  [SMALL_STATE(29)] = 899,
  [SMALL_STATE(30)] = 923,
  [SMALL_STATE(31)] = 942,
  [SMALL_STATE(32)] = 961,
  [SMALL_STATE(33)] = 980,
  [SMALL_STATE(34)] = 999,
  [SMALL_STATE(35)] = 1018,
  [SMALL_STATE(36)] = 1036,
  [SMALL_STATE(37)] = 1074,
  [SMALL_STATE(38)] = 1112,
  [SMALL_STATE(39)] = 1150,
  [SMALL_STATE(40)] = 1168,
  [SMALL_STATE(41)] = 1206,
  [SMALL_STATE(42)] = 1224,
  [SMALL_STATE(43)] = 1242,
  [SMALL_STATE(44)] = 1260,
  [SMALL_STATE(45)] = 1278,
  [SMALL_STATE(46)] = 1296,
  [SMALL_STATE(47)] = 1318,
  [SMALL_STATE(48)] = 1338,
  [SMALL_STATE(49)] = 1376,
  [SMALL_STATE(50)] = 1394,
  [SMALL_STATE(51)] = 1412,
  [SMALL_STATE(52)] = 1430,
  [SMALL_STATE(53)] = 1465,
  [SMALL_STATE(54)] = 1482,
  [SMALL_STATE(55)] = 1496,
  [SMALL_STATE(56)] = 1510,
  [SMALL_STATE(57)] = 1524,
  [SMALL_STATE(58)] = 1538,
  [SMALL_STATE(59)] = 1552,
  [SMALL_STATE(60)] = 1566,
  [SMALL_STATE(61)] = 1587,
  [SMALL_STATE(62)] = 1602,
  [SMALL_STATE(63)] = 1617,
  [SMALL_STATE(64)] = 1630,
  [SMALL_STATE(65)] = 1643,
  [SMALL_STATE(66)] = 1651,
  [SMALL_STATE(67)] = 1659,
  [SMALL_STATE(68)] = 1666,
  [SMALL_STATE(69)] = 1673,
  [SMALL_STATE(70)] = 1680,
  [SMALL_STATE(71)] = 1687,
  [SMALL_STATE(72)] = 1694,
  [SMALL_STATE(73)] = 1699,
  [SMALL_STATE(74)] = 1703,
  [SMALL_STATE(75)] = 1707,
  [SMALL_STATE(76)] = 1711,
  [SMALL_STATE(77)] = 1715,
  [SMALL_STATE(78)] = 1719,
  [SMALL_STATE(79)] = 1723,
  [SMALL_STATE(80)] = 1727,
  [SMALL_STATE(81)] = 1731,
  [SMALL_STATE(82)] = 1735,
  [SMALL_STATE(83)] = 1739,
  [SMALL_STATE(84)] = 1743,
  [SMALL_STATE(85)] = 1747,
  [SMALL_STATE(86)] = 1751,
  [SMALL_STATE(87)] = 1755,
  [SMALL_STATE(88)] = 1759,
  [SMALL_STATE(89)] = 1763,
  [SMALL_STATE(90)] = 1767,
  [SMALL_STATE(91)] = 1771,
  [SMALL_STATE(92)] = 1775,
  [SMALL_STATE(93)] = 1779,
  [SMALL_STATE(94)] = 1783,
  [SMALL_STATE(95)] = 1787,
  [SMALL_STATE(96)] = 1791,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(69),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(84),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(73),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(16),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(62),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(70),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brief_header, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brief_header, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brief_header, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brief_header, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 2), SHIFT_REPEAT(64),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat2, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphasis, 2, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emphasis, 2, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storageclass, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storageclass, 3),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(66),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat2, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [238] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
};

enum ts_external_scanner_symbol_identifiers {
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
