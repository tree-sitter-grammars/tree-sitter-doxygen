#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 202
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 1
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 12

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
  anon_sym_BSLASHc = 24,
  anon_sym_LTa = 25,
  aux_sym_link_token1 = 26,
  anon_sym_GT = 27,
  aux_sym_link_token2 = 28,
  anon_sym_LT_SLASHa_GT = 29,
  sym_function_link = 30,
  anon_sym_ATcode = 31,
  anon_sym_LBRACE = 32,
  anon_sym_DOT = 33,
  anon_sym_RBRACE = 34,
  anon_sym_ATendcode = 35,
  sym__text = 36,
  sym__singleline_begin = 37,
  sym__multiline_begin = 38,
  anon_sym_SLASH = 39,
  anon_sym_STAR_SLASH = 40,
  sym__text_line = 41,
  sym_brief_description = 42,
  sym_code_block_start = 43,
  sym_code_block_language = 44,
  sym_code_block_content = 45,
  sym_code_block_end = 46,
  sym_document = 47,
  sym_brief_header = 48,
  sym_description = 49,
  sym_tag = 50,
  sym__expression = 51,
  sym_identifier = 52,
  sym_qualified_identifier = 53,
  sym_function = 54,
  sym_storageclass = 55,
  sym_emphasis = 56,
  sym_code_word = 57,
  sym_link = 58,
  sym_code_block = 59,
  sym__multiline_end = 60,
  aux_sym_document_repeat1 = 61,
  aux_sym_document_repeat2 = 62,
  aux_sym_description_repeat1 = 63,
  aux_sym_tag_repeat1 = 64,
  aux_sym_tag_repeat2 = 65,
  aux_sym_qualified_identifier_repeat1 = 66,
  alias_sym_code = 67,
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
  [anon_sym_BSLASHc] = "\\c",
  [anon_sym_LTa] = "<a",
  [aux_sym_link_token1] = "link_token1",
  [anon_sym_GT] = ">",
  [aux_sym_link_token2] = "text",
  [anon_sym_LT_SLASHa_GT] = "</a>",
  [sym_function_link] = "function_link",
  [anon_sym_ATcode] = "@code",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOT] = ".",
  [anon_sym_RBRACE] = "}",
  [anon_sym_ATendcode] = "@endcode",
  [sym__text] = "_text",
  [sym__singleline_begin] = "_singleline_begin",
  [sym__multiline_begin] = "_multiline_begin",
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
  [sym_code_word] = "code_word",
  [sym_link] = "link",
  [sym_code_block] = "code_block",
  [sym__multiline_end] = "_multiline_end",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_tag_repeat2] = "tag_repeat2",
  [aux_sym_qualified_identifier_repeat1] = "qualified_identifier_repeat1",
  [alias_sym_code] = "code",
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
  [anon_sym_BSLASHc] = anon_sym_BSLASHc,
  [anon_sym_LTa] = anon_sym_LTa,
  [aux_sym_link_token1] = aux_sym_link_token1,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_link_token2] = aux_sym_link_token2,
  [anon_sym_LT_SLASHa_GT] = anon_sym_LT_SLASHa_GT,
  [sym_function_link] = sym_function_link,
  [anon_sym_ATcode] = anon_sym_ATcode,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_ATendcode] = anon_sym_ATendcode,
  [sym__text] = sym__text,
  [sym__singleline_begin] = sym__singleline_begin,
  [sym__multiline_begin] = sym__multiline_begin,
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
  [sym_code_word] = sym_code_word,
  [sym_link] = sym_link,
  [sym_code_block] = sym_code_block,
  [sym__multiline_end] = sym__multiline_end,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym_tag_repeat2] = aux_sym_tag_repeat2,
  [aux_sym_qualified_identifier_repeat1] = aux_sym_qualified_identifier_repeat1,
  [alias_sym_code] = alias_sym_code,
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
  [anon_sym_BSLASHc] = {
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
  [anon_sym_ATcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendcode] = {
    .visible = true,
    .named = false,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__singleline_begin] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_begin] = {
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
  [sym_code_word] = {
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
  [sym__multiline_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
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
  [alias_sym_code] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_function = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function] = "function",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 2},
  [6] = {.index = 3, .length = 2},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 3},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 3},
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
  [4] = {
    [1] = alias_sym_code,
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
  [7] = 3,
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
  [19] = 19,
  [20] = 8,
  [21] = 10,
  [22] = 17,
  [23] = 9,
  [24] = 24,
  [25] = 11,
  [26] = 6,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 30,
  [31] = 24,
  [32] = 19,
  [33] = 24,
  [34] = 34,
  [35] = 12,
  [36] = 13,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 14,
  [41] = 30,
  [42] = 24,
  [43] = 34,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 17,
  [48] = 16,
  [49] = 24,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 39,
  [54] = 54,
  [55] = 55,
  [56] = 15,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 24,
  [64] = 64,
  [65] = 27,
  [66] = 66,
  [67] = 24,
  [68] = 68,
  [69] = 19,
  [70] = 17,
  [71] = 24,
  [72] = 19,
  [73] = 24,
  [74] = 30,
  [75] = 75,
  [76] = 27,
  [77] = 28,
  [78] = 24,
  [79] = 38,
  [80] = 39,
  [81] = 30,
  [82] = 37,
  [83] = 34,
  [84] = 34,
  [85] = 46,
  [86] = 55,
  [87] = 44,
  [88] = 62,
  [89] = 45,
  [90] = 24,
  [91] = 61,
  [92] = 58,
  [93] = 39,
  [94] = 60,
  [95] = 59,
  [96] = 66,
  [97] = 97,
  [98] = 24,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 24,
  [110] = 110,
  [111] = 111,
  [112] = 64,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 75,
  [122] = 113,
  [123] = 100,
  [124] = 114,
  [125] = 97,
  [126] = 126,
  [127] = 106,
  [128] = 126,
  [129] = 108,
  [130] = 102,
  [131] = 105,
  [132] = 101,
  [133] = 99,
  [134] = 107,
  [135] = 103,
  [136] = 136,
  [137] = 136,
  [138] = 138,
  [139] = 138,
  [140] = 140,
  [141] = 141,
  [142] = 141,
  [143] = 143,
  [144] = 143,
  [145] = 143,
  [146] = 140,
  [147] = 46,
  [148] = 148,
  [149] = 149,
  [150] = 149,
  [151] = 149,
  [152] = 152,
  [153] = 152,
  [154] = 152,
  [155] = 152,
  [156] = 149,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 157,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 171,
  [173] = 173,
  [174] = 162,
  [175] = 159,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 177,
  [182] = 170,
  [183] = 176,
  [184] = 177,
  [185] = 179,
  [186] = 179,
  [187] = 170,
  [188] = 188,
  [189] = 179,
  [190] = 170,
  [191] = 191,
  [192] = 192,
  [193] = 161,
  [194] = 194,
  [195] = 192,
  [196] = 192,
  [197] = 192,
  [198] = 173,
  [199] = 199,
  [200] = 200,
  [201] = 180,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(127)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == ':') ADVANCE(320);
      if (lookahead == '<') ADVANCE(333);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == '{') ADVANCE(291);
      if (lookahead == '}') ADVANCE(293);
      if (lookahead == '~') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(128)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(333);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == '~') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(333);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == '~') ADVANCE(254);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(369);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '~') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(369);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '~') ADVANCE(307);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(320);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(322);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(322);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(320);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(322);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(322);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(320);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(322);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(322);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(381);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '~') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(387);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(381);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '~') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(387);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(387);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(387);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == '*') SKIP(18)
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '~') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '~') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == '*') SKIP(20)
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(254);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(381);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '~') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(387);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(381);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '~') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(387);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(28)
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(320);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(322);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(322);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(30)
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(322);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 31:
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '*') ADVANCE(354);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(279);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == ')') ADVANCE(287);
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == ')') ADVANCE(286);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(371);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(122);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(121);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(278);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'v') ADVANCE(185);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(179);
      if (lookahead == '~') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'v') ADVANCE(185);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(179);
      if (lookahead == '~') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'v') ADVANCE(185);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(179);
      if (lookahead == '~') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'v') ADVANCE(185);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(179);
      if (lookahead == '~') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'v') ADVANCE(185);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(179);
      if (lookahead == '~') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'v') ADVANCE(185);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(179);
      if (lookahead == '~') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(153);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(62);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 117:
      if (lookahead == 'v') ADVANCE(77);
      END_STATE();
    case 118:
      if (lookahead == 'x') ADVANCE(62);
      END_STATE();
    case 119:
      if (lookahead == 'y') ADVANCE(175);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 121:
      if (lookahead == '~') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 122:
      if (lookahead == '~') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 123:
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 124:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 125:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 126:
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != '<') ADVANCE(38);
      END_STATE();
    case 127:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(127)
      if (lookahead == '\r') SKIP(128)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(333);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == '~') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(127)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 128:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(127)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '<') ADVANCE(333);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == '~') ADVANCE(254);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(128)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 129:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(129)
      if (lookahead == '\r') SKIP(131)
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') SKIP(129)
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(365);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == ']') ADVANCE(265);
      if (lookahead == '~') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(129)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 130:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(129)
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '/') ADVANCE(365);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == ']') ADVANCE(265);
      if (lookahead == '{') ADVANCE(291);
      if (lookahead == '}') ADVANCE(293);
      if (lookahead == '~') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 131:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(129)
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(365);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == ']') ADVANCE(265);
      if (lookahead == '~') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 132:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(132)
      if (lookahead == '\r') SKIP(133)
      if (lookahead == '*') SKIP(132)
      if (lookahead == ':') ADVANCE(349);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '~') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(132)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 133:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(132)
      if (lookahead == ':') ADVANCE(349);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '~') ADVANCE(350);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(133)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(351);
      END_STATE();
    case 134:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(134)
      if (lookahead == '\r') SKIP(135)
      if (lookahead == '*') SKIP(134)
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(134)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 135:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(134)
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(135)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 136:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(136)
      if (lookahead == '\r') SKIP(137)
      if (lookahead == '*') SKIP(136)
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(136)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 137:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(136)
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 138:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(136)
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 139:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(139)
      if (lookahead == '\r') SKIP(140)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == '*') SKIP(139)
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(139)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 140:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(139)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(140)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 141:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(139)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(140)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 142:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(142)
      if (lookahead == '\r') SKIP(143)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == '*') SKIP(142)
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(142)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 143:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(142)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 144:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(142)
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 145:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(145)
      if (lookahead == '\r') SKIP(146)
      if (lookahead == '*') SKIP(145)
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '~') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(145)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 146:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(145)
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '~') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 147:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(147)
      if (lookahead == '\r') SKIP(148)
      if (lookahead == '*') SKIP(147)
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(147)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 148:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(147)
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 149:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(147)
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 150:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(150)
      if (lookahead == '\r') SKIP(151)
      if (lookahead == '*') SKIP(150)
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(150)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 151:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(150)
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_ATbrief);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_ATbrief);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BSLASHbrief);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_BSLASHbrief);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '!') ADVANCE(372);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(373);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(373);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '*') ADVANCE(354);
      if (lookahead == '/') ADVANCE(353);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '*') ADVANCE(354);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_tag_name_with_multiple_arguments);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_tag_name_with_multiple_arguments);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_tag_name_with_types);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_tag_name_with_types);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_tag_name_with_self_types);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_tag_name_with_self_types);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_tag_name);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '(') ADVANCE(373);
      if (lookahead == ':') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == 't') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == 'u') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == 'u') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ':') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(373);
      if (lookahead == ':') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == ':') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '~') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '~') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ':') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_inout);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ':') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_BSLASHc);
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_BSLASHc);
      if (lookahead == 'l') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LTa);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(272);
      if (lookahead == '*') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(273);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_link_token2);
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == '\r') ADVANCE(276);
      if (lookahead == '*') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(277);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_link_token2);
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_link_token2);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LT_SLASHa_GT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_function_link);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '!') ADVANCE(374);
      if (lookahead == '*') ADVANCE(309);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(304);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '!') ADVANCE(374);
      if (lookahead == '*') ADVANCE(309);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(304);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '*') ADVANCE(309);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(374);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(375);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(347);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(347);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(36);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(38);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_function_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_ATcode);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_ATcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_ATendcode);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '!') ADVANCE(372);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(373);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(373);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '!') ADVANCE(374);
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == '*') ADVANCE(309);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == '<') ADVANCE(319);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '!') ADVANCE(374);
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(319);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '!') ADVANCE(374);
      if (lookahead == '*') ADVANCE(309);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == ':') ADVANCE(301);
      if (lookahead == '<') ADVANCE(319);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '!') ADVANCE(374);
      if (lookahead == '*') ADVANCE(309);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == '<') ADVANCE(319);
      if (lookahead == '~') ADVANCE(303);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '!') ADVANCE(374);
      if (lookahead == '*') ADVANCE(309);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == '<') ADVANCE(319);
      if (lookahead == '~') ADVANCE(302);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '!') ADVANCE(374);
      if (lookahead == '*') ADVANCE(309);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == '<') ADVANCE(319);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '!') ADVANCE(374);
      if (lookahead == '*') ADVANCE(309);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == '<') ADVANCE(319);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '!') ADVANCE(374);
      if (lookahead == '*') ADVANCE(309);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == '<') ADVANCE(319);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '!') ADVANCE(374);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead == '<') ADVANCE(319);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '!') ADVANCE(374);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(319);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '!') ADVANCE(374);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(319);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '!') ADVANCE(374);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(319);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '*') ADVANCE(309);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '<') ADVANCE(380);
      if (lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(377);
      if (lookahead == ')') ADVANCE(281);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(378);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '<') ADVANCE(372);
      if (lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(378);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == ':') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == ':') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == '~') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == '~') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '/') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '/') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == ':') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == ':') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == '/') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead == '/') ADVANCE(332);
      if (lookahead == ':') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead == ':') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead == '/') ADVANCE(332);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead == '/') ADVANCE(332);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead == '/') ADVANCE(332);
      if (lookahead == '~') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead == '/') ADVANCE(332);
      if (lookahead == '~') ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead == '/') ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead == '/') ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead == '/') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '/') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead == ':') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead == ':') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '/') ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(332);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '(') ADVANCE(352);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == '<') ADVANCE(332);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '(') ADVANCE(352);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(332);
      if (lookahead == '\n' ||
          lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == '<') ADVANCE(332);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == '<') ADVANCE(332);
      if (lookahead == '~') ADVANCE(346);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == '<') ADVANCE(332);
      if (lookahead == '~') ADVANCE(345);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == '<') ADVANCE(332);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == '<') ADVANCE(332);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == '<') ADVANCE(332);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == '<') ADVANCE(332);
      if (lookahead == '\n' ||
          lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(332);
      if (lookahead == '\n' ||
          lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(332);
      if (lookahead == '\n' ||
          lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(332);
      if (lookahead == '\n' ||
          lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == ')') ADVANCE(285);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '/') ADVANCE(352);
      if (lookahead == '<') ADVANCE(353);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(34);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '*') ADVANCE(354);
      if (lookahead == '/') ADVANCE(353);
      if (lookahead == '\n' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '*') ADVANCE(354);
      if (lookahead == '\n' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ')') ADVANCE(286);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '\n' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(380);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__singleline_begin);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__singleline_begin);
      if (lookahead == '!') ADVANCE(362);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead == '/') ADVANCE(364);
      if (lookahead == '<') ADVANCE(359);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__singleline_begin);
      if (lookahead == '!') ADVANCE(362);
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(366);
      if (lookahead == '<') ADVANCE(359);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__singleline_begin);
      if (lookahead == '<') ADVANCE(359);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__multiline_begin);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__multiline_begin);
      if (lookahead == '!') ADVANCE(367);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead == '/') ADVANCE(364);
      if (lookahead == '<') ADVANCE(363);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__multiline_begin);
      if (lookahead == '!') ADVANCE(367);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead == '/') ADVANCE(361);
      if (lookahead == '<') ADVANCE(363);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__multiline_begin);
      if (lookahead == '!') ADVANCE(367);
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(366);
      if (lookahead == '<') ADVANCE(363);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__multiline_begin);
      if (lookahead == '<') ADVANCE(363);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '!') ADVANCE(374);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != '<') ADVANCE(304);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!') ADVANCE(367);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead == '/') ADVANCE(360);
      if (lookahead == '<') ADVANCE(363);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(373);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '*') ADVANCE(309);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '<') ADVANCE(380);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(375);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '<') ADVANCE(387);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(387);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '<') ADVANCE(372);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(378);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ')') ADVANCE(283);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '<') ADVANCE(373);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '(') ADVANCE(373);
      if (lookahead == ':') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(387);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(387);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(387);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '~') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(387);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '~') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(387);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__text_line);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(387);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__text_line);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(387);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 130},
  [2] = {.lex_state = 4, .external_lex_state = 2},
  [3] = {.lex_state = 23, .external_lex_state = 2},
  [4] = {.lex_state = 28, .external_lex_state = 2},
  [5] = {.lex_state = 133},
  [6] = {.lex_state = 30, .external_lex_state = 2},
  [7] = {.lex_state = 135},
  [8] = {.lex_state = 7, .external_lex_state = 2},
  [9] = {.lex_state = 7, .external_lex_state = 2},
  [10] = {.lex_state = 7, .external_lex_state = 2},
  [11] = {.lex_state = 7, .external_lex_state = 2},
  [12] = {.lex_state = 28, .external_lex_state = 2},
  [13] = {.lex_state = 28, .external_lex_state = 2},
  [14] = {.lex_state = 28, .external_lex_state = 2},
  [15] = {.lex_state = 28, .external_lex_state = 2},
  [16] = {.lex_state = 28, .external_lex_state = 2},
  [17] = {.lex_state = 9, .external_lex_state = 2},
  [18] = {.lex_state = 148},
  [19] = {.lex_state = 6, .external_lex_state = 2},
  [20] = {.lex_state = 137},
  [21] = {.lex_state = 137},
  [22] = {.lex_state = 12, .external_lex_state = 2},
  [23] = {.lex_state = 137},
  [24] = {.lex_state = 9, .external_lex_state = 2},
  [25] = {.lex_state = 137},
  [26] = {.lex_state = 151},
  [27] = {.lex_state = 6, .external_lex_state = 2},
  [28] = {.lex_state = 7, .external_lex_state = 2},
  [29] = {.lex_state = 27, .external_lex_state = 2},
  [30] = {.lex_state = 6, .external_lex_state = 2},
  [31] = {.lex_state = 12, .external_lex_state = 2},
  [32] = {.lex_state = 27, .external_lex_state = 2},
  [33] = {.lex_state = 6, .external_lex_state = 2},
  [34] = {.lex_state = 7, .external_lex_state = 2},
  [35] = {.lex_state = 148},
  [36] = {.lex_state = 148},
  [37] = {.lex_state = 15, .external_lex_state = 2},
  [38] = {.lex_state = 7, .external_lex_state = 2},
  [39] = {.lex_state = 7, .external_lex_state = 2},
  [40] = {.lex_state = 148},
  [41] = {.lex_state = 27, .external_lex_state = 2},
  [42] = {.lex_state = 27, .external_lex_state = 2},
  [43] = {.lex_state = 28, .external_lex_state = 2},
  [44] = {.lex_state = 25, .external_lex_state = 2},
  [45] = {.lex_state = 28, .external_lex_state = 2},
  [46] = {.lex_state = 28, .external_lex_state = 2},
  [47] = {.lex_state = 141},
  [48] = {.lex_state = 148},
  [49] = {.lex_state = 28, .external_lex_state = 2},
  [50] = {.lex_state = 17, .external_lex_state = 2},
  [51] = {.lex_state = 17, .external_lex_state = 2},
  [52] = {.lex_state = 17, .external_lex_state = 2},
  [53] = {.lex_state = 28, .external_lex_state = 2},
  [54] = {.lex_state = 17, .external_lex_state = 2},
  [55] = {.lex_state = 25, .external_lex_state = 2},
  [56] = {.lex_state = 148},
  [57] = {.lex_state = 17, .external_lex_state = 2},
  [58] = {.lex_state = 28, .external_lex_state = 2},
  [59] = {.lex_state = 28, .external_lex_state = 2},
  [60] = {.lex_state = 28, .external_lex_state = 2},
  [61] = {.lex_state = 28, .external_lex_state = 2},
  [62] = {.lex_state = 25, .external_lex_state = 2},
  [63] = {.lex_state = 15, .external_lex_state = 2},
  [64] = {.lex_state = 25, .external_lex_state = 2},
  [65] = {.lex_state = 138},
  [66] = {.lex_state = 15, .external_lex_state = 2},
  [67] = {.lex_state = 141},
  [68] = {.lex_state = 17, .external_lex_state = 2},
  [69] = {.lex_state = 138},
  [70] = {.lex_state = 144},
  [71] = {.lex_state = 144},
  [72] = {.lex_state = 149},
  [73] = {.lex_state = 138},
  [74] = {.lex_state = 138},
  [75] = {.lex_state = 25, .external_lex_state = 2},
  [76] = {.lex_state = 149},
  [77] = {.lex_state = 137},
  [78] = {.lex_state = 149},
  [79] = {.lex_state = 137},
  [80] = {.lex_state = 137},
  [81] = {.lex_state = 149},
  [82] = {.lex_state = 130},
  [83] = {.lex_state = 137},
  [84] = {.lex_state = 148},
  [85] = {.lex_state = 148},
  [86] = {.lex_state = 146},
  [87] = {.lex_state = 146},
  [88] = {.lex_state = 146},
  [89] = {.lex_state = 148},
  [90] = {.lex_state = 148},
  [91] = {.lex_state = 148},
  [92] = {.lex_state = 148},
  [93] = {.lex_state = 148},
  [94] = {.lex_state = 148},
  [95] = {.lex_state = 148},
  [96] = {.lex_state = 130},
  [97] = {.lex_state = 17, .external_lex_state = 2},
  [98] = {.lex_state = 130},
  [99] = {.lex_state = 17, .external_lex_state = 2},
  [100] = {.lex_state = 17, .external_lex_state = 2},
  [101] = {.lex_state = 17, .external_lex_state = 2},
  [102] = {.lex_state = 17, .external_lex_state = 2},
  [103] = {.lex_state = 17, .external_lex_state = 2},
  [104] = {.lex_state = 17, .external_lex_state = 2},
  [105] = {.lex_state = 17, .external_lex_state = 2},
  [106] = {.lex_state = 17, .external_lex_state = 2},
  [107] = {.lex_state = 17, .external_lex_state = 2},
  [108] = {.lex_state = 17, .external_lex_state = 2},
  [109] = {.lex_state = 17, .external_lex_state = 2},
  [110] = {.lex_state = 17, .external_lex_state = 2},
  [111] = {.lex_state = 17, .external_lex_state = 2},
  [112] = {.lex_state = 146},
  [113] = {.lex_state = 17, .external_lex_state = 2},
  [114] = {.lex_state = 17, .external_lex_state = 2},
  [115] = {.lex_state = 130},
  [116] = {.lex_state = 130},
  [117] = {.lex_state = 130},
  [118] = {.lex_state = 130},
  [119] = {.lex_state = 130},
  [120] = {.lex_state = 130},
  [121] = {.lex_state = 146},
  [122] = {.lex_state = 130},
  [123] = {.lex_state = 130},
  [124] = {.lex_state = 130},
  [125] = {.lex_state = 130},
  [126] = {.lex_state = 19},
  [127] = {.lex_state = 130},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 130},
  [130] = {.lex_state = 130},
  [131] = {.lex_state = 130},
  [132] = {.lex_state = 130},
  [133] = {.lex_state = 130},
  [134] = {.lex_state = 130},
  [135] = {.lex_state = 130},
  [136] = {.lex_state = 19},
  [137] = {.lex_state = 19},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 19},
  [140] = {.lex_state = 23},
  [141] = {.lex_state = 23},
  [142] = {.lex_state = 23},
  [143] = {.lex_state = 21},
  [144] = {.lex_state = 21},
  [145] = {.lex_state = 21},
  [146] = {.lex_state = 23},
  [147] = {.lex_state = 19},
  [148] = {.lex_state = 130, .external_lex_state = 3},
  [149] = {.lex_state = 19},
  [150] = {.lex_state = 19},
  [151] = {.lex_state = 19},
  [152] = {.lex_state = 19},
  [153] = {.lex_state = 19},
  [154] = {.lex_state = 19},
  [155] = {.lex_state = 19},
  [156] = {.lex_state = 19},
  [157] = {.lex_state = 19},
  [158] = {.lex_state = 130},
  [159] = {.lex_state = 19},
  [160] = {.lex_state = 19},
  [161] = {.lex_state = 276},
  [162] = {.lex_state = 167},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0, .external_lex_state = 4},
  [165] = {.lex_state = 130},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0, .external_lex_state = 5},
  [168] = {.lex_state = 0, .external_lex_state = 3},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 130},
  [171] = {.lex_state = 0, .external_lex_state = 6},
  [172] = {.lex_state = 0, .external_lex_state = 6},
  [173] = {.lex_state = 130},
  [174] = {.lex_state = 167},
  [175] = {.lex_state = 19},
  [176] = {.lex_state = 130},
  [177] = {.lex_state = 130},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 130},
  [180] = {.lex_state = 272},
  [181] = {.lex_state = 130},
  [182] = {.lex_state = 130},
  [183] = {.lex_state = 130},
  [184] = {.lex_state = 130},
  [185] = {.lex_state = 130},
  [186] = {.lex_state = 130},
  [187] = {.lex_state = 130},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 130},
  [190] = {.lex_state = 130},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 276},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 130},
  [199] = {.lex_state = 0, .external_lex_state = 3},
  [200] = {.lex_state = 0, .external_lex_state = 5},
  [201] = {.lex_state = 272},
};

enum {
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
    [ts_external_token_code_block_language] = true,
  },
  [6] = {
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
    [anon_sym_BSLASHc] = ACTIONS(1),
    [anon_sym_LTa] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHa_GT] = ACTIONS(1),
    [sym_function_link] = ACTIONS(1),
    [anon_sym_ATcode] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_ATendcode] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym__singleline_begin] = ACTIONS(1),
    [sym__multiline_begin] = ACTIONS(1),
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
    [sym_document] = STATE(191),
    [sym__singleline_begin] = ACTIONS(3),
    [sym__multiline_begin] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(9), 1,
      aux_sym_brief_header_token1,
    ACTIONS(11), 1,
      sym_tag_name_with_argument,
    ACTIONS(13), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(15), 1,
      sym_tag_name_with_types,
    ACTIONS(17), 1,
      sym_tag_name_with_self_types,
    ACTIONS(19), 1,
      sym_tag_name_with_type,
    ACTIONS(21), 1,
      sym_tag_name,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_BSLASHa,
    ACTIONS(27), 1,
      anon_sym_BSLASHc,
    ACTIONS(29), 1,
      anon_sym_LTa,
    ACTIONS(33), 1,
      anon_sym_ATcode,
    ACTIONS(37), 1,
      sym__text_line,
    ACTIONS(39), 1,
      sym_code_block_start,
    STATE(4), 1,
      sym_brief_header,
    STATE(12), 1,
      sym_storageclass,
    STATE(57), 1,
      sym_description,
    STATE(163), 1,
      sym__multiline_end,
    ACTIONS(7), 2,
      anon_sym_ATbrief,
      anon_sym_BSLASHbrief,
    ACTIONS(31), 2,
      sym_function_link,
      sym__text,
    ACTIONS(35), 2,
      anon_sym_SLASH,
      anon_sym_STAR_SLASH,
    STATE(51), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
    STATE(15), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
  [78] = 13,
    ACTIONS(25), 1,
      anon_sym_BSLASHa,
    ACTIONS(27), 1,
      anon_sym_BSLASHc,
    ACTIONS(29), 1,
      anon_sym_LTa,
    ACTIONS(31), 1,
      sym__text,
    ACTIONS(43), 1,
      aux_sym_identifier_token1,
    ACTIONS(45), 1,
      anon_sym_TILDE,
    ACTIONS(49), 1,
      sym_function_link,
    STATE(22), 1,
      sym_identifier,
    STATE(108), 1,
      sym_description,
    ACTIONS(47), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(13), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
    STATE(15), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(41), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [133] = 22,
    ACTIONS(11), 1,
      sym_tag_name_with_argument,
    ACTIONS(13), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(15), 1,
      sym_tag_name_with_types,
    ACTIONS(17), 1,
      sym_tag_name_with_self_types,
    ACTIONS(19), 1,
      sym_tag_name_with_type,
    ACTIONS(21), 1,
      sym_tag_name,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_BSLASHa,
    ACTIONS(27), 1,
      anon_sym_BSLASHc,
    ACTIONS(29), 1,
      anon_sym_LTa,
    ACTIONS(31), 1,
      sym__text,
    ACTIONS(33), 1,
      anon_sym_ATcode,
    ACTIONS(39), 1,
      sym_code_block_start,
    ACTIONS(49), 1,
      sym_function_link,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    ACTIONS(53), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(55), 1,
      sym__text_line,
    STATE(12), 1,
      sym_storageclass,
    STATE(52), 1,
      sym_description,
    STATE(188), 1,
      sym__multiline_end,
    STATE(54), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
    STATE(15), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
  [205] = 19,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      aux_sym_brief_header_token1,
    ACTIONS(63), 1,
      sym_tag_name_with_argument,
    ACTIONS(65), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(67), 1,
      sym_tag_name_with_types,
    ACTIONS(69), 1,
      sym_tag_name_with_self_types,
    ACTIONS(71), 1,
      sym_tag_name_with_type,
    ACTIONS(73), 1,
      sym_tag_name,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_BSLASHa,
    ACTIONS(79), 1,
      anon_sym_BSLASHc,
    ACTIONS(81), 1,
      anon_sym_LTa,
    STATE(18), 1,
      sym_brief_header,
    STATE(35), 1,
      sym_storageclass,
    STATE(116), 1,
      sym_description,
    ACTIONS(59), 2,
      anon_sym_ATbrief,
      anon_sym_BSLASHbrief,
    ACTIONS(83), 2,
      sym_function_link,
      sym__text,
    STATE(120), 2,
      sym_tag,
      aux_sym_document_repeat2,
    STATE(56), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
  [269] = 11,
    ACTIONS(25), 1,
      anon_sym_BSLASHa,
    ACTIONS(27), 1,
      anon_sym_BSLASHc,
    ACTIONS(29), 1,
      anon_sym_LTa,
    ACTIONS(31), 1,
      sym__text,
    ACTIONS(49), 1,
      sym_function_link,
    ACTIONS(85), 1,
      aux_sym_identifier_token1,
    STATE(14), 1,
      sym_identifier,
    STATE(108), 1,
      sym_description,
    ACTIONS(47), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(15), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(41), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [316] = 13,
    ACTIONS(77), 1,
      anon_sym_BSLASHa,
    ACTIONS(79), 1,
      anon_sym_BSLASHc,
    ACTIONS(81), 1,
      anon_sym_LTa,
    ACTIONS(83), 1,
      sym__text,
    ACTIONS(87), 1,
      aux_sym_identifier_token1,
    ACTIONS(89), 1,
      anon_sym_TILDE,
    ACTIONS(91), 1,
      sym_function_link,
    STATE(70), 1,
      sym_identifier,
    STATE(129), 1,
      sym_description,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(36), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
    STATE(56), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(41), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [367] = 11,
    ACTIONS(25), 1,
      anon_sym_BSLASHa,
    ACTIONS(27), 1,
      anon_sym_BSLASHc,
    ACTIONS(29), 1,
      anon_sym_LTa,
    ACTIONS(31), 1,
      sym__text,
    ACTIONS(49), 1,
      sym_function_link,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_tag_repeat1,
    STATE(107), 1,
      sym_description,
    ACTIONS(97), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(15), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(95), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [414] = 11,
    ACTIONS(25), 1,
      anon_sym_BSLASHa,
    ACTIONS(27), 1,
      anon_sym_BSLASHc,
    ACTIONS(29), 1,
      anon_sym_LTa,
    ACTIONS(31), 1,
      sym__text,
    ACTIONS(49), 1,
      sym_function_link,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_tag_repeat1,
    STATE(114), 1,
      sym_description,
    ACTIONS(101), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(15), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(99), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [461] = 11,
    ACTIONS(25), 1,
      anon_sym_BSLASHa,
    ACTIONS(27), 1,
      anon_sym_BSLASHc,
    ACTIONS(29), 1,
      anon_sym_LTa,
    ACTIONS(31), 1,
      sym__text,
    ACTIONS(49), 1,
      sym_function_link,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_tag_repeat1,
    STATE(114), 1,
      sym_description,
    ACTIONS(101), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(15), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(99), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [508] = 11,
    ACTIONS(25), 1,
      anon_sym_BSLASHa,
    ACTIONS(27), 1,
      anon_sym_BSLASHc,
    ACTIONS(29), 1,
      anon_sym_LTa,
    ACTIONS(31), 1,
      sym__text,
    ACTIONS(49), 1,
      sym_function_link,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_tag_repeat1,
    STATE(103), 1,
      sym_description,
    ACTIONS(105), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(15), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(103), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [555] = 9,
    ACTIONS(25), 1,
      anon_sym_BSLASHa,
    ACTIONS(27), 1,
      anon_sym_BSLASHc,
    ACTIONS(29), 1,
      anon_sym_LTa,
    ACTIONS(31), 1,
      sym__text,
    ACTIONS(49), 1,
      sym_function_link,
    STATE(108), 1,
      sym_description,
    ACTIONS(47), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(15), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(41), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [596] = 9,
    ACTIONS(25), 1,
      anon_sym_BSLASHa,
    ACTIONS(27), 1,
      anon_sym_BSLASHc,
    ACTIONS(29), 1,
      anon_sym_LTa,
    ACTIONS(31), 1,
      sym__text,
    ACTIONS(49), 1,
      sym_function_link,
    STATE(107), 1,
      sym_description,
    ACTIONS(97), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(15), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(95), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [637] = 9,
    ACTIONS(25), 1,
      anon_sym_BSLASHa,
    ACTIONS(27), 1,
      anon_sym_BSLASHc,
    ACTIONS(29), 1,
      anon_sym_LTa,
    ACTIONS(31), 1,
      sym__text,
    ACTIONS(49), 1,
      sym_function_link,
    STATE(100), 1,
      sym_description,
    ACTIONS(109), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(15), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(107), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [678] = 8,
    ACTIONS(25), 1,
      anon_sym_BSLASHa,
    ACTIONS(27), 1,
      anon_sym_BSLASHc,
    ACTIONS(29), 1,
      anon_sym_LTa,
    ACTIONS(115), 1,
      sym_function_link,
    ACTIONS(117), 1,
      sym__text,
    ACTIONS(113), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(16), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(111), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [716] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASHa,
    ACTIONS(126), 1,
      anon_sym_BSLASHc,
    ACTIONS(129), 1,
      anon_sym_LTa,
    ACTIONS(132), 1,
      sym_function_link,
    ACTIONS(135), 1,
      sym__text,
    ACTIONS(121), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(16), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(119), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [754] = 5,
    ACTIONS(142), 1,
      anon_sym_COLON_COLON,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(138), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(140), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [786] = 17,
    ACTIONS(63), 1,
      sym_tag_name_with_argument,
    ACTIONS(65), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(67), 1,
      sym_tag_name_with_types,
    ACTIONS(69), 1,
      sym_tag_name_with_self_types,
    ACTIONS(71), 1,
      sym_tag_name_with_type,
    ACTIONS(73), 1,
      sym_tag_name,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_BSLASHa,
    ACTIONS(79), 1,
      anon_sym_BSLASHc,
    ACTIONS(81), 1,
      anon_sym_LTa,
    ACTIONS(83), 1,
      sym__text,
    ACTIONS(91), 1,
      sym_function_link,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_storageclass,
    STATE(118), 1,
      sym_description,
    STATE(117), 2,
      sym_tag,
      aux_sym_document_repeat2,
    STATE(56), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
  [842] = 4,
    ACTIONS(152), 1,
      anon_sym_COLON_COLON,
    STATE(19), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(148), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(150), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [871] = 11,
    ACTIONS(77), 1,
      anon_sym_BSLASHa,
    ACTIONS(79), 1,
      anon_sym_BSLASHc,
    ACTIONS(81), 1,
      anon_sym_LTa,
    ACTIONS(83), 1,
      sym__text,
    ACTIONS(91), 1,
      sym_function_link,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_tag_repeat1,
    STATE(134), 1,
      sym_description,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(56), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(95), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [914] = 11,
    ACTIONS(77), 1,
      anon_sym_BSLASHa,
    ACTIONS(79), 1,
      anon_sym_BSLASHc,
    ACTIONS(81), 1,
      anon_sym_LTa,
    ACTIONS(83), 1,
      sym__text,
    ACTIONS(91), 1,
      sym_function_link,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_tag_repeat1,
    STATE(124), 1,
      sym_description,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(56), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(99), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [957] = 5,
    ACTIONS(157), 1,
      anon_sym_COLON_COLON,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(138), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(140), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [988] = 11,
    ACTIONS(77), 1,
      anon_sym_BSLASHa,
    ACTIONS(79), 1,
      anon_sym_BSLASHc,
    ACTIONS(81), 1,
      anon_sym_LTa,
    ACTIONS(83), 1,
      sym__text,
    ACTIONS(91), 1,
      sym_function_link,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_tag_repeat1,
    STATE(124), 1,
      sym_description,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(56), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(99), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [1031] = 2,
    ACTIONS(161), 7,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(163), 13,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1056] = 11,
    ACTIONS(77), 1,
      anon_sym_BSLASHa,
    ACTIONS(79), 1,
      anon_sym_BSLASHc,
    ACTIONS(81), 1,
      anon_sym_LTa,
    ACTIONS(83), 1,
      sym__text,
    ACTIONS(91), 1,
      sym_function_link,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_tag_repeat1,
    STATE(135), 1,
      sym_description,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(56), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(103), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [1099] = 11,
    ACTIONS(77), 1,
      anon_sym_BSLASHa,
    ACTIONS(79), 1,
      anon_sym_BSLASHc,
    ACTIONS(81), 1,
      anon_sym_LTa,
    ACTIONS(83), 1,
      sym__text,
    ACTIONS(91), 1,
      sym_function_link,
    ACTIONS(165), 1,
      aux_sym_identifier_token1,
    STATE(40), 1,
      sym_identifier,
    STATE(129), 1,
      sym_description,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(56), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(41), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [1142] = 4,
    ACTIONS(142), 1,
      anon_sym_COLON_COLON,
    STATE(19), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(167), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(169), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1171] = 4,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_tag_repeat1,
    ACTIONS(176), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(174), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1199] = 4,
    ACTIONS(157), 1,
      anon_sym_COLON_COLON,
    STATE(32), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(167), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(169), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1227] = 2,
    ACTIONS(148), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(150), 13,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1251] = 2,
    ACTIONS(161), 6,
      sym_code_block_start,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(163), 13,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1275] = 4,
    ACTIONS(178), 1,
      anon_sym_COLON_COLON,
    STATE(32), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(148), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(150), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1303] = 2,
    ACTIONS(161), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(163), 13,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1327] = 2,
    ACTIONS(181), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(183), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1350] = 9,
    ACTIONS(77), 1,
      anon_sym_BSLASHa,
    ACTIONS(79), 1,
      anon_sym_BSLASHc,
    ACTIONS(81), 1,
      anon_sym_LTa,
    ACTIONS(83), 1,
      sym__text,
    ACTIONS(91), 1,
      sym_function_link,
    STATE(129), 1,
      sym_description,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(56), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(41), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [1387] = 9,
    ACTIONS(77), 1,
      anon_sym_BSLASHa,
    ACTIONS(79), 1,
      anon_sym_BSLASHc,
    ACTIONS(81), 1,
      anon_sym_LTa,
    ACTIONS(83), 1,
      sym__text,
    ACTIONS(91), 1,
      sym_function_link,
    STATE(134), 1,
      sym_description,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(56), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(95), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [1424] = 8,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      aux_sym_tag_token1,
    ACTIONS(191), 1,
      aux_sym_identifier_token1,
    ACTIONS(195), 1,
      sym_function_link,
    STATE(55), 1,
      aux_sym_tag_repeat2,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(193), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(189), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1459] = 2,
    ACTIONS(176), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(174), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1482] = 2,
    ACTIONS(197), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(199), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1505] = 9,
    ACTIONS(77), 1,
      anon_sym_BSLASHa,
    ACTIONS(79), 1,
      anon_sym_BSLASHc,
    ACTIONS(81), 1,
      anon_sym_LTa,
    ACTIONS(83), 1,
      sym__text,
    ACTIONS(91), 1,
      sym_function_link,
    STATE(123), 1,
      sym_description,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(56), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(107), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [1542] = 2,
    ACTIONS(148), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(150), 13,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1565] = 2,
    ACTIONS(161), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(163), 13,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1588] = 2,
    ACTIONS(181), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(183), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1610] = 7,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      aux_sym_identifier_token1,
    ACTIONS(205), 1,
      sym_function_link,
    STATE(62), 1,
      aux_sym_tag_repeat2,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(203), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(201), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1642] = 2,
    ACTIONS(209), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(207), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1664] = 2,
    ACTIONS(213), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(211), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1686] = 5,
    ACTIONS(215), 1,
      anon_sym_COLON_COLON,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(140), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [1714] = 8,
    ACTIONS(219), 1,
      anon_sym_BSLASHa,
    ACTIONS(222), 1,
      anon_sym_BSLASHc,
    ACTIONS(225), 1,
      anon_sym_LTa,
    ACTIONS(228), 1,
      sym_function_link,
    ACTIONS(231), 1,
      sym__text,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(48), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(119), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [1748] = 2,
    ACTIONS(161), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(163), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1770] = 15,
    ACTIONS(11), 1,
      sym_tag_name_with_argument,
    ACTIONS(13), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(15), 1,
      sym_tag_name_with_types,
    ACTIONS(17), 1,
      sym_tag_name_with_self_types,
    ACTIONS(19), 1,
      sym_tag_name_with_type,
    ACTIONS(21), 1,
      sym_tag_name,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_ATcode,
    ACTIONS(39), 1,
      sym_code_block_start,
    ACTIONS(234), 1,
      anon_sym_SLASH,
    ACTIONS(236), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(238), 1,
      sym__text_line,
    STATE(12), 1,
      sym_storageclass,
    STATE(178), 1,
      sym__multiline_end,
    STATE(68), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [1818] = 15,
    ACTIONS(11), 1,
      sym_tag_name_with_argument,
    ACTIONS(13), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(15), 1,
      sym_tag_name_with_types,
    ACTIONS(17), 1,
      sym_tag_name_with_self_types,
    ACTIONS(19), 1,
      sym_tag_name_with_type,
    ACTIONS(21), 1,
      sym_tag_name,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_ATcode,
    ACTIONS(39), 1,
      sym_code_block_start,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    ACTIONS(53), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(238), 1,
      sym__text_line,
    STATE(12), 1,
      sym_storageclass,
    STATE(188), 1,
      sym__multiline_end,
    STATE(68), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [1866] = 15,
    ACTIONS(11), 1,
      sym_tag_name_with_argument,
    ACTIONS(13), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(15), 1,
      sym_tag_name_with_types,
    ACTIONS(17), 1,
      sym_tag_name_with_self_types,
    ACTIONS(19), 1,
      sym_tag_name_with_type,
    ACTIONS(21), 1,
      sym_tag_name,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_ATcode,
    ACTIONS(39), 1,
      sym_code_block_start,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(242), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(244), 1,
      sym__text_line,
    STATE(12), 1,
      sym_storageclass,
    STATE(169), 1,
      sym__multiline_end,
    STATE(50), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [1914] = 2,
    ACTIONS(197), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(199), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1936] = 15,
    ACTIONS(11), 1,
      sym_tag_name_with_argument,
    ACTIONS(13), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(15), 1,
      sym_tag_name_with_types,
    ACTIONS(17), 1,
      sym_tag_name_with_self_types,
    ACTIONS(19), 1,
      sym_tag_name_with_type,
    ACTIONS(21), 1,
      sym_tag_name,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_ATcode,
    ACTIONS(39), 1,
      sym_code_block_start,
    ACTIONS(238), 1,
      sym__text_line,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(242), 1,
      anon_sym_STAR_SLASH,
    STATE(12), 1,
      sym_storageclass,
    STATE(169), 1,
      sym__multiline_end,
    STATE(68), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [1984] = 7,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      aux_sym_identifier_token1,
    ACTIONS(250), 1,
      sym_function_link,
    STATE(64), 1,
      aux_sym_tag_repeat2,
    STATE(105), 1,
      sym_identifier,
    ACTIONS(248), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(246), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [2016] = 8,
    ACTIONS(77), 1,
      anon_sym_BSLASHa,
    ACTIONS(79), 1,
      anon_sym_BSLASHc,
    ACTIONS(81), 1,
      anon_sym_LTa,
    ACTIONS(252), 1,
      sym_function_link,
    ACTIONS(254), 1,
      sym__text,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(48), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(111), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [2050] = 15,
    ACTIONS(11), 1,
      sym_tag_name_with_argument,
    ACTIONS(13), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(15), 1,
      sym_tag_name_with_types,
    ACTIONS(17), 1,
      sym_tag_name_with_self_types,
    ACTIONS(19), 1,
      sym_tag_name_with_type,
    ACTIONS(21), 1,
      sym_tag_name,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_ATcode,
    ACTIONS(39), 1,
      sym_code_block_start,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    ACTIONS(53), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(55), 1,
      sym__text_line,
    STATE(12), 1,
      sym_storageclass,
    STATE(188), 1,
      sym__multiline_end,
    STATE(54), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [2098] = 2,
    ACTIONS(258), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(256), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [2120] = 2,
    ACTIONS(262), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(260), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [2142] = 2,
    ACTIONS(266), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(264), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [2164] = 2,
    ACTIONS(270), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(268), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [2186] = 7,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      aux_sym_identifier_token1,
    ACTIONS(276), 1,
      sym_function_link,
    STATE(64), 1,
      aux_sym_tag_repeat2,
    STATE(101), 1,
      sym_identifier,
    ACTIONS(274), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(272), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [2218] = 2,
    ACTIONS(161), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      aux_sym_tag_token1,
      anon_sym_LBRACK,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(163), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [2239] = 4,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_tag_repeat2,
    ACTIONS(283), 4,
      sym_code_block_start,
      anon_sym_LBRACK,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(281), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [2264] = 4,
    ACTIONS(215), 1,
      anon_sym_COLON_COLON,
    STATE(69), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(169), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2289] = 3,
    ACTIONS(287), 1,
      aux_sym_tag_token1,
    ACTIONS(285), 5,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(289), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [2312] = 2,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(163), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2333] = 14,
    ACTIONS(291), 1,
      sym_tag_name_with_argument,
    ACTIONS(294), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(297), 1,
      sym_tag_name_with_types,
    ACTIONS(300), 1,
      sym_tag_name_with_self_types,
    ACTIONS(303), 1,
      sym_tag_name_with_type,
    ACTIONS(306), 1,
      sym_tag_name,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    ACTIONS(312), 1,
      anon_sym_ATcode,
    ACTIONS(315), 1,
      anon_sym_SLASH,
    ACTIONS(317), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(319), 1,
      sym__text_line,
    ACTIONS(322), 1,
      sym_code_block_start,
    STATE(12), 1,
      sym_storageclass,
    STATE(68), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [2378] = 4,
    ACTIONS(325), 1,
      anon_sym_COLON_COLON,
    STATE(69), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(150), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2403] = 5,
    ACTIONS(328), 1,
      anon_sym_COLON_COLON,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(140), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2430] = 2,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(163), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2450] = 4,
    ACTIONS(332), 1,
      anon_sym_COLON_COLON,
    STATE(72), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(148), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(150), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2474] = 2,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(163), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2494] = 2,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(150), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2514] = 2,
    ACTIONS(335), 5,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(337), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [2534] = 4,
    ACTIONS(328), 1,
      anon_sym_COLON_COLON,
    STATE(72), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(169), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2558] = 4,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_tag_repeat1,
    ACTIONS(176), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(174), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2582] = 2,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(163), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2601] = 2,
    ACTIONS(176), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(174), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2620] = 2,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(199), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2639] = 2,
    ACTIONS(148), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(150), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2658] = 8,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      aux_sym_tag_token1,
    ACTIONS(346), 1,
      aux_sym_identifier_token1,
    ACTIONS(348), 1,
      sym_function_link,
    STATE(86), 1,
      aux_sym_tag_repeat2,
    STATE(133), 1,
      sym_identifier,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(189), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [2689] = 2,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(183), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2708] = 2,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(183), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2726] = 2,
    ACTIONS(213), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(211), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2744] = 7,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      aux_sym_identifier_token1,
    ACTIONS(350), 1,
      sym_function_link,
    STATE(112), 1,
      aux_sym_tag_repeat2,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(246), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [2772] = 7,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      aux_sym_identifier_token1,
    ACTIONS(352), 1,
      sym_function_link,
    STATE(88), 1,
      aux_sym_tag_repeat2,
    STATE(125), 1,
      sym_identifier,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(201), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [2800] = 7,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      aux_sym_identifier_token1,
    ACTIONS(354), 1,
      sym_function_link,
    STATE(112), 1,
      aux_sym_tag_repeat2,
    STATE(132), 1,
      sym_identifier,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(272), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [2828] = 2,
    ACTIONS(209), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(207), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2846] = 2,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(163), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2864] = 2,
    ACTIONS(270), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(268), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2882] = 2,
    ACTIONS(258), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(256), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2900] = 2,
    ACTIONS(197), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(199), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2918] = 2,
    ACTIONS(266), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(264), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2936] = 2,
    ACTIONS(262), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
    ACTIONS(260), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      sym__text,
  [2954] = 3,
    ACTIONS(356), 1,
      aux_sym_tag_token1,
    ACTIONS(285), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_function_link,
    ACTIONS(289), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
  [2973] = 2,
    ACTIONS(360), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(358), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [2990] = 2,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_tag_token1,
      anon_sym_LBRACK,
      sym_function_link,
    ACTIONS(163), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
  [3007] = 2,
    ACTIONS(364), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(362), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [3024] = 2,
    ACTIONS(368), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(366), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [3041] = 2,
    ACTIONS(372), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(370), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [3058] = 2,
    ACTIONS(372), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(370), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [3075] = 2,
    ACTIONS(376), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(374), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [3092] = 2,
    ACTIONS(380), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(378), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [3109] = 2,
    ACTIONS(384), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(382), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [3126] = 2,
    ACTIONS(384), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(382), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [3143] = 2,
    ACTIONS(101), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(99), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [3160] = 2,
    ACTIONS(97), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(95), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [3177] = 2,
    ACTIONS(161), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(163), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [3194] = 2,
    ACTIONS(388), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(386), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [3211] = 2,
    ACTIONS(392), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(390), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [3228] = 4,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_tag_repeat2,
    ACTIONS(283), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_function_link,
    ACTIONS(281), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
  [3249] = 2,
    ACTIONS(109), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(107), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [3266] = 2,
    ACTIONS(105), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(103), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [3283] = 10,
    ACTIONS(63), 1,
      sym_tag_name_with_argument,
    ACTIONS(65), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(67), 1,
      sym_tag_name_with_types,
    ACTIONS(69), 1,
      sym_tag_name_with_self_types,
    ACTIONS(71), 1,
      sym_tag_name_with_type,
    ACTIONS(73), 1,
      sym_tag_name,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_storageclass,
    STATE(119), 2,
      sym_tag,
      aux_sym_document_repeat2,
  [3315] = 10,
    ACTIONS(63), 1,
      sym_tag_name_with_argument,
    ACTIONS(65), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(67), 1,
      sym_tag_name_with_types,
    ACTIONS(69), 1,
      sym_tag_name_with_self_types,
    ACTIONS(71), 1,
      sym_tag_name_with_type,
    ACTIONS(73), 1,
      sym_tag_name,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_storageclass,
    STATE(117), 2,
      sym_tag,
      aux_sym_document_repeat2,
  [3347] = 10,
    ACTIONS(63), 1,
      sym_tag_name_with_argument,
    ACTIONS(65), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(67), 1,
      sym_tag_name_with_types,
    ACTIONS(69), 1,
      sym_tag_name_with_self_types,
    ACTIONS(71), 1,
      sym_tag_name_with_type,
    ACTIONS(73), 1,
      sym_tag_name,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_storageclass,
    STATE(119), 2,
      sym_tag,
      aux_sym_document_repeat2,
  [3379] = 10,
    ACTIONS(63), 1,
      sym_tag_name_with_argument,
    ACTIONS(65), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(67), 1,
      sym_tag_name_with_types,
    ACTIONS(69), 1,
      sym_tag_name_with_self_types,
    ACTIONS(71), 1,
      sym_tag_name_with_type,
    ACTIONS(73), 1,
      sym_tag_name,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_storageclass,
    STATE(115), 2,
      sym_tag,
      aux_sym_document_repeat2,
  [3411] = 10,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 1,
      sym_tag_name_with_argument,
    ACTIONS(406), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(409), 1,
      sym_tag_name_with_types,
    ACTIONS(412), 1,
      sym_tag_name_with_self_types,
    ACTIONS(415), 1,
      sym_tag_name_with_type,
    ACTIONS(418), 1,
      sym_tag_name,
    ACTIONS(421), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_storageclass,
    STATE(119), 2,
      sym_tag,
      aux_sym_document_repeat2,
  [3443] = 10,
    ACTIONS(63), 1,
      sym_tag_name_with_argument,
    ACTIONS(65), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(67), 1,
      sym_tag_name_with_types,
    ACTIONS(69), 1,
      sym_tag_name_with_self_types,
    ACTIONS(71), 1,
      sym_tag_name_with_type,
    ACTIONS(73), 1,
      sym_tag_name,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_storageclass,
    STATE(119), 2,
      sym_tag,
      aux_sym_document_repeat2,
  [3475] = 2,
    ACTIONS(335), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_function_link,
    ACTIONS(337), 7,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
  [3491] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(107), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [3504] = 2,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(366), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [3517] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(103), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [3530] = 2,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(358), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [3543] = 6,
    ACTIONS(424), 1,
      aux_sym_identifier_token1,
    ACTIONS(426), 1,
      anon_sym_TILDE,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_identifier,
    STATE(136), 1,
      sym_storageclass,
    STATE(8), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [3564] = 2,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(382), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [3577] = 6,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    ACTIONS(430), 1,
      aux_sym_identifier_token1,
    ACTIONS(432), 1,
      anon_sym_TILDE,
    STATE(47), 1,
      sym_identifier,
    STATE(137), 1,
      sym_storageclass,
    STATE(20), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [3598] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(95), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [3611] = 2,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(370), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [3624] = 2,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(382), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [3637] = 2,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(370), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [3650] = 2,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(362), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [3663] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(99), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [3676] = 2,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(374), 6,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
  [3689] = 4,
    ACTIONS(424), 1,
      aux_sym_identifier_token1,
    ACTIONS(426), 1,
      anon_sym_TILDE,
    STATE(17), 1,
      sym_identifier,
    STATE(10), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [3704] = 4,
    ACTIONS(430), 1,
      aux_sym_identifier_token1,
    ACTIONS(432), 1,
      anon_sym_TILDE,
    STATE(47), 1,
      sym_identifier,
    STATE(21), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [3719] = 4,
    ACTIONS(424), 1,
      aux_sym_identifier_token1,
    ACTIONS(426), 1,
      anon_sym_TILDE,
    STATE(17), 1,
      sym_identifier,
    STATE(38), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [3734] = 4,
    ACTIONS(430), 1,
      aux_sym_identifier_token1,
    ACTIONS(432), 1,
      anon_sym_TILDE,
    STATE(47), 1,
      sym_identifier,
    STATE(79), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [3749] = 3,
    ACTIONS(346), 1,
      aux_sym_identifier_token1,
    ACTIONS(434), 1,
      sym_function_link,
    STATE(82), 1,
      sym_identifier,
  [3759] = 3,
    ACTIONS(346), 1,
      aux_sym_identifier_token1,
    ACTIONS(436), 1,
      sym_function_link,
    STATE(96), 1,
      sym_identifier,
  [3769] = 3,
    ACTIONS(438), 1,
      aux_sym_identifier_token1,
    ACTIONS(440), 1,
      sym_function_link,
    STATE(66), 1,
      sym_identifier,
  [3779] = 2,
    ACTIONS(442), 1,
      anon_sym_in,
    ACTIONS(444), 2,
      anon_sym_out,
      anon_sym_inout,
  [3787] = 2,
    ACTIONS(446), 1,
      anon_sym_in,
    ACTIONS(448), 2,
      anon_sym_out,
      anon_sym_inout,
  [3795] = 2,
    ACTIONS(450), 1,
      anon_sym_in,
    ACTIONS(452), 2,
      anon_sym_out,
      anon_sym_inout,
  [3803] = 3,
    ACTIONS(438), 1,
      aux_sym_identifier_token1,
    ACTIONS(454), 1,
      sym_function_link,
    STATE(37), 1,
      sym_identifier,
  [3813] = 1,
    ACTIONS(213), 2,
      aux_sym_identifier_token1,
      anon_sym_TILDE,
  [3818] = 2,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      sym_code_block_content,
  [3825] = 2,
    ACTIONS(460), 1,
      aux_sym_identifier_token1,
    STATE(196), 1,
      sym_identifier,
  [3832] = 2,
    ACTIONS(460), 1,
      aux_sym_identifier_token1,
    STATE(195), 1,
      sym_identifier,
  [3839] = 2,
    ACTIONS(460), 1,
      aux_sym_identifier_token1,
    STATE(192), 1,
      sym_identifier,
  [3846] = 2,
    ACTIONS(462), 1,
      aux_sym_identifier_token1,
    STATE(81), 1,
      sym_identifier,
  [3853] = 2,
    ACTIONS(464), 1,
      aux_sym_identifier_token1,
    STATE(30), 1,
      sym_identifier,
  [3860] = 2,
    ACTIONS(466), 1,
      aux_sym_identifier_token1,
    STATE(41), 1,
      sym_identifier,
  [3867] = 2,
    ACTIONS(468), 1,
      aux_sym_identifier_token1,
    STATE(74), 1,
      sym_identifier,
  [3874] = 2,
    ACTIONS(460), 1,
      aux_sym_identifier_token1,
    STATE(197), 1,
      sym_identifier,
  [3881] = 1,
    ACTIONS(470), 1,
      aux_sym_identifier_token1,
  [3885] = 1,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
  [3889] = 1,
    ACTIONS(474), 1,
      aux_sym_identifier_token1,
  [3893] = 1,
    ACTIONS(476), 1,
      aux_sym_identifier_token1,
  [3897] = 1,
    ACTIONS(478), 1,
      aux_sym_link_token2,
  [3901] = 1,
    ACTIONS(480), 1,
      aux_sym_tag_token2,
  [3905] = 1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
  [3909] = 1,
    ACTIONS(482), 1,
      sym_code_block_end,
  [3913] = 1,
    ACTIONS(484), 1,
      anon_sym_DOT,
  [3917] = 1,
    ACTIONS(486), 1,
      anon_sym_ATendcode,
  [3921] = 1,
    ACTIONS(488), 1,
      sym_code_block_language,
  [3925] = 1,
    ACTIONS(490), 1,
      sym_code_block_content,
  [3929] = 1,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
  [3933] = 1,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
  [3937] = 1,
    ACTIONS(494), 1,
      sym_brief_description,
  [3941] = 1,
    ACTIONS(496), 1,
      sym_brief_description,
  [3945] = 1,
    ACTIONS(498), 1,
      anon_sym_GT,
  [3949] = 1,
    ACTIONS(500), 1,
      aux_sym_tag_token2,
  [3953] = 1,
    ACTIONS(502), 1,
      aux_sym_identifier_token1,
  [3957] = 1,
    ACTIONS(504), 1,
      anon_sym_LT_SLASHa_GT,
  [3961] = 1,
    ACTIONS(506), 1,
      anon_sym_RBRACK,
  [3965] = 1,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
  [3969] = 1,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
  [3973] = 1,
    ACTIONS(512), 1,
      aux_sym_link_token1,
  [3977] = 1,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
  [3981] = 1,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
  [3985] = 1,
    ACTIONS(518), 1,
      anon_sym_LT_SLASHa_GT,
  [3989] = 1,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
  [3993] = 1,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
  [3997] = 1,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
  [4001] = 1,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
  [4005] = 1,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
  [4009] = 1,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
  [4013] = 1,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [4017] = 1,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
  [4021] = 1,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
  [4025] = 1,
    ACTIONS(536), 1,
      aux_sym_link_token2,
  [4029] = 1,
    ACTIONS(538), 1,
      anon_sym_ATendcode,
  [4033] = 1,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
  [4037] = 1,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
  [4041] = 1,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
  [4045] = 1,
    ACTIONS(546), 1,
      anon_sym_GT,
  [4049] = 1,
    ACTIONS(548), 1,
      sym_code_block_content,
  [4053] = 1,
    ACTIONS(550), 1,
      sym_code_block_language,
  [4057] = 1,
    ACTIONS(552), 1,
      aux_sym_link_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 133,
  [SMALL_STATE(5)] = 205,
  [SMALL_STATE(6)] = 269,
  [SMALL_STATE(7)] = 316,
  [SMALL_STATE(8)] = 367,
  [SMALL_STATE(9)] = 414,
  [SMALL_STATE(10)] = 461,
  [SMALL_STATE(11)] = 508,
  [SMALL_STATE(12)] = 555,
  [SMALL_STATE(13)] = 596,
  [SMALL_STATE(14)] = 637,
  [SMALL_STATE(15)] = 678,
  [SMALL_STATE(16)] = 716,
  [SMALL_STATE(17)] = 754,
  [SMALL_STATE(18)] = 786,
  [SMALL_STATE(19)] = 842,
  [SMALL_STATE(20)] = 871,
  [SMALL_STATE(21)] = 914,
  [SMALL_STATE(22)] = 957,
  [SMALL_STATE(23)] = 988,
  [SMALL_STATE(24)] = 1031,
  [SMALL_STATE(25)] = 1056,
  [SMALL_STATE(26)] = 1099,
  [SMALL_STATE(27)] = 1142,
  [SMALL_STATE(28)] = 1171,
  [SMALL_STATE(29)] = 1199,
  [SMALL_STATE(30)] = 1227,
  [SMALL_STATE(31)] = 1251,
  [SMALL_STATE(32)] = 1275,
  [SMALL_STATE(33)] = 1303,
  [SMALL_STATE(34)] = 1327,
  [SMALL_STATE(35)] = 1350,
  [SMALL_STATE(36)] = 1387,
  [SMALL_STATE(37)] = 1424,
  [SMALL_STATE(38)] = 1459,
  [SMALL_STATE(39)] = 1482,
  [SMALL_STATE(40)] = 1505,
  [SMALL_STATE(41)] = 1542,
  [SMALL_STATE(42)] = 1565,
  [SMALL_STATE(43)] = 1588,
  [SMALL_STATE(44)] = 1610,
  [SMALL_STATE(45)] = 1642,
  [SMALL_STATE(46)] = 1664,
  [SMALL_STATE(47)] = 1686,
  [SMALL_STATE(48)] = 1714,
  [SMALL_STATE(49)] = 1748,
  [SMALL_STATE(50)] = 1770,
  [SMALL_STATE(51)] = 1818,
  [SMALL_STATE(52)] = 1866,
  [SMALL_STATE(53)] = 1914,
  [SMALL_STATE(54)] = 1936,
  [SMALL_STATE(55)] = 1984,
  [SMALL_STATE(56)] = 2016,
  [SMALL_STATE(57)] = 2050,
  [SMALL_STATE(58)] = 2098,
  [SMALL_STATE(59)] = 2120,
  [SMALL_STATE(60)] = 2142,
  [SMALL_STATE(61)] = 2164,
  [SMALL_STATE(62)] = 2186,
  [SMALL_STATE(63)] = 2218,
  [SMALL_STATE(64)] = 2239,
  [SMALL_STATE(65)] = 2264,
  [SMALL_STATE(66)] = 2289,
  [SMALL_STATE(67)] = 2312,
  [SMALL_STATE(68)] = 2333,
  [SMALL_STATE(69)] = 2378,
  [SMALL_STATE(70)] = 2403,
  [SMALL_STATE(71)] = 2430,
  [SMALL_STATE(72)] = 2450,
  [SMALL_STATE(73)] = 2474,
  [SMALL_STATE(74)] = 2494,
  [SMALL_STATE(75)] = 2514,
  [SMALL_STATE(76)] = 2534,
  [SMALL_STATE(77)] = 2558,
  [SMALL_STATE(78)] = 2582,
  [SMALL_STATE(79)] = 2601,
  [SMALL_STATE(80)] = 2620,
  [SMALL_STATE(81)] = 2639,
  [SMALL_STATE(82)] = 2658,
  [SMALL_STATE(83)] = 2689,
  [SMALL_STATE(84)] = 2708,
  [SMALL_STATE(85)] = 2726,
  [SMALL_STATE(86)] = 2744,
  [SMALL_STATE(87)] = 2772,
  [SMALL_STATE(88)] = 2800,
  [SMALL_STATE(89)] = 2828,
  [SMALL_STATE(90)] = 2846,
  [SMALL_STATE(91)] = 2864,
  [SMALL_STATE(92)] = 2882,
  [SMALL_STATE(93)] = 2900,
  [SMALL_STATE(94)] = 2918,
  [SMALL_STATE(95)] = 2936,
  [SMALL_STATE(96)] = 2954,
  [SMALL_STATE(97)] = 2973,
  [SMALL_STATE(98)] = 2990,
  [SMALL_STATE(99)] = 3007,
  [SMALL_STATE(100)] = 3024,
  [SMALL_STATE(101)] = 3041,
  [SMALL_STATE(102)] = 3058,
  [SMALL_STATE(103)] = 3075,
  [SMALL_STATE(104)] = 3092,
  [SMALL_STATE(105)] = 3109,
  [SMALL_STATE(106)] = 3126,
  [SMALL_STATE(107)] = 3143,
  [SMALL_STATE(108)] = 3160,
  [SMALL_STATE(109)] = 3177,
  [SMALL_STATE(110)] = 3194,
  [SMALL_STATE(111)] = 3211,
  [SMALL_STATE(112)] = 3228,
  [SMALL_STATE(113)] = 3249,
  [SMALL_STATE(114)] = 3266,
  [SMALL_STATE(115)] = 3283,
  [SMALL_STATE(116)] = 3315,
  [SMALL_STATE(117)] = 3347,
  [SMALL_STATE(118)] = 3379,
  [SMALL_STATE(119)] = 3411,
  [SMALL_STATE(120)] = 3443,
  [SMALL_STATE(121)] = 3475,
  [SMALL_STATE(122)] = 3491,
  [SMALL_STATE(123)] = 3504,
  [SMALL_STATE(124)] = 3517,
  [SMALL_STATE(125)] = 3530,
  [SMALL_STATE(126)] = 3543,
  [SMALL_STATE(127)] = 3564,
  [SMALL_STATE(128)] = 3577,
  [SMALL_STATE(129)] = 3598,
  [SMALL_STATE(130)] = 3611,
  [SMALL_STATE(131)] = 3624,
  [SMALL_STATE(132)] = 3637,
  [SMALL_STATE(133)] = 3650,
  [SMALL_STATE(134)] = 3663,
  [SMALL_STATE(135)] = 3676,
  [SMALL_STATE(136)] = 3689,
  [SMALL_STATE(137)] = 3704,
  [SMALL_STATE(138)] = 3719,
  [SMALL_STATE(139)] = 3734,
  [SMALL_STATE(140)] = 3749,
  [SMALL_STATE(141)] = 3759,
  [SMALL_STATE(142)] = 3769,
  [SMALL_STATE(143)] = 3779,
  [SMALL_STATE(144)] = 3787,
  [SMALL_STATE(145)] = 3795,
  [SMALL_STATE(146)] = 3803,
  [SMALL_STATE(147)] = 3813,
  [SMALL_STATE(148)] = 3818,
  [SMALL_STATE(149)] = 3825,
  [SMALL_STATE(150)] = 3832,
  [SMALL_STATE(151)] = 3839,
  [SMALL_STATE(152)] = 3846,
  [SMALL_STATE(153)] = 3853,
  [SMALL_STATE(154)] = 3860,
  [SMALL_STATE(155)] = 3867,
  [SMALL_STATE(156)] = 3874,
  [SMALL_STATE(157)] = 3881,
  [SMALL_STATE(158)] = 3885,
  [SMALL_STATE(159)] = 3889,
  [SMALL_STATE(160)] = 3893,
  [SMALL_STATE(161)] = 3897,
  [SMALL_STATE(162)] = 3901,
  [SMALL_STATE(163)] = 3905,
  [SMALL_STATE(164)] = 3909,
  [SMALL_STATE(165)] = 3913,
  [SMALL_STATE(166)] = 3917,
  [SMALL_STATE(167)] = 3921,
  [SMALL_STATE(168)] = 3925,
  [SMALL_STATE(169)] = 3929,
  [SMALL_STATE(170)] = 3933,
  [SMALL_STATE(171)] = 3937,
  [SMALL_STATE(172)] = 3941,
  [SMALL_STATE(173)] = 3945,
  [SMALL_STATE(174)] = 3949,
  [SMALL_STATE(175)] = 3953,
  [SMALL_STATE(176)] = 3957,
  [SMALL_STATE(177)] = 3961,
  [SMALL_STATE(178)] = 3965,
  [SMALL_STATE(179)] = 3969,
  [SMALL_STATE(180)] = 3973,
  [SMALL_STATE(181)] = 3977,
  [SMALL_STATE(182)] = 3981,
  [SMALL_STATE(183)] = 3985,
  [SMALL_STATE(184)] = 3989,
  [SMALL_STATE(185)] = 3993,
  [SMALL_STATE(186)] = 3997,
  [SMALL_STATE(187)] = 4001,
  [SMALL_STATE(188)] = 4005,
  [SMALL_STATE(189)] = 4009,
  [SMALL_STATE(190)] = 4013,
  [SMALL_STATE(191)] = 4017,
  [SMALL_STATE(192)] = 4021,
  [SMALL_STATE(193)] = 4025,
  [SMALL_STATE(194)] = 4029,
  [SMALL_STATE(195)] = 4033,
  [SMALL_STATE(196)] = 4037,
  [SMALL_STATE(197)] = 4041,
  [SMALL_STATE(198)] = 4045,
  [SMALL_STATE(199)] = 4049,
  [SMALL_STATE(200)] = 4053,
  [SMALL_STATE(201)] = 4057,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, .production_id = 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(157),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(175),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(201),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(16),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(16),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(153),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(138),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(154),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, .production_id = 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, .production_id = 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brief_header, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brief_header, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storageclass, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storageclass, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(160),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(159),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(180),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(48),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(48),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 6),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 6),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphasis, 2, .production_id = 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emphasis, 2, .production_id = 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_word, 2, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_word, 2, .production_id = 4),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brief_header, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brief_header, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, .production_id = 8),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, .production_id = 8),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 10), SHIFT_REPEAT(142),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 10),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 10),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 1),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(126),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(146),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(174),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(143),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(148),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(200),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(155),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(152),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 3, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat2, 3, .production_id = 1),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(139),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, .production_id = 7),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, .production_id = 7),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 5),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5, .production_id = 11),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5, .production_id = 11),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 7),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 7),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, .production_id = 9),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, .production_id = 9),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 10), SHIFT_REPEAT(141),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(7),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(128),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(140),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(162),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(26),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(35),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(145),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [532] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
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
