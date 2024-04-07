#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 26
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 1
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 23

enum ts_symbol_identifiers {
  sym_shebang = 1,
  sym__whitespace = 2,
  sym_comment = 3,
  anon_sym_POUND = 4,
  anon_sym_QMARK_DOT = 5,
  anon_sym_TILDE_EQ = 6,
  anon_sym_COLON = 7,
  anon_sym_DOLLAR_DOT_DOT_DOT = 8,
  anon_sym_DOT_DOT_DOT = 9,
  anon_sym_DOT_DOT = 10,
  anon_sym_DOT = 11,
  anon_sym_SQUOTE = 12,
  anon_sym_BQUOTE = 13,
  anon_sym_COMMA = 14,
  sym__reader_discard = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_LBRACE = 20,
  anon_sym_RBRACE = 21,
  sym_nil = 22,
  sym_boolean = 23,
  aux_sym__colon_string_token1 = 24,
  anon_sym_DQUOTE = 25,
  aux_sym__double_quote_string_token1 = 26,
  sym_escape_sequence = 27,
  sym_number = 28,
  sym_symbol = 29,
  sym_program = 30,
  sym__gap = 31,
  sym__sexp = 32,
  sym__special_override_symbols = 33,
  sym__reader_macro_char = 34,
  sym_discard = 35,
  sym_reader_macro = 36,
  sym__reader = 37,
  sym__list_content = 38,
  sym_list = 39,
  sym_sequence = 40,
  sym_table_pair = 41,
  sym_table = 42,
  sym__literal = 43,
  sym__colon_string = 44,
  sym__double_quote_string = 45,
  sym_string = 46,
  sym_multi_symbol = 47,
  sym_multi_symbol_method = 48,
  aux_sym_program_repeat1 = 49,
  aux_sym__list_content_repeat1 = 50,
  aux_sym__list_content_repeat2 = 51,
  aux_sym_table_repeat1 = 52,
  aux_sym__double_quote_string_repeat1 = 53,
  aux_sym_multi_symbol_repeat1 = 54,
  alias_sym_symbol_fragment = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_shebang] = "shebang",
  [sym__whitespace] = "_whitespace",
  [sym_comment] = "comment",
  [anon_sym_POUND] = "#",
  [anon_sym_QMARK_DOT] = "symbol",
  [anon_sym_TILDE_EQ] = "symbol",
  [anon_sym_COLON] = ":",
  [anon_sym_DOLLAR_DOT_DOT_DOT] = "symbol",
  [anon_sym_DOT_DOT_DOT] = "symbol",
  [anon_sym_DOT_DOT] = "symbol",
  [anon_sym_DOT] = ".",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [sym__reader_discard] = "_reader_discard",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_nil] = "nil",
  [sym_boolean] = "boolean",
  [aux_sym__colon_string_token1] = "string_content",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "_double_quote_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [sym_program] = "program",
  [sym__gap] = "_gap",
  [sym__sexp] = "_sexp",
  [sym__special_override_symbols] = "_special_override_symbols",
  [sym__reader_macro_char] = "_reader_macro_char",
  [sym_discard] = "discard",
  [sym_reader_macro] = "reader_macro",
  [sym__reader] = "_reader",
  [sym__list_content] = "_list_content",
  [sym_list] = "list",
  [sym_sequence] = "sequence",
  [sym_table_pair] = "table_pair",
  [sym_table] = "table",
  [sym__literal] = "_literal",
  [sym__colon_string] = "_colon_string",
  [sym__double_quote_string] = "_double_quote_string",
  [sym_string] = "string",
  [sym_multi_symbol] = "multi_symbol",
  [sym_multi_symbol_method] = "multi_symbol_method",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__list_content_repeat1] = "_list_content_repeat1",
  [aux_sym__list_content_repeat2] = "_list_content_repeat2",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym__double_quote_string_repeat1] = "_double_quote_string_repeat1",
  [aux_sym_multi_symbol_repeat1] = "multi_symbol_repeat1",
  [alias_sym_symbol_fragment] = "symbol_fragment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_shebang] = sym_shebang,
  [sym__whitespace] = sym__whitespace,
  [sym_comment] = sym_comment,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_QMARK_DOT] = sym_symbol,
  [anon_sym_TILDE_EQ] = sym_symbol,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOLLAR_DOT_DOT_DOT] = sym_symbol,
  [anon_sym_DOT_DOT_DOT] = sym_symbol,
  [anon_sym_DOT_DOT] = sym_symbol,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__reader_discard] = sym__reader_discard,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_nil] = sym_nil,
  [sym_boolean] = sym_boolean,
  [aux_sym__colon_string_token1] = aux_sym__colon_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_token1] = aux_sym__double_quote_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_symbol] = sym_symbol,
  [sym_program] = sym_program,
  [sym__gap] = sym__gap,
  [sym__sexp] = sym__sexp,
  [sym__special_override_symbols] = sym__special_override_symbols,
  [sym__reader_macro_char] = sym__reader_macro_char,
  [sym_discard] = sym_discard,
  [sym_reader_macro] = sym_reader_macro,
  [sym__reader] = sym__reader,
  [sym__list_content] = sym__list_content,
  [sym_list] = sym_list,
  [sym_sequence] = sym_sequence,
  [sym_table_pair] = sym_table_pair,
  [sym_table] = sym_table,
  [sym__literal] = sym__literal,
  [sym__colon_string] = sym__colon_string,
  [sym__double_quote_string] = sym__double_quote_string,
  [sym_string] = sym_string,
  [sym_multi_symbol] = sym_multi_symbol,
  [sym_multi_symbol_method] = sym_multi_symbol_method,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__list_content_repeat1] = aux_sym__list_content_repeat1,
  [aux_sym__list_content_repeat2] = aux_sym__list_content_repeat2,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym__double_quote_string_repeat1] = aux_sym__double_quote_string_repeat1,
  [aux_sym_multi_symbol_repeat1] = aux_sym_multi_symbol_repeat1,
  [alias_sym_symbol_fragment] = alias_sym_symbol_fragment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOT_DOT_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__reader_discard] = {
    .visible = false,
    .named = true,
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
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__colon_string_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__gap] = {
    .visible = false,
    .named = true,
  },
  [sym__sexp] = {
    .visible = false,
    .named = true,
  },
  [sym__special_override_symbols] = {
    .visible = false,
    .named = true,
  },
  [sym__reader_macro_char] = {
    .visible = false,
    .named = true,
  },
  [sym_discard] = {
    .visible = true,
    .named = true,
  },
  [sym_reader_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__reader] = {
    .visible = false,
    .named = true,
  },
  [sym__list_content] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_table_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__colon_string] = {
    .visible = false,
    .named = true,
  },
  [sym__double_quote_string] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_symbol_method] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_content_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quote_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multi_symbol_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_symbol_fragment] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_base = 1,
  field_call = 2,
  field_close = 3,
  field_content = 4,
  field_expression = 5,
  field_item = 6,
  field_key = 7,
  field_macro = 8,
  field_member = 9,
  field_method = 10,
  field_open = 11,
  field_value = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_base] = "base",
  [field_call] = "call",
  [field_close] = "close",
  [field_content] = "content",
  [field_expression] = "expression",
  [field_item] = "item",
  [field_key] = "key",
  [field_macro] = "macro",
  [field_member] = "member",
  [field_method] = "method",
  [field_open] = "open",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 3},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 4},
  [13] = {.index = 22, .length = 1},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 3},
  [17] = {.index = 31, .length = 1},
  [18] = {.index = 32, .length = 2},
  [19] = {.index = 34, .length = 2},
  [20] = {.index = 34, .length = 2},
  [21] = {.index = 36, .length = 2},
  [22] = {.index = 38, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 0, .inherited = true},
    {field_open, 0, .inherited = true},
  [2] =
    {field_close, 0, .inherited = true},
    {field_content, 0, .inherited = true},
    {field_open, 0, .inherited = true},
  [5] =
    {field_content, 1},
    {field_open, 0},
  [7] =
    {field_close, 1},
    {field_open, 0},
  [9] =
    {field_call, 0},
  [10] =
    {field_item, 0},
  [11] =
    {field_key, 0},
  [12] =
    {field_base, 0},
    {field_member, 1, .inherited = true},
  [14] =
    {field_expression, 1},
    {field_macro, 0},
  [16] =
    {field_call, 0},
    {field_item, 1, .inherited = true},
  [18] =
    {field_call, 1, .inherited = true},
    {field_close, 2},
    {field_item, 1, .inherited = true},
    {field_open, 0},
  [22] =
    {field_call, 1},
  [23] =
    {field_close, 2},
    {field_item, 1, .inherited = true},
    {field_open, 0},
  [26] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [28] =
    {field_close, 2},
    {field_content, 1},
    {field_open, 0},
  [31] =
    {field_member, 1},
  [32] =
    {field_member, 0, .inherited = true},
    {field_member, 1, .inherited = true},
  [34] =
    {field_base, 0},
    {field_method, 2},
  [36] =
    {field_call, 1},
    {field_item, 2, .inherited = true},
  [38] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_symbol,
  },
  [4] = {
    [1] = aux_sym__colon_string_token1,
  },
  [9] = {
    [0] = alias_sym_symbol_fragment,
  },
  [16] = {
    [1] = aux_sym__colon_string_token1,
  },
  [17] = {
    [1] = alias_sym_symbol_fragment,
  },
  [19] = {
    [0] = alias_sym_symbol_fragment,
    [2] = alias_sym_symbol_fragment,
  },
  [20] = {
    [2] = alias_sym_symbol_fragment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__double_quote_string_repeat1, 2,
    aux_sym__double_quote_string_repeat1,
    aux_sym__colon_string_token1,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 26,
  [49] = 28,
  [50] = 27,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 29,
  [55] = 34,
  [56] = 44,
  [57] = 57,
  [58] = 58,
  [59] = 39,
  [60] = 60,
  [61] = 43,
  [62] = 40,
  [63] = 42,
  [64] = 35,
  [65] = 38,
  [66] = 41,
  [67] = 36,
  [68] = 37,
  [69] = 69,
  [70] = 45,
  [71] = 30,
  [72] = 46,
  [73] = 31,
  [74] = 74,
  [75] = 32,
  [76] = 33,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 78,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 85,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 84,
};

static inline bool sym_shebang_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < '"'
      ? (c < 11
        ? c == '\t'
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool aux_sym__colon_string_token1_character_set_1(int32_t c) {
  return (c < '@'
    ? (c < '\''
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || (c >= ' ' && c <= '"')))
      : (c <= ')' || (c < ';'
        ? c == ','
        : c <= ';')))
    : (c <= '@' || (c < '`'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool aux_sym__colon_string_token1_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= '#' || (c < ','
        ? (c >= '\'' && c <= ')')
        : (c <= ',' || c == '.'))))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : (c <= ',' || c == '.'))))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_3(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_4(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : c <= '.')))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '~') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 17:
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 18:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '0') ADVANCE(101);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(114);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '~') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '0') ADVANCE(101);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(114);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '~') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(128);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '~') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(84);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_shebang);
      if (sym_shebang_character_set_1(lookahead)) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '_') ADVANCE(48);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '_') ADVANCE(48);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(39);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__reader_discard);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__reader_discard);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_nil);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_boolean);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == ':') ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ':') ADVANCE(95);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ':') ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == ':') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(37);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(65);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(81);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(86);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(91);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(102);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(128);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(102);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(128);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(128);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(108);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(3);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(128);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '0') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(128);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(31);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(128);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(128);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(119);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(58);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(120);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(122);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(56);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(123);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(117);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(117);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 19},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 19},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 19},
  [66] = {.lex_state = 19},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 19},
  [70] = {.lex_state = 19},
  [71] = {.lex_state = 19},
  [72] = {.lex_state = 19},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 17},
  [90] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_QMARK_DOT] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__reader_discard] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [aux_sym__colon_string_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(87),
    [sym__gap] = STATE(15),
    [sym__sexp] = STATE(15),
    [sym__special_override_symbols] = STATE(15),
    [sym__reader_macro_char] = STATE(24),
    [sym_discard] = STATE(15),
    [sym_reader_macro] = STATE(15),
    [sym__reader] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__colon_string] = STATE(67),
    [sym__double_quote_string] = STATE(55),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_shebang] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [sym__reader_discard] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_nil] = ACTIONS(29),
    [sym_boolean] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(29),
    [sym_symbol] = ACTIONS(33),
  },
  [2] = {
    [sym__gap] = STATE(22),
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(20),
    [sym_reader_macro] = STATE(20),
    [sym__reader] = STATE(20),
    [sym__list_content] = STATE(86),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(74),
    [sym_multi_symbol_method] = STATE(20),
    [aux_sym__list_content_repeat1] = STATE(22),
    [sym__whitespace] = ACTIONS(35),
    [sym_comment] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_nil] = ACTIONS(59),
    [sym_boolean] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(59),
    [sym_symbol] = ACTIONS(63),
  },
  [3] = {
    [sym__gap] = STATE(22),
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(20),
    [sym_reader_macro] = STATE(20),
    [sym__reader] = STATE(20),
    [sym__list_content] = STATE(85),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(74),
    [sym_multi_symbol_method] = STATE(20),
    [aux_sym__list_content_repeat1] = STATE(22),
    [sym__whitespace] = ACTIONS(35),
    [sym_comment] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_nil] = ACTIONS(59),
    [sym_boolean] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(59),
    [sym_symbol] = ACTIONS(63),
  },
  [4] = {
    [sym__gap] = STATE(5),
    [sym__sexp] = STATE(53),
    [sym__special_override_symbols] = STATE(53),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(53),
    [sym_reader_macro] = STATE(53),
    [sym__reader] = STATE(53),
    [sym_list] = STATE(53),
    [sym_sequence] = STATE(53),
    [sym_table_pair] = STATE(69),
    [sym_table] = STATE(53),
    [sym__literal] = STATE(53),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(53),
    [sym_multi_symbol] = STATE(53),
    [aux_sym_table_repeat1] = STATE(5),
    [sym__whitespace] = ACTIONS(67),
    [sym_comment] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_nil] = ACTIONS(71),
    [sym_boolean] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(71),
    [sym_symbol] = ACTIONS(73),
  },
  [5] = {
    [sym__gap] = STATE(8),
    [sym__sexp] = STATE(53),
    [sym__special_override_symbols] = STATE(53),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(53),
    [sym_reader_macro] = STATE(53),
    [sym__reader] = STATE(53),
    [sym_list] = STATE(53),
    [sym_sequence] = STATE(53),
    [sym_table_pair] = STATE(69),
    [sym_table] = STATE(53),
    [sym__literal] = STATE(53),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(53),
    [sym_multi_symbol] = STATE(53),
    [aux_sym_table_repeat1] = STATE(8),
    [sym__whitespace] = ACTIONS(75),
    [sym_comment] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(77),
    [sym_nil] = ACTIONS(71),
    [sym_boolean] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(71),
    [sym_symbol] = ACTIONS(73),
  },
  [6] = {
    [sym__gap] = STATE(8),
    [sym__sexp] = STATE(53),
    [sym__special_override_symbols] = STATE(53),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(53),
    [sym_reader_macro] = STATE(53),
    [sym__reader] = STATE(53),
    [sym_list] = STATE(53),
    [sym_sequence] = STATE(53),
    [sym_table_pair] = STATE(69),
    [sym_table] = STATE(53),
    [sym__literal] = STATE(53),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(53),
    [sym_multi_symbol] = STATE(53),
    [aux_sym_table_repeat1] = STATE(8),
    [sym__whitespace] = ACTIONS(75),
    [sym_comment] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_nil] = ACTIONS(71),
    [sym_boolean] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(71),
    [sym_symbol] = ACTIONS(73),
  },
  [7] = {
    [sym__gap] = STATE(6),
    [sym__sexp] = STATE(53),
    [sym__special_override_symbols] = STATE(53),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(53),
    [sym_reader_macro] = STATE(53),
    [sym__reader] = STATE(53),
    [sym_list] = STATE(53),
    [sym_sequence] = STATE(53),
    [sym_table_pair] = STATE(69),
    [sym_table] = STATE(53),
    [sym__literal] = STATE(53),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(53),
    [sym_multi_symbol] = STATE(53),
    [aux_sym_table_repeat1] = STATE(6),
    [sym__whitespace] = ACTIONS(81),
    [sym_comment] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(83),
    [sym_nil] = ACTIONS(71),
    [sym_boolean] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(71),
    [sym_symbol] = ACTIONS(73),
  },
  [8] = {
    [sym__gap] = STATE(8),
    [sym__sexp] = STATE(53),
    [sym__special_override_symbols] = STATE(53),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(53),
    [sym_reader_macro] = STATE(53),
    [sym__reader] = STATE(53),
    [sym_list] = STATE(53),
    [sym_sequence] = STATE(53),
    [sym_table_pair] = STATE(69),
    [sym_table] = STATE(53),
    [sym__literal] = STATE(53),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(53),
    [sym_multi_symbol] = STATE(53),
    [aux_sym_table_repeat1] = STATE(8),
    [sym__whitespace] = ACTIONS(85),
    [sym_comment] = ACTIONS(85),
    [anon_sym_POUND] = ACTIONS(88),
    [anon_sym_QMARK_DOT] = ACTIONS(91),
    [anon_sym_TILDE_EQ] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(91),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(91),
    [anon_sym_DOT_DOT] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_BQUOTE] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [sym__reader_discard] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(118),
    [sym_nil] = ACTIONS(120),
    [sym_boolean] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_number] = ACTIONS(120),
    [sym_symbol] = ACTIONS(126),
  },
  [9] = {
    [sym__gap] = STATE(9),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(52),
    [sym_reader_macro] = STATE(52),
    [sym__reader] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym__list_content_repeat2] = STATE(9),
    [sym__whitespace] = ACTIONS(129),
    [sym_comment] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_QMARK_DOT] = ACTIONS(135),
    [anon_sym_TILDE_EQ] = ACTIONS(135),
    [anon_sym_COLON] = ACTIONS(138),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(135),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(135),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [anon_sym_BQUOTE] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(147),
    [sym__reader_discard] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(161),
    [sym_nil] = ACTIONS(164),
    [sym_boolean] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym_number] = ACTIONS(164),
    [sym_symbol] = ACTIONS(170),
  },
  [10] = {
    [sym__gap] = STATE(21),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(52),
    [sym_reader_macro] = STATE(52),
    [sym__reader] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym__list_content_repeat2] = STATE(21),
    [sym__whitespace] = ACTIONS(173),
    [sym_comment] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_nil] = ACTIONS(177),
    [sym_boolean] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(177),
    [sym_symbol] = ACTIONS(73),
  },
  [11] = {
    [sym__gap] = STATE(19),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(52),
    [sym_reader_macro] = STATE(52),
    [sym__reader] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym__list_content_repeat2] = STATE(19),
    [sym__whitespace] = ACTIONS(179),
    [sym_comment] = ACTIONS(179),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_nil] = ACTIONS(177),
    [sym_boolean] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(177),
    [sym_symbol] = ACTIONS(73),
  },
  [12] = {
    [sym__gap] = STATE(14),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(52),
    [sym_reader_macro] = STATE(52),
    [sym__reader] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym__list_content_repeat2] = STATE(14),
    [sym__whitespace] = ACTIONS(183),
    [sym_comment] = ACTIONS(183),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_nil] = ACTIONS(177),
    [sym_boolean] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(177),
    [sym_symbol] = ACTIONS(73),
  },
  [13] = {
    [sym__gap] = STATE(16),
    [sym__sexp] = STATE(16),
    [sym__special_override_symbols] = STATE(16),
    [sym__reader_macro_char] = STATE(24),
    [sym_discard] = STATE(16),
    [sym_reader_macro] = STATE(16),
    [sym__reader] = STATE(16),
    [sym_list] = STATE(16),
    [sym_sequence] = STATE(16),
    [sym_table] = STATE(16),
    [sym__literal] = STATE(16),
    [sym__colon_string] = STATE(67),
    [sym__double_quote_string] = STATE(55),
    [sym_string] = STATE(16),
    [sym_multi_symbol] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym__whitespace] = ACTIONS(189),
    [sym_comment] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [sym__reader_discard] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_nil] = ACTIONS(191),
    [sym_boolean] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(191),
    [sym_symbol] = ACTIONS(33),
  },
  [14] = {
    [sym__gap] = STATE(9),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(52),
    [sym_reader_macro] = STATE(52),
    [sym__reader] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym__list_content_repeat2] = STATE(9),
    [sym__whitespace] = ACTIONS(193),
    [sym_comment] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_nil] = ACTIONS(177),
    [sym_boolean] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(177),
    [sym_symbol] = ACTIONS(73),
  },
  [15] = {
    [sym__gap] = STATE(18),
    [sym__sexp] = STATE(18),
    [sym__special_override_symbols] = STATE(18),
    [sym__reader_macro_char] = STATE(24),
    [sym_discard] = STATE(18),
    [sym_reader_macro] = STATE(18),
    [sym__reader] = STATE(18),
    [sym_list] = STATE(18),
    [sym_sequence] = STATE(18),
    [sym_table] = STATE(18),
    [sym__literal] = STATE(18),
    [sym__colon_string] = STATE(67),
    [sym__double_quote_string] = STATE(55),
    [sym_string] = STATE(18),
    [sym_multi_symbol] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym__whitespace] = ACTIONS(197),
    [sym_comment] = ACTIONS(197),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [sym__reader_discard] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_nil] = ACTIONS(199),
    [sym_boolean] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(199),
    [sym_symbol] = ACTIONS(33),
  },
  [16] = {
    [sym__gap] = STATE(18),
    [sym__sexp] = STATE(18),
    [sym__special_override_symbols] = STATE(18),
    [sym__reader_macro_char] = STATE(24),
    [sym_discard] = STATE(18),
    [sym_reader_macro] = STATE(18),
    [sym__reader] = STATE(18),
    [sym_list] = STATE(18),
    [sym_sequence] = STATE(18),
    [sym_table] = STATE(18),
    [sym__literal] = STATE(18),
    [sym__colon_string] = STATE(67),
    [sym__double_quote_string] = STATE(55),
    [sym_string] = STATE(18),
    [sym_multi_symbol] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym__whitespace] = ACTIONS(197),
    [sym_comment] = ACTIONS(197),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [sym__reader_discard] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_nil] = ACTIONS(199),
    [sym_boolean] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(199),
    [sym_symbol] = ACTIONS(33),
  },
  [17] = {
    [sym__gap] = STATE(9),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(52),
    [sym_reader_macro] = STATE(52),
    [sym__reader] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym__list_content_repeat2] = STATE(9),
    [sym__whitespace] = ACTIONS(193),
    [sym_comment] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_nil] = ACTIONS(177),
    [sym_boolean] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(177),
    [sym_symbol] = ACTIONS(73),
  },
  [18] = {
    [sym__gap] = STATE(18),
    [sym__sexp] = STATE(18),
    [sym__special_override_symbols] = STATE(18),
    [sym__reader_macro_char] = STATE(24),
    [sym_discard] = STATE(18),
    [sym_reader_macro] = STATE(18),
    [sym__reader] = STATE(18),
    [sym_list] = STATE(18),
    [sym_sequence] = STATE(18),
    [sym_table] = STATE(18),
    [sym__literal] = STATE(18),
    [sym__colon_string] = STATE(67),
    [sym__double_quote_string] = STATE(55),
    [sym_string] = STATE(18),
    [sym_multi_symbol] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym__whitespace] = ACTIONS(207),
    [sym_comment] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(210),
    [anon_sym_QMARK_DOT] = ACTIONS(213),
    [anon_sym_TILDE_EQ] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(216),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(213),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(213),
    [anon_sym_DOT_DOT] = ACTIONS(219),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [anon_sym_BQUOTE] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [sym__reader_discard] = ACTIONS(228),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(237),
    [sym_nil] = ACTIONS(240),
    [sym_boolean] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [sym_number] = ACTIONS(240),
    [sym_symbol] = ACTIONS(246),
  },
  [19] = {
    [sym__gap] = STATE(9),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(52),
    [sym_reader_macro] = STATE(52),
    [sym__reader] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym__list_content_repeat2] = STATE(9),
    [sym__whitespace] = ACTIONS(193),
    [sym_comment] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_nil] = ACTIONS(177),
    [sym_boolean] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(177),
    [sym_symbol] = ACTIONS(73),
  },
  [20] = {
    [sym__gap] = STATE(17),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(52),
    [sym_reader_macro] = STATE(52),
    [sym__reader] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym__list_content_repeat2] = STATE(17),
    [sym__whitespace] = ACTIONS(251),
    [sym_comment] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_nil] = ACTIONS(177),
    [sym_boolean] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(177),
    [sym_symbol] = ACTIONS(73),
  },
  [21] = {
    [sym__gap] = STATE(9),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(52),
    [sym_reader_macro] = STATE(52),
    [sym__reader] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym__list_content_repeat2] = STATE(9),
    [sym__whitespace] = ACTIONS(193),
    [sym_comment] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_nil] = ACTIONS(177),
    [sym_boolean] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(177),
    [sym_symbol] = ACTIONS(73),
  },
  [22] = {
    [sym__gap] = STATE(51),
    [sym__sexp] = STATE(12),
    [sym__special_override_symbols] = STATE(12),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(12),
    [sym_reader_macro] = STATE(12),
    [sym__reader] = STATE(12),
    [sym_list] = STATE(12),
    [sym_sequence] = STATE(12),
    [sym_table] = STATE(12),
    [sym__literal] = STATE(12),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(12),
    [sym_multi_symbol] = STATE(74),
    [sym_multi_symbol_method] = STATE(12),
    [aux_sym__list_content_repeat1] = STATE(51),
    [sym__whitespace] = ACTIONS(257),
    [sym_comment] = ACTIONS(257),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_nil] = ACTIONS(259),
    [sym_boolean] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(259),
    [sym_symbol] = ACTIONS(63),
  },
  [23] = {
    [sym__sexp] = STATE(60),
    [sym__special_override_symbols] = STATE(60),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(60),
    [sym_reader_macro] = STATE(60),
    [sym__reader] = STATE(60),
    [sym_list] = STATE(60),
    [sym_sequence] = STATE(60),
    [sym_table] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(60),
    [sym_multi_symbol] = STATE(60),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_nil] = ACTIONS(261),
    [sym_boolean] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(261),
    [sym_symbol] = ACTIONS(73),
  },
  [24] = {
    [sym__sexp] = STATE(63),
    [sym__special_override_symbols] = STATE(63),
    [sym__reader_macro_char] = STATE(24),
    [sym_discard] = STATE(63),
    [sym_reader_macro] = STATE(63),
    [sym__reader] = STATE(63),
    [sym_list] = STATE(63),
    [sym_sequence] = STATE(63),
    [sym_table] = STATE(63),
    [sym__literal] = STATE(63),
    [sym__colon_string] = STATE(67),
    [sym__double_quote_string] = STATE(55),
    [sym_string] = STATE(63),
    [sym_multi_symbol] = STATE(63),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [sym__reader_discard] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_nil] = ACTIONS(263),
    [sym_boolean] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(263),
    [sym_symbol] = ACTIONS(33),
  },
  [25] = {
    [sym__sexp] = STATE(42),
    [sym__special_override_symbols] = STATE(42),
    [sym__reader_macro_char] = STATE(25),
    [sym_discard] = STATE(42),
    [sym_reader_macro] = STATE(42),
    [sym__reader] = STATE(42),
    [sym_list] = STATE(42),
    [sym_sequence] = STATE(42),
    [sym_table] = STATE(42),
    [sym__literal] = STATE(42),
    [sym__colon_string] = STATE(36),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(42),
    [sym_multi_symbol] = STATE(42),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym__reader_discard] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_nil] = ACTIONS(265),
    [sym_boolean] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(265),
    [sym_symbol] = ACTIONS(73),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(271), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(269), 6,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(267), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [35] = 4,
    ACTIONS(278), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(276), 6,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(274), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [70] = 4,
    ACTIONS(285), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(287), 3,
      sym__reader_discard,
      sym_number,
      sym_symbol,
    ACTIONS(283), 10,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      aux_sym__colon_string_token1,
    ACTIONS(281), 12,
      sym__whitespace,
      sym_comment,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [105] = 4,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(291), 6,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(289), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [140] = 2,
    ACTIONS(297), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(295), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [170] = 2,
    ACTIONS(301), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(299), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [200] = 2,
    ACTIONS(305), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(303), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [230] = 2,
    ACTIONS(309), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(307), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [260] = 2,
    ACTIONS(313), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(311), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [290] = 2,
    ACTIONS(317), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(315), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [320] = 2,
    ACTIONS(321), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(319), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [350] = 2,
    ACTIONS(325), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(323), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [380] = 2,
    ACTIONS(329), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(327), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [410] = 2,
    ACTIONS(333), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(331), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [440] = 2,
    ACTIONS(287), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(281), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [470] = 3,
    ACTIONS(281), 5,
      sym__whitespace,
      sym_comment,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(335), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(337), 13,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [502] = 2,
    ACTIONS(341), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(339), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [532] = 2,
    ACTIONS(345), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(343), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [562] = 2,
    ACTIONS(349), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(347), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [592] = 2,
    ACTIONS(353), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(351), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [622] = 2,
    ACTIONS(357), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(355), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [652] = 5,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(359), 1,
      anon_sym_COLON,
    STATE(29), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(276), 6,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(274), 15,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [687] = 4,
    ACTIONS(361), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(269), 6,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(267), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [720] = 4,
    ACTIONS(366), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(287), 3,
      sym__reader_discard,
      sym_number,
      sym_symbol,
    ACTIONS(281), 10,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(364), 10,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      aux_sym__colon_string_token1,
  [753] = 4,
    ACTIONS(368), 1,
      anon_sym_DOT,
    STATE(54), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(276), 6,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(274), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [786] = 4,
    ACTIONS(371), 2,
      sym__whitespace,
      sym_comment,
    STATE(51), 2,
      sym__gap,
      aux_sym__list_content_repeat1,
    ACTIONS(374), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(376), 13,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [819] = 2,
    ACTIONS(380), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(378), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [848] = 4,
    STATE(23), 1,
      sym__gap,
    ACTIONS(382), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(384), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(386), 14,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [881] = 4,
    ACTIONS(388), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(291), 6,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(289), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [914] = 2,
    ACTIONS(313), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(311), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [942] = 2,
    ACTIONS(349), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(347), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [970] = 2,
    ACTIONS(392), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(390), 16,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [998] = 2,
    ACTIONS(396), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(394), 16,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1026] = 2,
    ACTIONS(333), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(331), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1054] = 2,
    ACTIONS(400), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(398), 16,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [1082] = 2,
    ACTIONS(345), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(343), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1110] = 2,
    ACTIONS(287), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(281), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1138] = 2,
    ACTIONS(341), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(339), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1166] = 2,
    ACTIONS(317), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(315), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1194] = 2,
    ACTIONS(329), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(327), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1222] = 3,
    ACTIONS(281), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
    ACTIONS(335), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(337), 13,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1252] = 2,
    ACTIONS(321), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(319), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1280] = 2,
    ACTIONS(325), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(323), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1308] = 2,
    ACTIONS(404), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(402), 16,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [1336] = 2,
    ACTIONS(353), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(351), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1364] = 2,
    ACTIONS(297), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(295), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1392] = 2,
    ACTIONS(357), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(355), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1420] = 2,
    ACTIONS(301), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(299), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1448] = 3,
    ACTIONS(406), 1,
      anon_sym_COLON,
    ACTIONS(276), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(274), 15,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1478] = 2,
    ACTIONS(305), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(303), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1506] = 2,
    ACTIONS(309), 7,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(307), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      sym__reader_discard,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1534] = 4,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(413), 1,
      sym_escape_sequence,
    STATE(77), 1,
      aux_sym__double_quote_string_repeat1,
  [1547] = 4,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    ACTIONS(418), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(420), 1,
      sym_escape_sequence,
    STATE(79), 1,
      aux_sym__double_quote_string_repeat1,
  [1560] = 4,
    ACTIONS(418), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(420), 1,
      sym_escape_sequence,
    ACTIONS(422), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym__double_quote_string_repeat1,
  [1573] = 4,
    ACTIONS(418), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(420), 1,
      sym_escape_sequence,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym__double_quote_string_repeat1,
  [1586] = 4,
    ACTIONS(418), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(420), 1,
      sym_escape_sequence,
    ACTIONS(426), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym__double_quote_string_repeat1,
  [1599] = 1,
    ACTIONS(428), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1605] = 1,
    ACTIONS(428), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1611] = 1,
    ACTIONS(430), 1,
      sym_symbol,
  [1615] = 1,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
  [1619] = 1,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
  [1623] = 1,
    ACTIONS(436), 1,
      ts_builtin_sym_end,
  [1627] = 1,
    ACTIONS(438), 1,
      sym_symbol,
  [1631] = 1,
    ACTIONS(440), 1,
      sym_symbol,
  [1635] = 1,
    ACTIONS(442), 1,
      sym_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(26)] = 0,
  [SMALL_STATE(27)] = 35,
  [SMALL_STATE(28)] = 70,
  [SMALL_STATE(29)] = 105,
  [SMALL_STATE(30)] = 140,
  [SMALL_STATE(31)] = 170,
  [SMALL_STATE(32)] = 200,
  [SMALL_STATE(33)] = 230,
  [SMALL_STATE(34)] = 260,
  [SMALL_STATE(35)] = 290,
  [SMALL_STATE(36)] = 320,
  [SMALL_STATE(37)] = 350,
  [SMALL_STATE(38)] = 380,
  [SMALL_STATE(39)] = 410,
  [SMALL_STATE(40)] = 440,
  [SMALL_STATE(41)] = 470,
  [SMALL_STATE(42)] = 502,
  [SMALL_STATE(43)] = 532,
  [SMALL_STATE(44)] = 562,
  [SMALL_STATE(45)] = 592,
  [SMALL_STATE(46)] = 622,
  [SMALL_STATE(47)] = 652,
  [SMALL_STATE(48)] = 687,
  [SMALL_STATE(49)] = 720,
  [SMALL_STATE(50)] = 753,
  [SMALL_STATE(51)] = 786,
  [SMALL_STATE(52)] = 819,
  [SMALL_STATE(53)] = 848,
  [SMALL_STATE(54)] = 881,
  [SMALL_STATE(55)] = 914,
  [SMALL_STATE(56)] = 942,
  [SMALL_STATE(57)] = 970,
  [SMALL_STATE(58)] = 998,
  [SMALL_STATE(59)] = 1026,
  [SMALL_STATE(60)] = 1054,
  [SMALL_STATE(61)] = 1082,
  [SMALL_STATE(62)] = 1110,
  [SMALL_STATE(63)] = 1138,
  [SMALL_STATE(64)] = 1166,
  [SMALL_STATE(65)] = 1194,
  [SMALL_STATE(66)] = 1222,
  [SMALL_STATE(67)] = 1252,
  [SMALL_STATE(68)] = 1280,
  [SMALL_STATE(69)] = 1308,
  [SMALL_STATE(70)] = 1336,
  [SMALL_STATE(71)] = 1364,
  [SMALL_STATE(72)] = 1392,
  [SMALL_STATE(73)] = 1420,
  [SMALL_STATE(74)] = 1448,
  [SMALL_STATE(75)] = 1478,
  [SMALL_STATE(76)] = 1506,
  [SMALL_STATE(77)] = 1534,
  [SMALL_STATE(78)] = 1547,
  [SMALL_STATE(79)] = 1560,
  [SMALL_STATE(80)] = 1573,
  [SMALL_STATE(81)] = 1586,
  [SMALL_STATE(82)] = 1599,
  [SMALL_STATE(83)] = 1605,
  [SMALL_STATE(84)] = 1611,
  [SMALL_STATE(85)] = 1615,
  [SMALL_STATE(86)] = 1619,
  [SMALL_STATE(87)] = 1623,
  [SMALL_STATE(88)] = 1627,
  [SMALL_STATE(89)] = 1631,
  [SMALL_STATE(90)] = 1635,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(8),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(41),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(40),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(28),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(40),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(39),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(25),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(38),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(10),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(7),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(53),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(81),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(27),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(9),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(41),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(40),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(28),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(40),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(39),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(25),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(38),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(10),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(7),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(52),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(81),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(27),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 13),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 3, .production_id = 21),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 11),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(66),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(62),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(62),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 1, .production_id = 6),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 18),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 18),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 18), SHIFT_REPEAT(90),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sexp, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sexp, 1),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(90),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .production_id = 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 2, .production_id = 9),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 2, .production_id = 9),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, .production_id = 5),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, .production_id = 5),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2, .production_id = 5),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 2, .production_id = 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 5),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 17),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 17),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discard, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discard, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reader_macro_char, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reader_macro_char, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader_macro, 2, .production_id = 10),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reader_macro, 2, .production_id = 10),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 12),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 12),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3, .production_id = 14),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3, .production_id = 14),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 14),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, .production_id = 14),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3, .production_id = 16),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3, .production_id = 16),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 18), SHIFT_REPEAT(84),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(84),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2), SHIFT_REPEAT(51),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 1, .production_id = 7),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 1, .production_id = 7),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_pair, 1, .production_id = 8),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_pair, 1, .production_id = 8),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 19),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 19),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 20),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 20),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_pair, 3, .production_id = 22),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_pair, 3, .production_id = 22),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 7),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 7),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(82),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(83),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [436] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fennel(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
