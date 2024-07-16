#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COLON_EQ = 4,
  anon_sym_COMMA = 5,
  anon_sym_if = 6,
  anon_sym_then = 7,
  anon_sym_else = 8,
  anon_sym_for = 9,
  anon_sym_step = 10,
  anon_sym_until = 11,
  anon_sym_do = 12,
  anon_sym_PLUS = 13,
  anon_sym_DASH = 14,
  anon_sym_STAR = 15,
  anon_sym_SLASH = 16,
  sym_identifier = 17,
  sym_number = 18,
  sym_source_file = 19,
  sym__statement = 20,
  sym_assignment = 21,
  sym_function_definition = 22,
  sym_parameter_list = 23,
  sym_control_structure = 24,
  sym_if_expression = 25,
  sym_for_expression = 26,
  sym_expression = 27,
  sym_binary_expression = 28,
  sym_function_call = 29,
  sym_argument_list = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym_parameter_list_repeat1 = 32,
  aux_sym_argument_list_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COMMA] = ",",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_step] = "step",
  [anon_sym_until] = "until",
  [anon_sym_do] = "do",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_assignment] = "assignment",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_control_structure] = "control_structure",
  [sym_if_expression] = "if_expression",
  [sym_for_expression] = "for_expression",
  [sym_expression] = "expression",
  [sym_binary_expression] = "binary_expression",
  [sym_function_call] = "function_call",
  [sym_argument_list] = "argument_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_step] = anon_sym_step,
  [anon_sym_until] = anon_sym_until,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_assignment] = sym_assignment,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_control_structure] = sym_control_structure,
  [sym_if_expression] = sym_if_expression,
  [sym_for_expression] = sym_for_expression,
  [sym_expression] = sym_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_function_call] = sym_function_call,
  [sym_argument_list] = sym_argument_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_step] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_until] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_control_structure] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_body = 2,
  field_condition = 3,
  field_consequence = 4,
  field_end = 5,
  field_left = 6,
  field_name = 7,
  field_right = 8,
  field_start = 9,
  field_step = 10,
  field_variable = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_end] = "end",
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
  [field_start] = "start",
  [field_step] = "step",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_right, 2},
  [2] =
    {field_name, 0},
  [3] =
    {field_condition, 1},
    {field_consequence, 3},
  [5] =
    {field_body, 4},
    {field_name, 0},
  [7] =
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequence, 3},
  [10] =
    {field_body, 5},
    {field_name, 0},
  [12] =
    {field_body, 9},
    {field_end, 7},
    {field_start, 3},
    {field_step, 5},
    {field_variable, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [10] = 7,
  [11] = 5,
  [12] = 8,
  [13] = 4,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 8,
  [18] = 14,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 5,
  [26] = 26,
  [27] = 4,
  [28] = 7,
  [29] = 29,
  [30] = 30,
  [31] = 8,
  [32] = 30,
  [33] = 30,
  [34] = 30,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 38,
  [45] = 45,
  [46] = 46,
  [47] = 38,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 38,
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
  [68] = 64,
  [69] = 64,
  [70] = 70,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '(', 27,
        ')', 28,
        '*', 43,
        '+', 41,
        ',', 30,
        '-', 42,
        '/', 44,
        ':', 26,
        'd', 13,
        'e', 9,
        'f', 14,
        'i', 6,
        's', 18,
        't', 7,
        'u', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 21:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '(', 27,
        ')', 28,
        '*', 43,
        '+', 41,
        ',', 30,
        '-', 42,
        '/', 44,
        ':', 25,
        'f', 48,
        'i', 46,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 22:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '(', 27,
        '*', 43,
        '+', 41,
        '-', 42,
        '/', 44,
        ':', 2,
        'e', 47,
        'f', 48,
        'i', 46,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_step);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 21},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 22},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_step] = ACTIONS(1),
    [anon_sym_until] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym__statement] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_control_structure] = STATE(2),
    [sym_if_expression] = STATE(37),
    [sym_for_expression] = STATE(37),
    [sym_expression] = STATE(19),
    [sym_binary_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_for,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_function_call,
    STATE(37), 2,
      sym_if_expression,
      sym_for_expression,
    STATE(3), 5,
      sym__statement,
      sym_assignment,
      sym_function_definition,
      sym_control_structure,
      aux_sym_source_file_repeat1,
  [34] = 9,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(20), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(26), 1,
      sym_number,
    STATE(19), 1,
      sym_expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_function_call,
    STATE(37), 2,
      sym_if_expression,
      sym_for_expression,
    STATE(3), 5,
      sym__statement,
      sym_assignment,
      sym_function_definition,
      sym_control_structure,
      aux_sym_source_file_repeat1,
  [68] = 2,
    ACTIONS(31), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(29), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
  [84] = 2,
    ACTIONS(35), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(33), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
  [100] = 4,
    ACTIONS(39), 1,
      anon_sym_COLON,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
  [120] = 2,
    ACTIONS(43), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
  [136] = 3,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 4,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      sym_identifier,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
  [154] = 3,
    ACTIONS(49), 1,
      anon_sym_COLON_EQ,
    ACTIONS(51), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
  [171] = 2,
    ACTIONS(43), 4,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      sym_identifier,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
  [186] = 2,
    ACTIONS(35), 4,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      sym_identifier,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
  [201] = 3,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
  [218] = 2,
    ACTIONS(31), 4,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      sym_identifier,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
  [233] = 2,
    ACTIONS(51), 4,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      sym_identifier,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
  [248] = 1,
    ACTIONS(47), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_step,
      anon_sym_until,
      anon_sym_do,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [261] = 4,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(57), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(61), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [280] = 2,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 8,
      anon_sym_then,
      anon_sym_step,
      anon_sym_until,
      anon_sym_do,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [294] = 2,
    ACTIONS(51), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_number,
  [308] = 3,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(67), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(69), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [324] = 3,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(73), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(69), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [340] = 3,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(77), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(69), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [356] = 3,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(81), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(69), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [372] = 3,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(85), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(69), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [388] = 3,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(89), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(69), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [404] = 1,
    ACTIONS(33), 8,
      anon_sym_then,
      anon_sym_step,
      anon_sym_until,
      anon_sym_do,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [415] = 7,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(35), 1,
      sym_expression,
    STATE(62), 1,
      sym_parameter_list,
    STATE(64), 1,
      sym_argument_list,
    STATE(7), 2,
      sym_binary_expression,
      sym_function_call,
  [438] = 1,
    ACTIONS(29), 8,
      anon_sym_then,
      anon_sym_step,
      anon_sym_until,
      anon_sym_do,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [449] = 1,
    ACTIONS(37), 8,
      anon_sym_then,
      anon_sym_step,
      anon_sym_until,
      anon_sym_do,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [460] = 5,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(37), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [479] = 6,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(35), 1,
      sym_expression,
    STATE(68), 1,
      sym_argument_list,
    STATE(7), 2,
      sym_binary_expression,
      sym_function_call,
  [499] = 2,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [511] = 6,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(35), 1,
      sym_expression,
    STATE(64), 1,
      sym_argument_list,
    STATE(7), 2,
      sym_binary_expression,
      sym_function_call,
  [531] = 6,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_expression,
    STATE(69), 1,
      sym_argument_list,
    STATE(7), 2,
      sym_binary_expression,
      sym_function_call,
  [551] = 6,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_expression,
    STATE(64), 1,
      sym_argument_list,
    STATE(7), 2,
      sym_binary_expression,
      sym_function_call,
  [571] = 4,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(113), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [587] = 2,
    ACTIONS(115), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(113), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [598] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(119), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [608] = 4,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym_number,
    STATE(27), 1,
      sym_expression,
    STATE(28), 2,
      sym_binary_expression,
      sym_function_call,
  [622] = 4,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym_number,
    STATE(46), 1,
      sym_expression,
    STATE(28), 2,
      sym_binary_expression,
      sym_function_call,
  [636] = 4,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(24), 1,
      sym_expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_function_call,
  [650] = 4,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(36), 1,
      sym_expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_function_call,
  [664] = 4,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym_number,
    STATE(51), 1,
      sym_expression,
    STATE(28), 2,
      sym_binary_expression,
      sym_function_call,
  [678] = 4,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(22), 1,
      sym_expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_function_call,
  [692] = 4,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(129), 1,
      sym_number,
    STATE(13), 1,
      sym_expression,
    STATE(10), 2,
      sym_binary_expression,
      sym_function_call,
  [706] = 2,
    ACTIONS(131), 1,
      anon_sym_step,
    ACTIONS(133), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [716] = 2,
    ACTIONS(135), 1,
      anon_sym_until,
    ACTIONS(133), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [726] = 4,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(4), 1,
      sym_expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_function_call,
  [740] = 4,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym_number,
    STATE(49), 1,
      sym_expression,
    STATE(28), 2,
      sym_binary_expression,
      sym_function_call,
  [754] = 2,
    ACTIONS(137), 1,
      anon_sym_do,
    ACTIONS(133), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [764] = 4,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(21), 1,
      sym_expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_function_call,
  [778] = 2,
    ACTIONS(139), 1,
      anon_sym_then,
    ACTIONS(133), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [788] = 4,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(20), 1,
      sym_expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_function_call,
  [802] = 4,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym_number,
    STATE(45), 1,
      sym_expression,
    STATE(28), 2,
      sym_binary_expression,
      sym_function_call,
  [816] = 4,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(23), 1,
      sym_expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_function_call,
  [830] = 4,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(129), 1,
      sym_number,
    STATE(16), 1,
      sym_expression,
    STATE(10), 2,
      sym_binary_expression,
      sym_function_call,
  [844] = 4,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(4), 1,
      sym_expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_function_call,
  [858] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_parameter_list_repeat1,
  [868] = 3,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_argument_list_repeat1,
  [878] = 3,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_parameter_list_repeat1,
  [888] = 3,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_argument_list_repeat1,
  [898] = 1,
    ACTIONS(146), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [903] = 1,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
  [907] = 1,
    ACTIONS(155), 1,
      anon_sym_COLON,
  [911] = 1,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
  [915] = 1,
    ACTIONS(159), 1,
      sym_identifier,
  [919] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
  [923] = 1,
    ACTIONS(163), 1,
      sym_identifier,
  [927] = 1,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
  [931] = 1,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
  [935] = 1,
    ACTIONS(169), 1,
      anon_sym_COLON_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 201,
  [SMALL_STATE(13)] = 218,
  [SMALL_STATE(14)] = 233,
  [SMALL_STATE(15)] = 248,
  [SMALL_STATE(16)] = 261,
  [SMALL_STATE(17)] = 280,
  [SMALL_STATE(18)] = 294,
  [SMALL_STATE(19)] = 308,
  [SMALL_STATE(20)] = 324,
  [SMALL_STATE(21)] = 340,
  [SMALL_STATE(22)] = 356,
  [SMALL_STATE(23)] = 372,
  [SMALL_STATE(24)] = 388,
  [SMALL_STATE(25)] = 404,
  [SMALL_STATE(26)] = 415,
  [SMALL_STATE(27)] = 438,
  [SMALL_STATE(28)] = 449,
  [SMALL_STATE(29)] = 460,
  [SMALL_STATE(30)] = 479,
  [SMALL_STATE(31)] = 499,
  [SMALL_STATE(32)] = 511,
  [SMALL_STATE(33)] = 531,
  [SMALL_STATE(34)] = 551,
  [SMALL_STATE(35)] = 571,
  [SMALL_STATE(36)] = 587,
  [SMALL_STATE(37)] = 598,
  [SMALL_STATE(38)] = 608,
  [SMALL_STATE(39)] = 622,
  [SMALL_STATE(40)] = 636,
  [SMALL_STATE(41)] = 650,
  [SMALL_STATE(42)] = 664,
  [SMALL_STATE(43)] = 678,
  [SMALL_STATE(44)] = 692,
  [SMALL_STATE(45)] = 706,
  [SMALL_STATE(46)] = 716,
  [SMALL_STATE(47)] = 726,
  [SMALL_STATE(48)] = 740,
  [SMALL_STATE(49)] = 754,
  [SMALL_STATE(50)] = 764,
  [SMALL_STATE(51)] = 778,
  [SMALL_STATE(52)] = 788,
  [SMALL_STATE(53)] = 802,
  [SMALL_STATE(54)] = 816,
  [SMALL_STATE(55)] = 830,
  [SMALL_STATE(56)] = 844,
  [SMALL_STATE(57)] = 858,
  [SMALL_STATE(58)] = 868,
  [SMALL_STATE(59)] = 878,
  [SMALL_STATE(60)] = 888,
  [SMALL_STATE(61)] = 898,
  [SMALL_STATE(62)] = 903,
  [SMALL_STATE(63)] = 907,
  [SMALL_STATE(64)] = 911,
  [SMALL_STATE(65)] = 915,
  [SMALL_STATE(66)] = 919,
  [SMALL_STATE(67)] = 923,
  [SMALL_STATE(68)] = 927,
  [SMALL_STATE(69)] = 931,
  [SMALL_STATE(70)] = 935,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 4, 0, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 4, 0, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 10, 0, 7),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 10, 0, 7),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 6),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 6),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 6, 0, 5),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 6, 0, 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_structure, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_structure, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [161] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_maxima(void) {
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
