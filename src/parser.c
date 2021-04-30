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

#define LANGUAGE_VERSION 13
#define STATE_COUNT 504
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 157
#define ALIAS_COUNT 20
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 27

enum {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATkeyframes = 7,
  aux_sym_keyframes_statement_token1 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  anon_sym_ATuse = 14,
  anon_sym_ATforward = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_COLON = 18,
  anon_sym_ATmixin = 19,
  anon_sym_ATinclude = 20,
  anon_sym_LPAREN2 = 21,
  anon_sym_RPAREN2 = 22,
  anon_sym_PERCENT = 23,
  anon_sym_ATextend = 24,
  anon_sym_ATif = 25,
  anon_sym_ATelse = 26,
  anon_sym_if = 27,
  anon_sym_ATeach = 28,
  anon_sym_in = 29,
  anon_sym_ATfor = 30,
  anon_sym_through = 31,
  anon_sym_ATwhile = 32,
  anon_sym_ATfunction = 33,
  anon_sym_ATreturn = 34,
  anon_sym_ATat_DASHroot = 35,
  anon_sym_ATerror = 36,
  anon_sym_ATwarn = 37,
  anon_sym_ATdebug = 38,
  sym_nesting_selector = 39,
  anon_sym_STAR = 40,
  anon_sym_DOT = 41,
  anon_sym_COLON_COLON = 42,
  anon_sym_POUND = 43,
  anon_sym_LBRACK = 44,
  anon_sym_EQ = 45,
  anon_sym_TILDE_EQ = 46,
  anon_sym_CARET_EQ = 47,
  anon_sym_PIPE_EQ = 48,
  anon_sym_STAR_EQ = 49,
  anon_sym_DOLLAR_EQ = 50,
  anon_sym_RBRACK = 51,
  anon_sym_GT = 52,
  anon_sym_TILDE = 53,
  anon_sym_PLUS = 54,
  sym_important = 55,
  anon_sym_and = 56,
  anon_sym_or = 57,
  anon_sym_not = 58,
  anon_sym_only = 59,
  anon_sym_selector = 60,
  aux_sym_color_value_token1 = 61,
  sym_string_value = 62,
  aux_sym_integer_value_token1 = 63,
  aux_sym_float_value_token1 = 64,
  sym_unit = 65,
  anon_sym_DASH = 66,
  anon_sym_SLASH = 67,
  anon_sym_EQ_EQ = 68,
  anon_sym_LT = 69,
  anon_sym_BANG_EQ = 70,
  anon_sym_LT_EQ = 71,
  anon_sym_GT_EQ = 72,
  sym_identifier = 73,
  sym_variable_identifier = 74,
  sym_at_keyword = 75,
  sym_comment = 76,
  sym_single_line_comment = 77,
  sym_plain_value = 78,
  sym__descendant_operator = 79,
  sym_stylesheet = 80,
  sym_import_statement = 81,
  sym_media_statement = 82,
  sym_charset_statement = 83,
  sym_namespace_statement = 84,
  sym_keyframes_statement = 85,
  sym_keyframe_block_list = 86,
  sym_keyframe_block = 87,
  sym_from = 88,
  sym_supports_statement = 89,
  sym_at_rule = 90,
  sym_use_statement = 91,
  sym_forward_statement = 92,
  sym_parameters = 93,
  sym_parameter = 94,
  sym_mixin_statement = 95,
  sym_include_statement = 96,
  sym_include_arguments = 97,
  sym_include_argument = 98,
  sym_placeholder = 99,
  sym_extend_statement = 100,
  sym_if_statement = 101,
  sym_if_clause = 102,
  sym_else_if_clause = 103,
  sym_else_clause = 104,
  sym_each_statement = 105,
  sym_for_statement = 106,
  sym_while_statement = 107,
  sym_function_statement = 108,
  sym_return_statement = 109,
  sym_at_root_statement = 110,
  sym_error_statement = 111,
  sym_warn_statement = 112,
  sym_debug_statement = 113,
  sym_rule_set = 114,
  sym_selectors = 115,
  sym_block = 116,
  sym__selector = 117,
  sym_universal_selector = 118,
  sym_class_selector = 119,
  sym_pseudo_class_selector = 120,
  sym_pseudo_element_selector = 121,
  sym_id_selector = 122,
  sym_attribute_selector = 123,
  sym_child_selector = 124,
  sym_descendant_selector = 125,
  sym_sibling_selector = 126,
  sym_adjacent_sibling_selector = 127,
  sym_pseudo_class_arguments = 128,
  sym_declaration = 129,
  sym_last_declaration = 130,
  sym__query = 131,
  sym_feature_query = 132,
  sym_parenthesized_query = 133,
  sym_binary_query = 134,
  sym_unary_query = 135,
  sym_selector_query = 136,
  sym__value = 137,
  sym_parenthesized_value = 138,
  sym_color_value = 139,
  sym_integer_value = 140,
  sym_float_value = 141,
  sym_call_expression = 142,
  sym_binary_expression = 143,
  sym_arguments = 144,
  aux_sym_stylesheet_repeat1 = 145,
  aux_sym_import_statement_repeat1 = 146,
  aux_sym_keyframe_block_list_repeat1 = 147,
  aux_sym_parameters_repeat1 = 148,
  aux_sym_include_arguments_repeat1 = 149,
  aux_sym_if_statement_repeat1 = 150,
  aux_sym_selectors_repeat1 = 151,
  aux_sym_block_repeat1 = 152,
  aux_sym_pseudo_class_arguments_repeat1 = 153,
  aux_sym_pseudo_class_arguments_repeat2 = 154,
  aux_sym_declaration_repeat1 = 155,
  aux_sym_arguments_repeat1 = 156,
  alias_sym_argument_name = 157,
  alias_sym_argument_value = 158,
  alias_sym_attribute_name = 159,
  alias_sym_class_name = 160,
  alias_sym_condition = 161,
  alias_sym_default_value = 162,
  alias_sym_feature_name = 163,
  alias_sym_function_name = 164,
  alias_sym_id_name = 165,
  alias_sym_key = 166,
  alias_sym_keyframes_name = 167,
  alias_sym_keyword_query = 168,
  alias_sym_name = 169,
  alias_sym_namespace_name = 170,
  alias_sym_property_name = 171,
  alias_sym_tag_name = 172,
  alias_sym_through = 173,
  alias_sym_value = 174,
  alias_sym_variable = 175,
  alias_sym_variable_value = 176,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [anon_sym_ATuse] = "@use",
  [anon_sym_ATforward] = "@forward",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_ATmixin] = "@mixin",
  [anon_sym_ATinclude] = "@include",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_RPAREN2] = ")",
  [anon_sym_PERCENT] = "%",
  [anon_sym_ATextend] = "@extend",
  [anon_sym_ATif] = "@if",
  [anon_sym_ATelse] = "@else",
  [anon_sym_if] = "if",
  [anon_sym_ATeach] = "@each",
  [anon_sym_in] = "in",
  [anon_sym_ATfor] = "@for",
  [anon_sym_through] = "through",
  [anon_sym_ATwhile] = "@while",
  [anon_sym_ATfunction] = "@function",
  [anon_sym_ATreturn] = "@return",
  [anon_sym_ATat_DASHroot] = "@at-root",
  [anon_sym_ATerror] = "@error",
  [anon_sym_ATwarn] = "@warn",
  [anon_sym_ATdebug] = "@debug",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [sym_important] = "important",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [sym_string_value] = "string_value",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT] = "<",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [sym_identifier] = "identifier",
  [sym_variable_identifier] = "variable_name",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_single_line_comment] = "single_line_comment",
  [sym_plain_value] = "plain_value",
  [sym__descendant_operator] = "_descendant_operator",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_from] = "from",
  [sym_supports_statement] = "supports_statement",
  [sym_at_rule] = "at_rule",
  [sym_use_statement] = "use_statement",
  [sym_forward_statement] = "forward_statement",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_mixin_statement] = "mixin_statement",
  [sym_include_statement] = "include_statement",
  [sym_include_arguments] = "arguments",
  [sym_include_argument] = "argument",
  [sym_placeholder] = "placeholder",
  [sym_extend_statement] = "extend_statement",
  [sym_if_statement] = "if_statement",
  [sym_if_clause] = "if_clause",
  [sym_else_if_clause] = "else_if_clause",
  [sym_else_clause] = "else_clause",
  [sym_each_statement] = "each_statement",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_function_statement] = "function_statement",
  [sym_return_statement] = "return_statement",
  [sym_at_root_statement] = "at_root_statement",
  [sym_error_statement] = "error_statement",
  [sym_warn_statement] = "warn_statement",
  [sym_debug_statement] = "debug_statement",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_include_arguments_repeat1] = "include_arguments_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_pseudo_class_arguments_repeat2] = "pseudo_class_arguments_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [alias_sym_argument_name] = "argument_name",
  [alias_sym_argument_value] = "argument_value",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_class_name] = "class_name",
  [alias_sym_condition] = "condition",
  [alias_sym_default_value] = "default_value",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_key] = "key",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_name] = "name",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
  [alias_sym_through] = "through",
  [alias_sym_value] = "value",
  [alias_sym_variable] = "variable",
  [alias_sym_variable_value] = "variable_value",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = sym_at_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_from] = anon_sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [anon_sym_ATuse] = anon_sym_ATuse,
  [anon_sym_ATforward] = anon_sym_ATforward,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ATmixin] = anon_sym_ATmixin,
  [anon_sym_ATinclude] = anon_sym_ATinclude,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_RPAREN2] = anon_sym_RPAREN,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_ATextend] = anon_sym_ATextend,
  [anon_sym_ATif] = anon_sym_ATif,
  [anon_sym_ATelse] = anon_sym_ATelse,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_ATeach] = anon_sym_ATeach,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_ATfor] = anon_sym_ATfor,
  [anon_sym_through] = anon_sym_through,
  [anon_sym_ATwhile] = anon_sym_ATwhile,
  [anon_sym_ATfunction] = anon_sym_ATfunction,
  [anon_sym_ATreturn] = anon_sym_ATreturn,
  [anon_sym_ATat_DASHroot] = anon_sym_ATat_DASHroot,
  [anon_sym_ATerror] = anon_sym_ATerror,
  [anon_sym_ATwarn] = anon_sym_ATwarn,
  [anon_sym_ATdebug] = anon_sym_ATdebug,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_important] = sym_important,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [sym_string_value] = sym_string_value,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [sym_identifier] = sym_identifier,
  [sym_variable_identifier] = sym_variable_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_comment] = sym_comment,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_plain_value] = sym_plain_value,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_from] = sym_from,
  [sym_supports_statement] = sym_supports_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_use_statement] = sym_use_statement,
  [sym_forward_statement] = sym_forward_statement,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_mixin_statement] = sym_mixin_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_include_arguments] = sym_arguments,
  [sym_include_argument] = sym_include_argument,
  [sym_placeholder] = sym_placeholder,
  [sym_extend_statement] = sym_extend_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_if_clause] = sym_if_clause,
  [sym_else_if_clause] = sym_else_if_clause,
  [sym_else_clause] = sym_else_clause,
  [sym_each_statement] = sym_each_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_function_statement] = sym_function_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_at_root_statement] = sym_at_root_statement,
  [sym_error_statement] = sym_error_statement,
  [sym_warn_statement] = sym_warn_statement,
  [sym_debug_statement] = sym_debug_statement,
  [sym_rule_set] = sym_rule_set,
  [sym_selectors] = sym_selectors,
  [sym_block] = sym_block,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_include_arguments_repeat1] = aux_sym_include_arguments_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_pseudo_class_arguments_repeat2] = aux_sym_pseudo_class_arguments_repeat2,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [alias_sym_argument_name] = alias_sym_argument_name,
  [alias_sym_argument_value] = alias_sym_argument_value,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_condition] = alias_sym_condition,
  [alias_sym_default_value] = alias_sym_default_value,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_key] = alias_sym_key,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_property_name] = alias_sym_property_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
  [alias_sym_through] = alias_sym_through,
  [alias_sym_value] = alias_sym_value,
  [alias_sym_variable] = alias_sym_variable,
  [alias_sym_variable_value] = alias_sym_variable_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyframes_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATuse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATforward] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmixin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATextend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATeach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_through] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATwhile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATreturn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATat_DASHroot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATwarn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdebug] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_forward_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_mixin_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_include_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_extend_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_each_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_root_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_error_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_warn_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_argument_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_argument_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_condition] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_default_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_key] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_through] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_value] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [0] = sym_plain_value,
  },
  [3] = {
    [0] = alias_sym_variable_value,
  },
  [4] = {
    [0] = alias_sym_keyword_query,
  },
  [5] = {
    [1] = alias_sym_class_name,
  },
  [6] = {
    [1] = alias_sym_tag_name,
  },
  [7] = {
    [1] = alias_sym_id_name,
  },
  [8] = {
    [0] = alias_sym_function_name,
  },
  [9] = {
    [1] = alias_sym_keyframes_name,
  },
  [10] = {
    [1] = alias_sym_name,
  },
  [11] = {
    [1] = alias_sym_condition,
  },
  [12] = {
    [1] = alias_sym_attribute_name,
  },
  [13] = {
    [2] = alias_sym_class_name,
  },
  [14] = {
    [2] = alias_sym_tag_name,
  },
  [15] = {
    [2] = alias_sym_id_name,
  },
  [16] = {
    [1] = alias_sym_namespace_name,
  },
  [17] = {
    [0] = alias_sym_argument_value,
  },
  [18] = {
    [0] = alias_sym_property_name,
  },
  [19] = {
    [2] = alias_sym_attribute_name,
  },
  [20] = {
    [1] = alias_sym_value,
  },
  [21] = {
    [2] = alias_sym_condition,
  },
  [22] = {
    [1] = alias_sym_feature_name,
  },
  [23] = {
    [2] = alias_sym_default_value,
  },
  [24] = {
    [0] = alias_sym_argument_name,
    [2] = alias_sym_argument_value,
  },
  [25] = {
    [1] = alias_sym_key,
    [3] = alias_sym_value,
  },
  [26] = {
    [1] = alias_sym_variable,
    [3] = sym_from,
    [5] = alias_sym_through,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym__value, 6,
    sym__value,
    alias_sym_argument_value,
    alias_sym_condition,
    alias_sym_default_value,
    alias_sym_through,
    sym_from,
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '&'
      ? (c < '$'
        ? c == ' '
        : c <= '$')
      : (c <= '&' || (c >= '(' && c <= ')')))
    : (c <= '.' || (c < '_'
      ? (c < 'A'
        ? (c >= '0' && c <= '9')
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_single_line_comment_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_single_line_comment_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= '*')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_plain_value_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= '*')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_3(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(106);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '~') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(97);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(400);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(396);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(257);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(163);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(255);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(161);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(375);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(375);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(375);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 88:
      if (lookahead == 'y') ADVANCE(177);
      END_STATE();
    case 89:
      if (lookahead == '{') ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == '}') ADVANCE(280);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 97:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 98:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 99:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(404);
      END_STATE();
    case 100:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(23);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(100);
      END_STATE();
    case 101:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(101);
      END_STATE();
    case 102:
      if (eof) ADVANCE(106);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 103:
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(104)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 104:
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(104)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 105:
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(105)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_ATuse);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_ATforward);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(153);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_ATmixin);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ATextend);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_ATif);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_ATelse);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ATeach);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'w') ADVANCE(298);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_through);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_through);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ATwhile);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ATfunction);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ATat_DASHroot);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_ATerror);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_ATwarn);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_ATdebug);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(90);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(255);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(259);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '/') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'y') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '%') ADVANCE(241);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '%') ADVANCE(241);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '_') ADVANCE(283);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'g') ADVANCE(244);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(246);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(400);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(396);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '_') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'y') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == '/') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '/') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == '/') ADVANCE(99);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '/') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == 'k') ADVANCE(324);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == 'x') ADVANCE(385);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == 'x') ADVANCE(385);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'h') ADVANCE(331);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'b') ADVANCE(386);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(370);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(135);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(318);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(321);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(322);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(345);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(380);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == 'u') ADVANCE(345);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(296);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(352);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(356);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(300);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(314);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(389);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(357);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(309);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(366);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'x') ADVANCE(333);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'y') ADVANCE(326);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'y') ADVANCE(327);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(398);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(400);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(399);
      if (sym_single_line_comment_character_set_1(lookahead)) ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_2(lookahead)) ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(396);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_2(lookahead)) ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(397);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '$') ADVANCE(403);
      if (lookahead == '/') ADVANCE(99);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '{') ADVANCE(90);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(404);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(99);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 103},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 103},
  [14] = {.lex_state = 103},
  [15] = {.lex_state = 105},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 105},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 105},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 105},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 105},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 105},
  [31] = {.lex_state = 105},
  [32] = {.lex_state = 105},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 103},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 103},
  [38] = {.lex_state = 103},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 103},
  [41] = {.lex_state = 103},
  [42] = {.lex_state = 103},
  [43] = {.lex_state = 103},
  [44] = {.lex_state = 103},
  [45] = {.lex_state = 103},
  [46] = {.lex_state = 103},
  [47] = {.lex_state = 103},
  [48] = {.lex_state = 103},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 103},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 103},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 103},
  [75] = {.lex_state = 103},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 103},
  [78] = {.lex_state = 103},
  [79] = {.lex_state = 103},
  [80] = {.lex_state = 103},
  [81] = {.lex_state = 103},
  [82] = {.lex_state = 103},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 18},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 103},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 103},
  [91] = {.lex_state = 103},
  [92] = {.lex_state = 103},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 18},
  [97] = {.lex_state = 103},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 18},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 103},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 103},
  [106] = {.lex_state = 18},
  [107] = {.lex_state = 103},
  [108] = {.lex_state = 103},
  [109] = {.lex_state = 103},
  [110] = {.lex_state = 103},
  [111] = {.lex_state = 103},
  [112] = {.lex_state = 103},
  [113] = {.lex_state = 103},
  [114] = {.lex_state = 103},
  [115] = {.lex_state = 103},
  [116] = {.lex_state = 103},
  [117] = {.lex_state = 103},
  [118] = {.lex_state = 103},
  [119] = {.lex_state = 103},
  [120] = {.lex_state = 103},
  [121] = {.lex_state = 103},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 2, .external_lex_state = 1},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3, .external_lex_state = 1},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 6, .external_lex_state = 1},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 21},
  [154] = {.lex_state = 21},
  [155] = {.lex_state = 21},
  [156] = {.lex_state = 21},
  [157] = {.lex_state = 21},
  [158] = {.lex_state = 21},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 6, .external_lex_state = 1},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 103, .external_lex_state = 1},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 103, .external_lex_state = 1},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 103, .external_lex_state = 1},
  [257] = {.lex_state = 103, .external_lex_state = 1},
  [258] = {.lex_state = 24},
  [259] = {.lex_state = 12},
  [260] = {.lex_state = 24},
  [261] = {.lex_state = 21, .external_lex_state = 1},
  [262] = {.lex_state = 103, .external_lex_state = 1},
  [263] = {.lex_state = 103, .external_lex_state = 1},
  [264] = {.lex_state = 103, .external_lex_state = 1},
  [265] = {.lex_state = 103, .external_lex_state = 1},
  [266] = {.lex_state = 103, .external_lex_state = 1},
  [267] = {.lex_state = 103, .external_lex_state = 1},
  [268] = {.lex_state = 103, .external_lex_state = 1},
  [269] = {.lex_state = 103, .external_lex_state = 1},
  [270] = {.lex_state = 103, .external_lex_state = 1},
  [271] = {.lex_state = 103, .external_lex_state = 1},
  [272] = {.lex_state = 103, .external_lex_state = 1},
  [273] = {.lex_state = 103, .external_lex_state = 1},
  [274] = {.lex_state = 103, .external_lex_state = 1},
  [275] = {.lex_state = 103, .external_lex_state = 1},
  [276] = {.lex_state = 12},
  [277] = {.lex_state = 103, .external_lex_state = 1},
  [278] = {.lex_state = 103, .external_lex_state = 1},
  [279] = {.lex_state = 12},
  [280] = {.lex_state = 103, .external_lex_state = 1},
  [281] = {.lex_state = 103, .external_lex_state = 1},
  [282] = {.lex_state = 103, .external_lex_state = 1},
  [283] = {.lex_state = 12},
  [284] = {.lex_state = 103, .external_lex_state = 1},
  [285] = {.lex_state = 103, .external_lex_state = 1},
  [286] = {.lex_state = 6},
  [287] = {.lex_state = 16},
  [288] = {.lex_state = 103, .external_lex_state = 1},
  [289] = {.lex_state = 6},
  [290] = {.lex_state = 6},
  [291] = {.lex_state = 6},
  [292] = {.lex_state = 12},
  [293] = {.lex_state = 12},
  [294] = {.lex_state = 12},
  [295] = {.lex_state = 12},
  [296] = {.lex_state = 6},
  [297] = {.lex_state = 12},
  [298] = {.lex_state = 6},
  [299] = {.lex_state = 16},
  [300] = {.lex_state = 12},
  [301] = {.lex_state = 12},
  [302] = {.lex_state = 12},
  [303] = {.lex_state = 12},
  [304] = {.lex_state = 12},
  [305] = {.lex_state = 12},
  [306] = {.lex_state = 12},
  [307] = {.lex_state = 6},
  [308] = {.lex_state = 103, .external_lex_state = 1},
  [309] = {.lex_state = 12},
  [310] = {.lex_state = 103, .external_lex_state = 1},
  [311] = {.lex_state = 103, .external_lex_state = 1},
  [312] = {.lex_state = 6},
  [313] = {.lex_state = 6},
  [314] = {.lex_state = 6},
  [315] = {.lex_state = 6},
  [316] = {.lex_state = 6},
  [317] = {.lex_state = 103, .external_lex_state = 1},
  [318] = {.lex_state = 6},
  [319] = {.lex_state = 6},
  [320] = {.lex_state = 6},
  [321] = {.lex_state = 6},
  [322] = {.lex_state = 6},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 24},
  [325] = {.lex_state = 24},
  [326] = {.lex_state = 103, .external_lex_state = 1},
  [327] = {.lex_state = 6},
  [328] = {.lex_state = 6},
  [329] = {.lex_state = 6},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 6},
  [332] = {.lex_state = 6},
  [333] = {.lex_state = 6},
  [334] = {.lex_state = 6},
  [335] = {.lex_state = 24},
  [336] = {.lex_state = 6},
  [337] = {.lex_state = 6},
  [338] = {.lex_state = 24},
  [339] = {.lex_state = 24},
  [340] = {.lex_state = 6},
  [341] = {.lex_state = 103, .external_lex_state = 1},
  [342] = {.lex_state = 6},
  [343] = {.lex_state = 6},
  [344] = {.lex_state = 24},
  [345] = {.lex_state = 6},
  [346] = {.lex_state = 6},
  [347] = {.lex_state = 24},
  [348] = {.lex_state = 6},
  [349] = {.lex_state = 24},
  [350] = {.lex_state = 103, .external_lex_state = 1},
  [351] = {.lex_state = 91},
  [352] = {.lex_state = 91},
  [353] = {.lex_state = 91},
  [354] = {.lex_state = 91},
  [355] = {.lex_state = 91},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 24},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 24},
  [360] = {.lex_state = 6},
  [361] = {.lex_state = 6},
  [362] = {.lex_state = 6},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 6},
  [365] = {.lex_state = 6},
  [366] = {.lex_state = 6},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 21},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 21},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 103},
  [379] = {.lex_state = 91},
  [380] = {.lex_state = 18},
  [381] = {.lex_state = 18},
  [382] = {.lex_state = 91},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 103},
  [385] = {.lex_state = 103},
  [386] = {.lex_state = 91},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 91},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 103},
  [391] = {.lex_state = 18},
  [392] = {.lex_state = 6},
  [393] = {.lex_state = 103},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 18},
  [396] = {.lex_state = 103},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 103},
  [399] = {.lex_state = 18},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 103},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 21},
  [406] = {.lex_state = 6},
  [407] = {.lex_state = 103},
  [408] = {.lex_state = 103},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 21},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 103},
  [414] = {.lex_state = 18},
  [415] = {.lex_state = 18},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 103},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 103},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 103},
  [433] = {.lex_state = 14},
  [434] = {.lex_state = 25},
  [435] = {.lex_state = 25},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 18},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 21},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 21},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 6},
  [448] = {.lex_state = 21},
  [449] = {.lex_state = 103},
  [450] = {.lex_state = 21},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 21},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 21},
  [456] = {.lex_state = 6},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 21},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 103},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 103},
  [471] = {.lex_state = 21},
  [472] = {.lex_state = 21},
  [473] = {.lex_state = 21},
  [474] = {.lex_state = 6},
  [475] = {.lex_state = 21},
  [476] = {.lex_state = 21},
  [477] = {.lex_state = 18},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 21},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 21},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 6},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 21},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 21},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 21},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 21},
  [499] = {.lex_state = 103},
  [500] = {.lex_state = 103},
  [501] = {.lex_state = 21},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 103},
};

enum {
  ts_external_token__descendant_operator = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [anon_sym_ATuse] = ACTIONS(1),
    [anon_sym_ATforward] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_ATmixin] = ACTIONS(1),
    [anon_sym_ATinclude] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_RPAREN2] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_ATextend] = ACTIONS(1),
    [anon_sym_ATif] = ACTIONS(1),
    [anon_sym_ATelse] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_ATeach] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_ATfor] = ACTIONS(1),
    [anon_sym_through] = ACTIONS(1),
    [anon_sym_ATwhile] = ACTIONS(1),
    [anon_sym_ATfunction] = ACTIONS(1),
    [anon_sym_ATreturn] = ACTIONS(1),
    [anon_sym_ATat_DASHroot] = ACTIONS(1),
    [anon_sym_ATerror] = ACTIONS(1),
    [anon_sym_ATwarn] = ACTIONS(1),
    [anon_sym_ATdebug] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(464),
    [sym_import_statement] = STATE(13),
    [sym_media_statement] = STATE(13),
    [sym_charset_statement] = STATE(13),
    [sym_namespace_statement] = STATE(13),
    [sym_keyframes_statement] = STATE(13),
    [sym_supports_statement] = STATE(13),
    [sym_at_rule] = STATE(13),
    [sym_use_statement] = STATE(13),
    [sym_forward_statement] = STATE(13),
    [sym_mixin_statement] = STATE(13),
    [sym_include_statement] = STATE(13),
    [sym_placeholder] = STATE(13),
    [sym_if_statement] = STATE(13),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(13),
    [sym_for_statement] = STATE(13),
    [sym_while_statement] = STATE(13),
    [sym_function_statement] = STATE(13),
    [sym_error_statement] = STATE(13),
    [sym_warn_statement] = STATE(13),
    [sym_debug_statement] = STATE(13),
    [sym_rule_set] = STATE(13),
    [sym_selectors] = STATE(430),
    [sym__selector] = STATE(275),
    [sym_universal_selector] = STATE(275),
    [sym_class_selector] = STATE(275),
    [sym_pseudo_class_selector] = STATE(275),
    [sym_pseudo_element_selector] = STATE(275),
    [sym_id_selector] = STATE(275),
    [sym_attribute_selector] = STATE(275),
    [sym_child_selector] = STATE(275),
    [sym_descendant_selector] = STATE(275),
    [sym_sibling_selector] = STATE(275),
    [sym_adjacent_sibling_selector] = STATE(275),
    [sym_declaration] = STATE(13),
    [aux_sym_stylesheet_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [anon_sym_ATuse] = ACTIONS(19),
    [anon_sym_ATforward] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(25),
    [anon_sym_ATinclude] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_ATif] = ACTIONS(31),
    [anon_sym_ATeach] = ACTIONS(33),
    [anon_sym_ATfor] = ACTIONS(35),
    [anon_sym_ATwhile] = ACTIONS(37),
    [anon_sym_ATfunction] = ACTIONS(39),
    [anon_sym_ATerror] = ACTIONS(41),
    [anon_sym_ATwarn] = ACTIONS(43),
    [anon_sym_ATdebug] = ACTIONS(45),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_variable_identifier] = ACTIONS(63),
    [sym_at_keyword] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_mixin_statement] = STATE(10),
    [sym_include_statement] = STATE(10),
    [sym_extend_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_if_clause] = STATE(16),
    [sym_each_statement] = STATE(10),
    [sym_for_statement] = STATE(10),
    [sym_while_statement] = STATE(10),
    [sym_function_statement] = STATE(10),
    [sym_return_statement] = STATE(10),
    [sym_at_root_statement] = STATE(10),
    [sym_error_statement] = STATE(10),
    [sym_warn_statement] = STATE(10),
    [sym_debug_statement] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(431),
    [sym__selector] = STATE(275),
    [sym_universal_selector] = STATE(275),
    [sym_class_selector] = STATE(275),
    [sym_pseudo_class_selector] = STATE(275),
    [sym_pseudo_element_selector] = STATE(275),
    [sym_id_selector] = STATE(275),
    [sym_attribute_selector] = STATE(275),
    [sym_child_selector] = STATE(275),
    [sym_descendant_selector] = STATE(275),
    [sym_sibling_selector] = STATE(275),
    [sym_adjacent_sibling_selector] = STATE(275),
    [sym_declaration] = STATE(10),
    [sym_last_declaration] = STATE(457),
    [aux_sym_block_repeat1] = STATE(10),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(107),
    [sym_variable_identifier] = ACTIONS(109),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_import_statement] = STATE(12),
    [sym_media_statement] = STATE(12),
    [sym_charset_statement] = STATE(12),
    [sym_namespace_statement] = STATE(12),
    [sym_keyframes_statement] = STATE(12),
    [sym_supports_statement] = STATE(12),
    [sym_at_rule] = STATE(12),
    [sym_mixin_statement] = STATE(12),
    [sym_include_statement] = STATE(12),
    [sym_extend_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_if_clause] = STATE(16),
    [sym_each_statement] = STATE(12),
    [sym_for_statement] = STATE(12),
    [sym_while_statement] = STATE(12),
    [sym_function_statement] = STATE(12),
    [sym_return_statement] = STATE(12),
    [sym_at_root_statement] = STATE(12),
    [sym_error_statement] = STATE(12),
    [sym_warn_statement] = STATE(12),
    [sym_debug_statement] = STATE(12),
    [sym_rule_set] = STATE(12),
    [sym_selectors] = STATE(431),
    [sym__selector] = STATE(275),
    [sym_universal_selector] = STATE(275),
    [sym_class_selector] = STATE(275),
    [sym_pseudo_class_selector] = STATE(275),
    [sym_pseudo_element_selector] = STATE(275),
    [sym_id_selector] = STATE(275),
    [sym_attribute_selector] = STATE(275),
    [sym_child_selector] = STATE(275),
    [sym_descendant_selector] = STATE(275),
    [sym_sibling_selector] = STATE(275),
    [sym_adjacent_sibling_selector] = STATE(275),
    [sym_declaration] = STATE(12),
    [sym_last_declaration] = STATE(468),
    [aux_sym_block_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(107),
    [sym_variable_identifier] = ACTIONS(109),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_import_statement] = STATE(3),
    [sym_media_statement] = STATE(3),
    [sym_charset_statement] = STATE(3),
    [sym_namespace_statement] = STATE(3),
    [sym_keyframes_statement] = STATE(3),
    [sym_supports_statement] = STATE(3),
    [sym_at_rule] = STATE(3),
    [sym_mixin_statement] = STATE(3),
    [sym_include_statement] = STATE(3),
    [sym_extend_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_if_clause] = STATE(16),
    [sym_each_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_while_statement] = STATE(3),
    [sym_function_statement] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym_at_root_statement] = STATE(3),
    [sym_error_statement] = STATE(3),
    [sym_warn_statement] = STATE(3),
    [sym_debug_statement] = STATE(3),
    [sym_rule_set] = STATE(3),
    [sym_selectors] = STATE(431),
    [sym__selector] = STATE(275),
    [sym_universal_selector] = STATE(275),
    [sym_class_selector] = STATE(275),
    [sym_pseudo_class_selector] = STATE(275),
    [sym_pseudo_element_selector] = STATE(275),
    [sym_id_selector] = STATE(275),
    [sym_attribute_selector] = STATE(275),
    [sym_child_selector] = STATE(275),
    [sym_descendant_selector] = STATE(275),
    [sym_sibling_selector] = STATE(275),
    [sym_adjacent_sibling_selector] = STATE(275),
    [sym_declaration] = STATE(3),
    [sym_last_declaration] = STATE(466),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(107),
    [sym_variable_identifier] = ACTIONS(109),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_import_statement] = STATE(12),
    [sym_media_statement] = STATE(12),
    [sym_charset_statement] = STATE(12),
    [sym_namespace_statement] = STATE(12),
    [sym_keyframes_statement] = STATE(12),
    [sym_supports_statement] = STATE(12),
    [sym_at_rule] = STATE(12),
    [sym_mixin_statement] = STATE(12),
    [sym_include_statement] = STATE(12),
    [sym_extend_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_if_clause] = STATE(16),
    [sym_each_statement] = STATE(12),
    [sym_for_statement] = STATE(12),
    [sym_while_statement] = STATE(12),
    [sym_function_statement] = STATE(12),
    [sym_return_statement] = STATE(12),
    [sym_at_root_statement] = STATE(12),
    [sym_error_statement] = STATE(12),
    [sym_warn_statement] = STATE(12),
    [sym_debug_statement] = STATE(12),
    [sym_rule_set] = STATE(12),
    [sym_selectors] = STATE(431),
    [sym__selector] = STATE(275),
    [sym_universal_selector] = STATE(275),
    [sym_class_selector] = STATE(275),
    [sym_pseudo_class_selector] = STATE(275),
    [sym_pseudo_element_selector] = STATE(275),
    [sym_id_selector] = STATE(275),
    [sym_attribute_selector] = STATE(275),
    [sym_child_selector] = STATE(275),
    [sym_descendant_selector] = STATE(275),
    [sym_sibling_selector] = STATE(275),
    [sym_adjacent_sibling_selector] = STATE(275),
    [sym_declaration] = STATE(12),
    [sym_last_declaration] = STATE(463),
    [aux_sym_block_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(107),
    [sym_variable_identifier] = ACTIONS(109),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_import_statement] = STATE(5),
    [sym_media_statement] = STATE(5),
    [sym_charset_statement] = STATE(5),
    [sym_namespace_statement] = STATE(5),
    [sym_keyframes_statement] = STATE(5),
    [sym_supports_statement] = STATE(5),
    [sym_at_rule] = STATE(5),
    [sym_mixin_statement] = STATE(5),
    [sym_include_statement] = STATE(5),
    [sym_extend_statement] = STATE(5),
    [sym_if_statement] = STATE(5),
    [sym_if_clause] = STATE(16),
    [sym_each_statement] = STATE(5),
    [sym_for_statement] = STATE(5),
    [sym_while_statement] = STATE(5),
    [sym_function_statement] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym_at_root_statement] = STATE(5),
    [sym_error_statement] = STATE(5),
    [sym_warn_statement] = STATE(5),
    [sym_debug_statement] = STATE(5),
    [sym_rule_set] = STATE(5),
    [sym_selectors] = STATE(431),
    [sym__selector] = STATE(275),
    [sym_universal_selector] = STATE(275),
    [sym_class_selector] = STATE(275),
    [sym_pseudo_class_selector] = STATE(275),
    [sym_pseudo_element_selector] = STATE(275),
    [sym_id_selector] = STATE(275),
    [sym_attribute_selector] = STATE(275),
    [sym_child_selector] = STATE(275),
    [sym_descendant_selector] = STATE(275),
    [sym_sibling_selector] = STATE(275),
    [sym_adjacent_sibling_selector] = STATE(275),
    [sym_declaration] = STATE(5),
    [sym_last_declaration] = STATE(460),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(107),
    [sym_variable_identifier] = ACTIONS(109),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_import_statement] = STATE(12),
    [sym_media_statement] = STATE(12),
    [sym_charset_statement] = STATE(12),
    [sym_namespace_statement] = STATE(12),
    [sym_keyframes_statement] = STATE(12),
    [sym_supports_statement] = STATE(12),
    [sym_at_rule] = STATE(12),
    [sym_mixin_statement] = STATE(12),
    [sym_include_statement] = STATE(12),
    [sym_extend_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_if_clause] = STATE(16),
    [sym_each_statement] = STATE(12),
    [sym_for_statement] = STATE(12),
    [sym_while_statement] = STATE(12),
    [sym_function_statement] = STATE(12),
    [sym_return_statement] = STATE(12),
    [sym_at_root_statement] = STATE(12),
    [sym_error_statement] = STATE(12),
    [sym_warn_statement] = STATE(12),
    [sym_debug_statement] = STATE(12),
    [sym_rule_set] = STATE(12),
    [sym_selectors] = STATE(431),
    [sym__selector] = STATE(275),
    [sym_universal_selector] = STATE(275),
    [sym_class_selector] = STATE(275),
    [sym_pseudo_class_selector] = STATE(275),
    [sym_pseudo_element_selector] = STATE(275),
    [sym_id_selector] = STATE(275),
    [sym_attribute_selector] = STATE(275),
    [sym_child_selector] = STATE(275),
    [sym_descendant_selector] = STATE(275),
    [sym_sibling_selector] = STATE(275),
    [sym_adjacent_sibling_selector] = STATE(275),
    [sym_declaration] = STATE(12),
    [sym_last_declaration] = STATE(454),
    [aux_sym_block_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(107),
    [sym_variable_identifier] = ACTIONS(109),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_import_statement] = STATE(7),
    [sym_media_statement] = STATE(7),
    [sym_charset_statement] = STATE(7),
    [sym_namespace_statement] = STATE(7),
    [sym_keyframes_statement] = STATE(7),
    [sym_supports_statement] = STATE(7),
    [sym_at_rule] = STATE(7),
    [sym_mixin_statement] = STATE(7),
    [sym_include_statement] = STATE(7),
    [sym_extend_statement] = STATE(7),
    [sym_if_statement] = STATE(7),
    [sym_if_clause] = STATE(16),
    [sym_each_statement] = STATE(7),
    [sym_for_statement] = STATE(7),
    [sym_while_statement] = STATE(7),
    [sym_function_statement] = STATE(7),
    [sym_return_statement] = STATE(7),
    [sym_at_root_statement] = STATE(7),
    [sym_error_statement] = STATE(7),
    [sym_warn_statement] = STATE(7),
    [sym_debug_statement] = STATE(7),
    [sym_rule_set] = STATE(7),
    [sym_selectors] = STATE(431),
    [sym__selector] = STATE(275),
    [sym_universal_selector] = STATE(275),
    [sym_class_selector] = STATE(275),
    [sym_pseudo_class_selector] = STATE(275),
    [sym_pseudo_element_selector] = STATE(275),
    [sym_id_selector] = STATE(275),
    [sym_attribute_selector] = STATE(275),
    [sym_child_selector] = STATE(275),
    [sym_descendant_selector] = STATE(275),
    [sym_sibling_selector] = STATE(275),
    [sym_adjacent_sibling_selector] = STATE(275),
    [sym_declaration] = STATE(7),
    [sym_last_declaration] = STATE(451),
    [aux_sym_block_repeat1] = STATE(7),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(107),
    [sym_variable_identifier] = ACTIONS(109),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_import_statement] = STATE(12),
    [sym_media_statement] = STATE(12),
    [sym_charset_statement] = STATE(12),
    [sym_namespace_statement] = STATE(12),
    [sym_keyframes_statement] = STATE(12),
    [sym_supports_statement] = STATE(12),
    [sym_at_rule] = STATE(12),
    [sym_mixin_statement] = STATE(12),
    [sym_include_statement] = STATE(12),
    [sym_extend_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_if_clause] = STATE(16),
    [sym_each_statement] = STATE(12),
    [sym_for_statement] = STATE(12),
    [sym_while_statement] = STATE(12),
    [sym_function_statement] = STATE(12),
    [sym_return_statement] = STATE(12),
    [sym_at_root_statement] = STATE(12),
    [sym_error_statement] = STATE(12),
    [sym_warn_statement] = STATE(12),
    [sym_debug_statement] = STATE(12),
    [sym_rule_set] = STATE(12),
    [sym_selectors] = STATE(431),
    [sym__selector] = STATE(275),
    [sym_universal_selector] = STATE(275),
    [sym_class_selector] = STATE(275),
    [sym_pseudo_class_selector] = STATE(275),
    [sym_pseudo_element_selector] = STATE(275),
    [sym_id_selector] = STATE(275),
    [sym_attribute_selector] = STATE(275),
    [sym_child_selector] = STATE(275),
    [sym_descendant_selector] = STATE(275),
    [sym_sibling_selector] = STATE(275),
    [sym_adjacent_sibling_selector] = STATE(275),
    [sym_declaration] = STATE(12),
    [sym_last_declaration] = STATE(442),
    [aux_sym_block_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(107),
    [sym_variable_identifier] = ACTIONS(109),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_import_statement] = STATE(12),
    [sym_media_statement] = STATE(12),
    [sym_charset_statement] = STATE(12),
    [sym_namespace_statement] = STATE(12),
    [sym_keyframes_statement] = STATE(12),
    [sym_supports_statement] = STATE(12),
    [sym_at_rule] = STATE(12),
    [sym_mixin_statement] = STATE(12),
    [sym_include_statement] = STATE(12),
    [sym_extend_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_if_clause] = STATE(16),
    [sym_each_statement] = STATE(12),
    [sym_for_statement] = STATE(12),
    [sym_while_statement] = STATE(12),
    [sym_function_statement] = STATE(12),
    [sym_return_statement] = STATE(12),
    [sym_at_root_statement] = STATE(12),
    [sym_error_statement] = STATE(12),
    [sym_warn_statement] = STATE(12),
    [sym_debug_statement] = STATE(12),
    [sym_rule_set] = STATE(12),
    [sym_selectors] = STATE(431),
    [sym__selector] = STATE(275),
    [sym_universal_selector] = STATE(275),
    [sym_class_selector] = STATE(275),
    [sym_pseudo_class_selector] = STATE(275),
    [sym_pseudo_element_selector] = STATE(275),
    [sym_id_selector] = STATE(275),
    [sym_attribute_selector] = STATE(275),
    [sym_child_selector] = STATE(275),
    [sym_descendant_selector] = STATE(275),
    [sym_sibling_selector] = STATE(275),
    [sym_adjacent_sibling_selector] = STATE(275),
    [sym_declaration] = STATE(12),
    [sym_last_declaration] = STATE(486),
    [aux_sym_block_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(107),
    [sym_variable_identifier] = ACTIONS(109),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_import_statement] = STATE(9),
    [sym_media_statement] = STATE(9),
    [sym_charset_statement] = STATE(9),
    [sym_namespace_statement] = STATE(9),
    [sym_keyframes_statement] = STATE(9),
    [sym_supports_statement] = STATE(9),
    [sym_at_rule] = STATE(9),
    [sym_mixin_statement] = STATE(9),
    [sym_include_statement] = STATE(9),
    [sym_extend_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_if_clause] = STATE(16),
    [sym_each_statement] = STATE(9),
    [sym_for_statement] = STATE(9),
    [sym_while_statement] = STATE(9),
    [sym_function_statement] = STATE(9),
    [sym_return_statement] = STATE(9),
    [sym_at_root_statement] = STATE(9),
    [sym_error_statement] = STATE(9),
    [sym_warn_statement] = STATE(9),
    [sym_debug_statement] = STATE(9),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(431),
    [sym__selector] = STATE(275),
    [sym_universal_selector] = STATE(275),
    [sym_class_selector] = STATE(275),
    [sym_pseudo_class_selector] = STATE(275),
    [sym_pseudo_element_selector] = STATE(275),
    [sym_id_selector] = STATE(275),
    [sym_attribute_selector] = STATE(275),
    [sym_child_selector] = STATE(275),
    [sym_descendant_selector] = STATE(275),
    [sym_sibling_selector] = STATE(275),
    [sym_adjacent_sibling_selector] = STATE(275),
    [sym_declaration] = STATE(9),
    [sym_last_declaration] = STATE(441),
    [aux_sym_block_repeat1] = STATE(9),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(107),
    [sym_variable_identifier] = ACTIONS(109),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_import_statement] = STATE(12),
    [sym_media_statement] = STATE(12),
    [sym_charset_statement] = STATE(12),
    [sym_namespace_statement] = STATE(12),
    [sym_keyframes_statement] = STATE(12),
    [sym_supports_statement] = STATE(12),
    [sym_at_rule] = STATE(12),
    [sym_mixin_statement] = STATE(12),
    [sym_include_statement] = STATE(12),
    [sym_extend_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_if_clause] = STATE(16),
    [sym_each_statement] = STATE(12),
    [sym_for_statement] = STATE(12),
    [sym_while_statement] = STATE(12),
    [sym_function_statement] = STATE(12),
    [sym_return_statement] = STATE(12),
    [sym_at_root_statement] = STATE(12),
    [sym_error_statement] = STATE(12),
    [sym_warn_statement] = STATE(12),
    [sym_debug_statement] = STATE(12),
    [sym_rule_set] = STATE(12),
    [sym_selectors] = STATE(431),
    [sym__selector] = STATE(275),
    [sym_universal_selector] = STATE(275),
    [sym_class_selector] = STATE(275),
    [sym_pseudo_class_selector] = STATE(275),
    [sym_pseudo_element_selector] = STATE(275),
    [sym_id_selector] = STATE(275),
    [sym_attribute_selector] = STATE(275),
    [sym_child_selector] = STATE(275),
    [sym_descendant_selector] = STATE(275),
    [sym_sibling_selector] = STATE(275),
    [sym_adjacent_sibling_selector] = STATE(275),
    [sym_declaration] = STATE(12),
    [aux_sym_block_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(131),
    [anon_sym_ATmedia] = ACTIONS(134),
    [anon_sym_ATcharset] = ACTIONS(137),
    [anon_sym_ATnamespace] = ACTIONS(140),
    [anon_sym_ATkeyframes] = ACTIONS(143),
    [aux_sym_keyframes_statement_token1] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(146),
    [anon_sym_ATsupports] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_ATmixin] = ACTIONS(154),
    [anon_sym_ATinclude] = ACTIONS(157),
    [anon_sym_ATextend] = ACTIONS(160),
    [anon_sym_ATif] = ACTIONS(163),
    [anon_sym_ATeach] = ACTIONS(166),
    [anon_sym_ATfor] = ACTIONS(169),
    [anon_sym_ATwhile] = ACTIONS(172),
    [anon_sym_ATfunction] = ACTIONS(175),
    [anon_sym_ATreturn] = ACTIONS(178),
    [anon_sym_ATat_DASHroot] = ACTIONS(181),
    [anon_sym_ATerror] = ACTIONS(184),
    [anon_sym_ATwarn] = ACTIONS(187),
    [anon_sym_ATdebug] = ACTIONS(190),
    [sym_nesting_selector] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_DOT] = ACTIONS(199),
    [anon_sym_COLON_COLON] = ACTIONS(202),
    [anon_sym_POUND] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_string_value] = ACTIONS(211),
    [sym_identifier] = ACTIONS(214),
    [sym_variable_identifier] = ACTIONS(217),
    [sym_at_keyword] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_import_statement] = STATE(14),
    [sym_media_statement] = STATE(14),
    [sym_charset_statement] = STATE(14),
    [sym_namespace_statement] = STATE(14),
    [sym_keyframes_statement] = STATE(14),
    [sym_supports_statement] = STATE(14),
    [sym_at_rule] = STATE(14),
    [sym_use_statement] = STATE(14),
    [sym_forward_statement] = STATE(14),
    [sym_mixin_statement] = STATE(14),
    [sym_include_statement] = STATE(14),
    [sym_placeholder] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym_function_statement] = STATE(14),
    [sym_error_statement] = STATE(14),
    [sym_warn_statement] = STATE(14),
    [sym_debug_statement] = STATE(14),
    [sym_rule_set] = STATE(14),
    [sym_selectors] = STATE(430),
    [sym__selector] = STATE(275),
    [sym_universal_selector] = STATE(275),
    [sym_class_selector] = STATE(275),
    [sym_pseudo_class_selector] = STATE(275),
    [sym_pseudo_element_selector] = STATE(275),
    [sym_id_selector] = STATE(275),
    [sym_attribute_selector] = STATE(275),
    [sym_child_selector] = STATE(275),
    [sym_descendant_selector] = STATE(275),
    [sym_sibling_selector] = STATE(275),
    [sym_adjacent_sibling_selector] = STATE(275),
    [sym_declaration] = STATE(14),
    [aux_sym_stylesheet_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [anon_sym_ATuse] = ACTIONS(19),
    [anon_sym_ATforward] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(25),
    [anon_sym_ATinclude] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_ATif] = ACTIONS(31),
    [anon_sym_ATeach] = ACTIONS(33),
    [anon_sym_ATfor] = ACTIONS(35),
    [anon_sym_ATwhile] = ACTIONS(37),
    [anon_sym_ATfunction] = ACTIONS(39),
    [anon_sym_ATerror] = ACTIONS(41),
    [anon_sym_ATwarn] = ACTIONS(43),
    [anon_sym_ATdebug] = ACTIONS(45),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_variable_identifier] = ACTIONS(63),
    [sym_at_keyword] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_import_statement] = STATE(14),
    [sym_media_statement] = STATE(14),
    [sym_charset_statement] = STATE(14),
    [sym_namespace_statement] = STATE(14),
    [sym_keyframes_statement] = STATE(14),
    [sym_supports_statement] = STATE(14),
    [sym_at_rule] = STATE(14),
    [sym_use_statement] = STATE(14),
    [sym_forward_statement] = STATE(14),
    [sym_mixin_statement] = STATE(14),
    [sym_include_statement] = STATE(14),
    [sym_placeholder] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym_function_statement] = STATE(14),
    [sym_error_statement] = STATE(14),
    [sym_warn_statement] = STATE(14),
    [sym_debug_statement] = STATE(14),
    [sym_rule_set] = STATE(14),
    [sym_selectors] = STATE(430),
    [sym__selector] = STATE(275),
    [sym_universal_selector] = STATE(275),
    [sym_class_selector] = STATE(275),
    [sym_pseudo_class_selector] = STATE(275),
    [sym_pseudo_element_selector] = STATE(275),
    [sym_id_selector] = STATE(275),
    [sym_attribute_selector] = STATE(275),
    [sym_child_selector] = STATE(275),
    [sym_descendant_selector] = STATE(275),
    [sym_sibling_selector] = STATE(275),
    [sym_adjacent_sibling_selector] = STATE(275),
    [sym_declaration] = STATE(14),
    [aux_sym_stylesheet_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_ATimport] = ACTIONS(227),
    [anon_sym_ATmedia] = ACTIONS(230),
    [anon_sym_ATcharset] = ACTIONS(233),
    [anon_sym_ATnamespace] = ACTIONS(236),
    [anon_sym_ATkeyframes] = ACTIONS(239),
    [aux_sym_keyframes_statement_token1] = ACTIONS(239),
    [anon_sym_ATsupports] = ACTIONS(242),
    [anon_sym_ATuse] = ACTIONS(245),
    [anon_sym_ATforward] = ACTIONS(248),
    [anon_sym_COLON] = ACTIONS(251),
    [anon_sym_ATmixin] = ACTIONS(254),
    [anon_sym_ATinclude] = ACTIONS(257),
    [anon_sym_PERCENT] = ACTIONS(260),
    [anon_sym_ATif] = ACTIONS(263),
    [anon_sym_ATeach] = ACTIONS(266),
    [anon_sym_ATfor] = ACTIONS(269),
    [anon_sym_ATwhile] = ACTIONS(272),
    [anon_sym_ATfunction] = ACTIONS(275),
    [anon_sym_ATerror] = ACTIONS(278),
    [anon_sym_ATwarn] = ACTIONS(281),
    [anon_sym_ATdebug] = ACTIONS(284),
    [sym_nesting_selector] = ACTIONS(287),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_DOT] = ACTIONS(293),
    [anon_sym_COLON_COLON] = ACTIONS(296),
    [anon_sym_POUND] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(302),
    [sym_string_value] = ACTIONS(305),
    [sym_identifier] = ACTIONS(308),
    [sym_variable_identifier] = ACTIONS(311),
    [sym_at_keyword] = ACTIONS(314),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(321), 1,
      anon_sym_ATelse,
    STATE(78), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(18), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(317), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(319), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [51] = 6,
    ACTIONS(323), 1,
      anon_sym_ATelse,
    STATE(104), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(17), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(317), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(319), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [102] = 6,
    ACTIONS(323), 1,
      anon_sym_ATelse,
    STATE(72), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(19), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(327), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(325), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [153] = 6,
    ACTIONS(321), 1,
      anon_sym_ATelse,
    STATE(43), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(20), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(325), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [204] = 5,
    ACTIONS(333), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(19), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(331), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(329), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [252] = 5,
    ACTIONS(336), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(20), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(331), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(329), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [300] = 20,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(345), 1,
      anon_sym_POUND,
    ACTIONS(347), 1,
      sym_string_value,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    STATE(148), 1,
      sym__value,
    STATE(161), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(282), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [377] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(359), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(361), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [419] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(365), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(363), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [461] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(369), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(367), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [503] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(359), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(361), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [545] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(371), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(373), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [587] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(371), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(373), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [629] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(377), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(375), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [671] = 19,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(345), 1,
      anon_sym_POUND,
    ACTIONS(347), 1,
      sym_string_value,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    STATE(148), 1,
      sym__value,
    STATE(169), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(311), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [745] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(365), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(363), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [787] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(369), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(367), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [829] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(377), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(375), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [871] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(381), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(379), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [912] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(385), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(383), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [953] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(387), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(389), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [994] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(369), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(367), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1035] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(369), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(367), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1076] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(391), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(393), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1117] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(359), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(361), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1158] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(395), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(397), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1199] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(399), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(401), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1240] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(403), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(405), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1281] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(407), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(409), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1322] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(411), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(413), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1363] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(415), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(417), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1404] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(419), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(421), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1445] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(423), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(425), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1486] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(427), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(429), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1527] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(433), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(431), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1568] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(437), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(435), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1609] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(441), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(439), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1650] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(445), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(443), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1691] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(449), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(447), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1732] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(427), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(429), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1773] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(415), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(417), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1814] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(403), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(405), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1855] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(399), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(401), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1896] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(395), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(397), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1937] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(391), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(393), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1978] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(453), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(451), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2019] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(457), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(455), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2060] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(461), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(459), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2101] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(465), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(463), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2142] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(385), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(383), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2183] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(469), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(467), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2224] = 19,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(473), 1,
      anon_sym_POUND,
    ACTIONS(475), 1,
      sym_string_value,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    STATE(326), 1,
      sym_class_selector,
    STATE(327), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(350), 10,
      sym__selector,
      sym_universal_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [2297] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(489), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(487), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2338] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(387), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(389), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2379] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(493), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(491), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2420] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(497), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(495), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2461] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(493), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(491), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2502] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(407), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(409), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2543] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(411), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(413), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2584] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(499), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(501), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2625] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(489), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(487), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2666] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(423), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(425), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2707] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(381), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(379), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2748] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(325), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2789] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(461), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(459), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2830] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(503), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(505), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2871] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(359), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(361), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2912] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(507), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(509), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2953] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(365), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(363), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2994] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(419), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(421), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3035] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(507), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(509), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3076] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(513), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(511), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3117] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(517), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(515), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3158] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(513), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(511), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3199] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(521), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(519), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3240] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(365), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(363), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3281] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(517), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(515), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3322] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(457), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(455), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3363] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(525), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(523), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3404] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(529), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(527), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3445] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(533), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(531), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3486] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(537), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(535), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3527] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(539), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(541), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3568] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(545), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(543), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3609] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(549), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(547), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3650] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(553), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(551), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3691] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(539), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(541), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3732] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(503), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(505), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3773] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(453), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(451), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3814] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(327), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(325), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3855] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(553), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(551), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3896] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(499), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(501), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3937] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(549), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(547), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3978] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(545), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(543), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4019] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(497), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(495), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4060] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(437), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(435), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4101] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(537), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(535), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4142] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(533), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(531), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4183] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(555), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(557), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4224] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(559), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(561), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4265] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(465), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(463), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4306] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(441), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(439), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4347] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(445), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(443), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4388] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(529), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(527), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4429] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(525), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(523), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4470] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(563), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(565), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4511] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(449), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(447), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4552] = 18,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      anon_sym_SEMI,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(579), 1,
      sym_important,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(144), 1,
      sym__value,
    STATE(149), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(573), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(577), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4621] = 7,
    ACTIONS(591), 1,
      anon_sym_LPAREN2,
    STATE(138), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(589), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(593), 6,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(585), 7,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(587), 9,
      anon_sym_LPAREN,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4667] = 17,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(595), 1,
      anon_sym_SEMI,
    ACTIONS(597), 1,
      sym_important,
    STATE(144), 1,
      sym__value,
    STATE(164), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(573), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(577), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4733] = 17,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      anon_sym_SEMI,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(599), 1,
      sym_important,
    STATE(144), 1,
      sym__value,
    STATE(165), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(573), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(577), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4799] = 17,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_SEMI,
    ACTIONS(603), 1,
      sym_important,
    STATE(144), 1,
      sym__value,
    STATE(167), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(573), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(577), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4865] = 17,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_SEMI,
    ACTIONS(607), 1,
      sym_important,
    STATE(144), 1,
      sym__value,
    STATE(168), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(573), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(577), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4931] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(613), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(609), 7,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(611), 7,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(615), 8,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4971] = 5,
    ACTIONS(591), 1,
      anon_sym_LPAREN2,
    STATE(138), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(593), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(587), 12,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5009] = 4,
    ACTIONS(621), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(619), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(617), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5044] = 4,
    ACTIONS(627), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(625), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(623), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5079] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(615), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(611), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5111] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(631), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(629), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5143] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(635), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(633), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5175] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(639), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(637), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5207] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(643), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(641), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5239] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(647), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(645), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5271] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(651), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(649), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5303] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(655), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(653), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5335] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(659), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(657), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5367] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(663), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(661), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5399] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(667), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(665), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5431] = 9,
    ACTIONS(669), 1,
      anon_sym_SEMI,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      anon_sym_selector,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(677), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(675), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(673), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(376), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5474] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(573), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(577), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(683), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(685), 6,
      anon_sym_POUND,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5509] = 9,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      anon_sym_selector,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(677), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(675), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(673), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(370), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5552] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(573), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(577), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(689), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(691), 6,
      anon_sym_POUND,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5587] = 7,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    STATE(196), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(587), 2,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(589), 2,
      anon_sym_COLON,
      anon_sym_GT,
    ACTIONS(593), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(585), 8,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5625] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(573), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(577), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(695), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
    ACTIONS(697), 6,
      anon_sym_POUND,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5659] = 16,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(699), 1,
      anon_sym_SEMI,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
    ACTIONS(703), 1,
      sym_important,
    STATE(144), 1,
      sym__value,
    STATE(151), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5714] = 15,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym__value,
    STATE(163), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(378), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5767] = 14,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
    ACTIONS(715), 1,
      anon_sym_POUND,
    ACTIONS(718), 1,
      sym_string_value,
    ACTIONS(721), 1,
      aux_sym_integer_value_token1,
    ACTIONS(724), 1,
      aux_sym_float_value_token1,
    ACTIONS(727), 1,
      sym_identifier,
    ACTIONS(730), 1,
      sym_variable_identifier,
    ACTIONS(733), 1,
      sym_plain_value,
    STATE(144), 1,
      sym__value,
    STATE(151), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(689), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5818] = 15,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym__value,
    STATE(163), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(390), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5871] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(738), 1,
      sym_string_value,
    ACTIONS(740), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(284), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [5916] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(740), 1,
      sym_identifier,
    ACTIONS(742), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(341), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [5961] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(740), 1,
      sym_identifier,
    ACTIONS(744), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(308), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [6006] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(740), 1,
      sym_identifier,
    ACTIONS(746), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(272), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [6051] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(740), 1,
      sym_identifier,
    ACTIONS(748), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(271), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [6096] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(740), 1,
      sym_identifier,
    ACTIONS(750), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(264), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [6141] = 15,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym__value,
    STATE(163), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(385), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6194] = 15,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym__value,
    STATE(163), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(393), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6247] = 15,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym__value,
    STATE(163), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(407), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6299] = 13,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(148), 1,
      sym__value,
    STATE(163), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(760), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6347] = 13,
    ACTIONS(764), 1,
      anon_sym_LPAREN,
    ACTIONS(767), 1,
      anon_sym_POUND,
    ACTIONS(770), 1,
      sym_string_value,
    ACTIONS(773), 1,
      aux_sym_integer_value_token1,
    ACTIONS(776), 1,
      aux_sym_float_value_token1,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(782), 1,
      sym_variable_identifier,
    ACTIONS(785), 1,
      sym_plain_value,
    STATE(148), 1,
      sym__value,
    STATE(163), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(762), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6395] = 15,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(788), 1,
      anon_sym_SEMI,
    ACTIONS(790), 1,
      sym_important,
    STATE(144), 1,
      sym__value,
    STATE(151), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6447] = 15,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(699), 1,
      anon_sym_SEMI,
    ACTIONS(792), 1,
      sym_important,
    STATE(144), 1,
      sym__value,
    STATE(151), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6499] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(613), 2,
      anon_sym_COLON,
      anon_sym_GT,
    ACTIONS(615), 2,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(611), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(609), 8,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [6531] = 15,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_SEMI,
    ACTIONS(796), 1,
      sym_important,
    STATE(144), 1,
      sym__value,
    STATE(151), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6583] = 15,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    ACTIONS(800), 1,
      sym_important,
    STATE(144), 1,
      sym__value,
    STATE(151), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6635] = 13,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(148), 1,
      sym__value,
    STATE(163), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(802), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6682] = 5,
    ACTIONS(804), 1,
      anon_sym_LPAREN2,
    STATE(195), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(593), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(587), 9,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6713] = 5,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    STATE(196), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(587), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(593), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6744] = 4,
    ACTIONS(806), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(623), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(625), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6772] = 13,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym__value,
    STATE(150), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6818] = 4,
    ACTIONS(810), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(617), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(619), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6846] = 13,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym__value,
    STATE(160), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6892] = 13,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym__value,
    STATE(152), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6938] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(659), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(657), 9,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6964] = 13,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym__value,
    STATE(163), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7010] = 13,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym__value,
    STATE(159), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7056] = 12,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(309), 1,
      sym__value,
    STATE(415), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(300), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7099] = 12,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(148), 1,
      sym__value,
    STATE(162), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7142] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(611), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(615), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7167] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(665), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(667), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7192] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(645), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(647), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7217] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(641), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(643), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7242] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(637), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(639), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7267] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(631), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(629), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7292] = 12,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(148), 1,
      sym__value,
    STATE(178), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7335] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(635), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(633), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7360] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(639), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(637), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7385] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(643), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(641), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7410] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(647), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(645), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7435] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(661), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(663), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7460] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(653), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(655), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7485] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(649), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(651), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7510] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(651), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(649), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7535] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(655), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(653), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7560] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(659), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(657), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7585] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(663), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(661), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7610] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(667), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(665), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7635] = 4,
    ACTIONS(836), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(625), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(623), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7662] = 4,
    ACTIONS(838), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(619), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(617), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7689] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(615), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(611), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7714] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(633), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(635), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7739] = 12,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(309), 1,
      sym__value,
    STATE(438), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(300), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7782] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(629), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(631), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7807] = 11,
    ACTIONS(840), 1,
      anon_sym_LPAREN,
    ACTIONS(842), 1,
      anon_sym_POUND,
    ACTIONS(844), 1,
      sym_string_value,
    ACTIONS(846), 1,
      aux_sym_integer_value_token1,
    ACTIONS(848), 1,
      aux_sym_float_value_token1,
    ACTIONS(850), 1,
      sym_identifier,
    ACTIONS(852), 1,
      sym_variable_identifier,
    ACTIONS(854), 1,
      sym_plain_value,
    STATE(145), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(182), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7847] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(321), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7887] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    ACTIONS(862), 1,
      aux_sym_integer_value_token1,
    ACTIONS(864), 1,
      aux_sym_float_value_token1,
    STATE(323), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7927] = 11,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(126), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7967] = 11,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(127), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8007] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(343), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8047] = 11,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(146), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8087] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(342), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8127] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(319), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8167] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(290), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8207] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(289), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8247] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(298), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8287] = 11,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(124), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8327] = 5,
    ACTIONS(868), 1,
      anon_sym_COLON,
    ACTIONS(870), 1,
      anon_sym_LPAREN2,
    STATE(262), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(866), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8355] = 11,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(122), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8395] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(318), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8435] = 11,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(125), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8475] = 5,
    ACTIONS(870), 1,
      anon_sym_LPAREN2,
    ACTIONS(874), 1,
      anon_sym_COLON,
    STATE(273), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(872), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8503] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(332), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8543] = 11,
    ACTIONS(840), 1,
      anon_sym_LPAREN,
    ACTIONS(842), 1,
      anon_sym_POUND,
    ACTIONS(844), 1,
      sym_string_value,
    ACTIONS(846), 1,
      aux_sym_integer_value_token1,
    ACTIONS(848), 1,
      aux_sym_float_value_token1,
    ACTIONS(850), 1,
      sym_identifier,
    ACTIONS(852), 1,
      sym_variable_identifier,
    ACTIONS(854), 1,
      sym_plain_value,
    STATE(186), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(182), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8583] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(331), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8623] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(340), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8663] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(336), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8703] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(190), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8743] = 11,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_integer_value_token1,
    ACTIONS(351), 1,
      aux_sym_float_value_token1,
    ACTIONS(355), 1,
      sym_variable_identifier,
    ACTIONS(357), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(135), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(132), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8783] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(330), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8823] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    ACTIONS(876), 1,
      sym_variable_identifier,
    STATE(303), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(300), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8863] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    ACTIONS(862), 1,
      aux_sym_integer_value_token1,
    ACTIONS(864), 1,
      aux_sym_float_value_token1,
    STATE(190), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8903] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(329), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8943] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(315), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8983] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(313), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9023] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(328), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9063] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(333), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9103] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    ACTIONS(862), 1,
      aux_sym_integer_value_token1,
    ACTIONS(864), 1,
      aux_sym_float_value_token1,
    STATE(322), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9143] = 11,
    ACTIONS(840), 1,
      anon_sym_LPAREN,
    ACTIONS(842), 1,
      anon_sym_POUND,
    ACTIONS(844), 1,
      sym_string_value,
    ACTIONS(846), 1,
      aux_sym_integer_value_token1,
    ACTIONS(848), 1,
      aux_sym_float_value_token1,
    ACTIONS(850), 1,
      sym_identifier,
    ACTIONS(852), 1,
      sym_variable_identifier,
    ACTIONS(854), 1,
      sym_plain_value,
    STATE(143), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(182), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9183] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(307), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9223] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(348), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9263] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(346), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9303] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(345), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9343] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    ACTIONS(876), 1,
      sym_variable_identifier,
    STATE(306), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(300), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9383] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(334), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9423] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(320), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9463] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(296), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9503] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(337), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9543] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(291), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9583] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(312), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9623] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(316), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9663] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(286), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9703] = 11,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      aux_sym_integer_value_token1,
    ACTIONS(479), 1,
      aux_sym_float_value_token1,
    ACTIONS(483), 1,
      sym_variable_identifier,
    ACTIONS(485), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(314), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(203), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9743] = 3,
    ACTIONS(880), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(878), 13,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9766] = 3,
    ACTIONS(884), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(882), 13,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9789] = 9,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      anon_sym_selector,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(886), 1,
      anon_sym_SEMI,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(677), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(356), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9824] = 5,
    ACTIONS(890), 1,
      anon_sym_LPAREN2,
    STATE(305), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(587), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(593), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9851] = 9,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      anon_sym_selector,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(892), 1,
      anon_sym_SEMI,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(677), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(358), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9886] = 4,
    ACTIONS(896), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(613), 2,
      anon_sym_COLON,
      anon_sym_POUND,
    ACTIONS(609), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9911] = 3,
    ACTIONS(900), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(898), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9933] = 3,
    ACTIONS(904), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(902), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9955] = 4,
    ACTIONS(908), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(910), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(906), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9979] = 3,
    ACTIONS(914), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(912), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10001] = 3,
    ACTIONS(918), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(916), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10023] = 3,
    ACTIONS(922), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(920), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10045] = 3,
    ACTIONS(926), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(924), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10067] = 3,
    ACTIONS(930), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(928), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10089] = 3,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(585), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10111] = 4,
    ACTIONS(934), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(910), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(932), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10135] = 4,
    ACTIONS(938), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(910), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(936), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10159] = 3,
    ACTIONS(942), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(940), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10181] = 3,
    ACTIONS(946), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(944), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10203] = 13,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(950), 1,
      anon_sym_LBRACE,
    ACTIONS(952), 1,
      anon_sym_COLON,
    ACTIONS(954), 1,
      anon_sym_COLON_COLON,
    ACTIONS(956), 1,
      anon_sym_POUND,
    ACTIONS(958), 1,
      anon_sym_LBRACK,
    ACTIONS(960), 1,
      anon_sym_GT,
    ACTIONS(962), 1,
      anon_sym_TILDE,
    ACTIONS(964), 1,
      anon_sym_PLUS,
    ACTIONS(966), 1,
      sym__descendant_operator,
    STATE(402), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(910), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [10245] = 4,
    ACTIONS(968), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(619), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(617), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10269] = 3,
    ACTIONS(972), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(970), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10291] = 3,
    ACTIONS(976), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(974), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10313] = 4,
    ACTIONS(978), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(625), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(623), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10337] = 3,
    ACTIONS(982), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(980), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10359] = 3,
    ACTIONS(986), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(984), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10381] = 13,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    ACTIONS(952), 1,
      anon_sym_COLON,
    ACTIONS(954), 1,
      anon_sym_COLON_COLON,
    ACTIONS(956), 1,
      anon_sym_POUND,
    ACTIONS(958), 1,
      anon_sym_LBRACK,
    ACTIONS(960), 1,
      anon_sym_GT,
    ACTIONS(962), 1,
      anon_sym_TILDE,
    ACTIONS(964), 1,
      anon_sym_PLUS,
    ACTIONS(966), 1,
      sym__descendant_operator,
    STATE(407), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(910), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [10423] = 4,
    ACTIONS(988), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(667), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(665), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10447] = 4,
    ACTIONS(992), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(910), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(990), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10471] = 3,
    ACTIONS(996), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(994), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10493] = 5,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10518] = 4,
    ACTIONS(1004), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(619), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(617), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10541] = 3,
    ACTIONS(1006), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(585), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10562] = 5,
    ACTIONS(1009), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10587] = 5,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10612] = 5,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10637] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(635), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(633), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10658] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(643), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(641), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10679] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(631), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(629), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10700] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(659), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(657), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10721] = 5,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10746] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(667), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(665), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10767] = 5,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10792] = 4,
    ACTIONS(1011), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(625), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(623), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10815] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(615), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(611), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10836] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(647), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(645), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10857] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(655), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(653), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10878] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(639), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(637), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10899] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(663), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(661), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10920] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(651), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(649), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10941] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1013), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(1017), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1015), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10964] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1019), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10987] = 11,
    ACTIONS(952), 1,
      anon_sym_COLON,
    ACTIONS(954), 1,
      anon_sym_COLON_COLON,
    ACTIONS(956), 1,
      anon_sym_POUND,
    ACTIONS(958), 1,
      anon_sym_LBRACK,
    ACTIONS(960), 1,
      anon_sym_GT,
    ACTIONS(962), 1,
      anon_sym_TILDE,
    ACTIONS(964), 1,
      anon_sym_PLUS,
    ACTIONS(966), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(910), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1021), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [11024] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1023), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(1017), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1015), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11047] = 3,
    ACTIONS(1025), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(585), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11068] = 11,
    ACTIONS(952), 1,
      anon_sym_COLON,
    ACTIONS(954), 1,
      anon_sym_COLON_COLON,
    ACTIONS(956), 1,
      anon_sym_POUND,
    ACTIONS(958), 1,
      anon_sym_LBRACK,
    ACTIONS(960), 1,
      anon_sym_GT,
    ACTIONS(962), 1,
      anon_sym_TILDE,
    ACTIONS(964), 1,
      anon_sym_PLUS,
    ACTIONS(966), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(802), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(910), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [11105] = 5,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11130] = 5,
    ACTIONS(1009), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11155] = 5,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11180] = 5,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11205] = 5,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11230] = 3,
    ACTIONS(1027), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(585), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11251] = 5,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11276] = 5,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11301] = 4,
    ACTIONS(1030), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11323] = 4,
    ACTIONS(1032), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11345] = 4,
    ACTIONS(1034), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1038), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1036), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11367] = 4,
    ACTIONS(1040), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1038), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1036), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11389] = 6,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      anon_sym_selector,
    ACTIONS(1042), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(677), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(406), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11415] = 6,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      anon_sym_selector,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(677), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(389), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11441] = 4,
    ACTIONS(613), 1,
      anon_sym_COLON,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(609), 9,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11463] = 4,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11485] = 4,
    ACTIONS(1046), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11507] = 4,
    ACTIONS(1048), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11529] = 4,
    ACTIONS(1050), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11551] = 4,
    ACTIONS(1052), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11573] = 4,
    ACTIONS(1054), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11595] = 4,
    ACTIONS(1056), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11617] = 4,
    ACTIONS(1058), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11639] = 6,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      anon_sym_selector,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(677), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(363), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11665] = 4,
    ACTIONS(1060), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11687] = 4,
    ACTIONS(1062), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11709] = 6,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      anon_sym_selector,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(677), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(364), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11735] = 6,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      anon_sym_selector,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(677), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(369), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11761] = 4,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11783] = 11,
    ACTIONS(952), 1,
      anon_sym_COLON,
    ACTIONS(954), 1,
      anon_sym_COLON_COLON,
    ACTIONS(956), 1,
      anon_sym_POUND,
    ACTIONS(958), 1,
      anon_sym_LBRACK,
    ACTIONS(960), 1,
      anon_sym_GT,
    ACTIONS(962), 1,
      anon_sym_TILDE,
    ACTIONS(964), 1,
      anon_sym_PLUS,
    ACTIONS(966), 1,
      sym__descendant_operator,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(910), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [11819] = 4,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11841] = 4,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11863] = 6,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      anon_sym_selector,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(677), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(383), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11889] = 4,
    ACTIONS(1072), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11911] = 4,
    ACTIONS(1074), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11933] = 6,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      anon_sym_selector,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(677), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(367), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11959] = 4,
    ACTIONS(1076), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11981] = 6,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      anon_sym_selector,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(677), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(366), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [12007] = 10,
    ACTIONS(952), 1,
      anon_sym_COLON,
    ACTIONS(954), 1,
      anon_sym_COLON_COLON,
    ACTIONS(956), 1,
      anon_sym_POUND,
    ACTIONS(958), 1,
      anon_sym_LBRACK,
    ACTIONS(960), 1,
      anon_sym_GT,
    ACTIONS(962), 1,
      anon_sym_TILDE,
    ACTIONS(964), 1,
      anon_sym_PLUS,
    ACTIONS(966), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(910), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [12040] = 7,
    ACTIONS(1078), 1,
      anon_sym_RBRACE,
    ACTIONS(1080), 1,
      anon_sym_from,
    ACTIONS(1082), 1,
      sym_to,
    ACTIONS(1084), 1,
      aux_sym_integer_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(352), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(422), 2,
      sym_from,
      sym_integer_value,
  [12065] = 7,
    ACTIONS(1086), 1,
      anon_sym_RBRACE,
    ACTIONS(1088), 1,
      anon_sym_from,
    ACTIONS(1091), 1,
      sym_to,
    ACTIONS(1094), 1,
      aux_sym_integer_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(352), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(422), 2,
      sym_from,
      sym_integer_value,
  [12090] = 7,
    ACTIONS(1080), 1,
      anon_sym_from,
    ACTIONS(1082), 1,
      sym_to,
    ACTIONS(1084), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1097), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(351), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(422), 2,
      sym_from,
      sym_integer_value,
  [12115] = 7,
    ACTIONS(1080), 1,
      anon_sym_from,
    ACTIONS(1082), 1,
      sym_to,
    ACTIONS(1084), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1099), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(355), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(422), 2,
      sym_from,
      sym_integer_value,
  [12140] = 7,
    ACTIONS(1080), 1,
      anon_sym_from,
    ACTIONS(1082), 1,
      sym_to,
    ACTIONS(1084), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1101), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(352), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(422), 2,
      sym_from,
      sym_integer_value,
  [12165] = 7,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    ACTIONS(1105), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_block,
    STATE(373), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1107), 2,
      anon_sym_and,
      anon_sym_or,
  [12189] = 3,
    ACTIONS(1111), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1109), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [12205] = 7,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_block,
    STATE(374), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1107), 2,
      anon_sym_and,
      anon_sym_or,
  [12229] = 3,
    ACTIONS(1117), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1115), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [12245] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1119), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12258] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1121), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12271] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1123), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12284] = 6,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      sym_block,
    STATE(377), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1107), 2,
      anon_sym_and,
      anon_sym_or,
  [12305] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1125), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12318] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1127), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12331] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1129), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12344] = 6,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      sym_block,
    STATE(387), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1107), 2,
      anon_sym_and,
      anon_sym_or,
  [12365] = 6,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
    ACTIONS(1133), 1,
      anon_sym_LPAREN2,
    STATE(119), 1,
      sym_block,
    STATE(400), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12385] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1107), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1135), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12399] = 5,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    ACTIONS(1137), 1,
      anon_sym_SEMI,
    STATE(412), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1107), 2,
      anon_sym_and,
      anon_sym_or,
  [12417] = 6,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(1133), 1,
      anon_sym_LPAREN2,
    ACTIONS(1139), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_block,
    STATE(410), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12437] = 6,
    ACTIONS(804), 1,
      anon_sym_LPAREN2,
    ACTIONS(1141), 1,
      sym_string_value,
    ACTIONS(1143), 1,
      sym_identifier,
    STATE(195), 1,
      sym_arguments,
    STATE(480), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12457] = 6,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    ACTIONS(1145), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_block,
    STATE(394), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12477] = 6,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    ACTIONS(1147), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      sym_block,
    STATE(394), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12497] = 6,
    ACTIONS(804), 1,
      anon_sym_LPAREN2,
    ACTIONS(1143), 1,
      sym_identifier,
    ACTIONS(1149), 1,
      sym_string_value,
    STATE(195), 1,
      sym_arguments,
    STATE(478), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12517] = 5,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    ACTIONS(1151), 1,
      anon_sym_SEMI,
    STATE(404), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1107), 2,
      anon_sym_and,
      anon_sym_or,
  [12535] = 5,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      sym_block,
    STATE(394), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12552] = 4,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12567] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1155), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12578] = 5,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_block,
    STATE(417), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12595] = 5,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_block,
    STATE(423), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12612] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(359), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12623] = 4,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1107), 2,
      anon_sym_and,
      anon_sym_or,
  [12638] = 4,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1159), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12653] = 4,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12668] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(369), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12679] = 5,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      sym_block,
    STATE(394), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12696] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(365), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12707] = 4,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1107), 2,
      anon_sym_and,
      anon_sym_or,
  [12722] = 4,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12737] = 5,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_block,
    STATE(427), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12754] = 3,
    ACTIONS(1166), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1121), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12767] = 4,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12782] = 4,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    STATE(394), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1135), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12797] = 5,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_block,
    STATE(425), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12814] = 4,
    ACTIONS(1173), 1,
      anon_sym_COMMA,
    ACTIONS(1175), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12828] = 4,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(1177), 1,
      anon_sym_if,
    STATE(73), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12842] = 3,
    ACTIONS(1181), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1179), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12854] = 4,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    ACTIONS(1186), 1,
      anon_sym_RPAREN2,
    STATE(399), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12868] = 4,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    ACTIONS(1188), 1,
      anon_sym_SEMI,
    STATE(115), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12882] = 4,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    ACTIONS(1190), 1,
      anon_sym_if,
    STATE(44), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12896] = 4,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1192), 1,
      anon_sym_LBRACE,
    STATE(409), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12910] = 4,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    ACTIONS(1197), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12924] = 4,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    ACTIONS(1199), 1,
      anon_sym_SEMI,
    STATE(394), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12938] = 4,
    ACTIONS(1201), 1,
      sym_string_value,
    ACTIONS(1203), 1,
      sym_identifier,
    STATE(482), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12952] = 3,
    ACTIONS(1205), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1107), 2,
      anon_sym_and,
      anon_sym_or,
  [12964] = 4,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12978] = 4,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
    ACTIONS(1209), 1,
      anon_sym_COMMA,
    STATE(408), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12992] = 4,
    ACTIONS(1021), 1,
      anon_sym_LBRACE,
    ACTIONS(1212), 1,
      anon_sym_COMMA,
    STATE(409), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13006] = 4,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(1215), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13020] = 4,
    ACTIONS(1217), 1,
      sym_string_value,
    ACTIONS(1219), 1,
      sym_identifier,
    STATE(484), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13034] = 4,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    ACTIONS(1221), 1,
      anon_sym_SEMI,
    STATE(394), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13048] = 4,
    ACTIONS(1173), 1,
      anon_sym_COMMA,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13062] = 4,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1227), 1,
      anon_sym_RPAREN2,
    STATE(399), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13076] = 4,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1229), 1,
      anon_sym_RPAREN2,
    STATE(414), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13090] = 3,
    ACTIONS(1231), 1,
      anon_sym_SEMI,
    ACTIONS(1233), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13101] = 3,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13112] = 3,
    ACTIONS(1235), 1,
      sym_variable_identifier,
    STATE(413), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13123] = 3,
    ACTIONS(804), 1,
      anon_sym_LPAREN2,
    STATE(195), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13134] = 3,
    ACTIONS(1237), 1,
      anon_sym_COMMA,
    ACTIONS(1239), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13145] = 3,
    ACTIONS(699), 1,
      anon_sym_SEMI,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13156] = 3,
    ACTIONS(1241), 1,
      anon_sym_LBRACE,
    STATE(379), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13167] = 3,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13178] = 3,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13189] = 3,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13200] = 3,
    ACTIONS(1243), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13211] = 3,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13222] = 3,
    ACTIONS(1245), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13233] = 3,
    ACTIONS(1235), 1,
      sym_variable_identifier,
    STATE(432), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13244] = 3,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13255] = 3,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13266] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1197), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13275] = 3,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(1247), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13286] = 3,
    ACTIONS(1249), 1,
      aux_sym_color_value_token1,
    ACTIONS(1251), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13297] = 3,
    ACTIONS(1251), 1,
      sym_identifier,
    ACTIONS(1253), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13308] = 3,
    ACTIONS(1255), 1,
      anon_sym_COMMA,
    ACTIONS(1257), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13319] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1259), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13328] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1186), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
  [13337] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1261), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13346] = 2,
    ACTIONS(1263), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13354] = 2,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13362] = 2,
    ACTIONS(1265), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13370] = 2,
    ACTIONS(1267), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13378] = 2,
    ACTIONS(1231), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13386] = 2,
    ACTIONS(1269), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13394] = 2,
    ACTIONS(1271), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13402] = 2,
    ACTIONS(1273), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13410] = 2,
    ACTIONS(1275), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13418] = 2,
    ACTIONS(1277), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13426] = 2,
    ACTIONS(1279), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13434] = 2,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13442] = 2,
    ACTIONS(1281), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13450] = 2,
    ACTIONS(788), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13458] = 2,
    ACTIONS(1283), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13466] = 2,
    ACTIONS(1285), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13474] = 2,
    ACTIONS(1287), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13482] = 2,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13490] = 2,
    ACTIONS(699), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13498] = 2,
    ACTIONS(1289), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13506] = 2,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13514] = 2,
    ACTIONS(1291), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13522] = 2,
    ACTIONS(1293), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13530] = 2,
    ACTIONS(1295), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13538] = 2,
    ACTIONS(1297), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13546] = 2,
    ACTIONS(1299), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13554] = 2,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13562] = 2,
    ACTIONS(1301), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13570] = 2,
    ACTIONS(1303), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13578] = 2,
    ACTIONS(1305), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13586] = 2,
    ACTIONS(1307), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13594] = 2,
    ACTIONS(1309), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13602] = 2,
    ACTIONS(1311), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13610] = 2,
    ACTIONS(1313), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13618] = 2,
    ACTIONS(1315), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13626] = 2,
    ACTIONS(1317), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13634] = 2,
    ACTIONS(1319), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13642] = 2,
    ACTIONS(1321), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13650] = 2,
    ACTIONS(1323), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13658] = 2,
    ACTIONS(1325), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13666] = 2,
    ACTIONS(1327), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13674] = 2,
    ACTIONS(1329), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13682] = 2,
    ACTIONS(1331), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13690] = 2,
    ACTIONS(1190), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13698] = 2,
    ACTIONS(1333), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13706] = 2,
    ACTIONS(1335), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13714] = 2,
    ACTIONS(1337), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13722] = 2,
    ACTIONS(1339), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13730] = 2,
    ACTIONS(1341), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13738] = 2,
    ACTIONS(1177), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13746] = 2,
    ACTIONS(1343), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13754] = 2,
    ACTIONS(1345), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13762] = 2,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13770] = 2,
    ACTIONS(794), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13778] = 2,
    ACTIONS(1347), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13786] = 2,
    ACTIONS(1349), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13794] = 2,
    ACTIONS(896), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13802] = 2,
    ACTIONS(1351), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13810] = 2,
    ACTIONS(1353), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13818] = 2,
    ACTIONS(1355), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13826] = 2,
    ACTIONS(1357), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13834] = 2,
    ACTIONS(1359), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13842] = 2,
    ACTIONS(1361), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13850] = 2,
    ACTIONS(1363), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 51,
  [SMALL_STATE(17)] = 102,
  [SMALL_STATE(18)] = 153,
  [SMALL_STATE(19)] = 204,
  [SMALL_STATE(20)] = 252,
  [SMALL_STATE(21)] = 300,
  [SMALL_STATE(22)] = 377,
  [SMALL_STATE(23)] = 419,
  [SMALL_STATE(24)] = 461,
  [SMALL_STATE(25)] = 503,
  [SMALL_STATE(26)] = 545,
  [SMALL_STATE(27)] = 587,
  [SMALL_STATE(28)] = 629,
  [SMALL_STATE(29)] = 671,
  [SMALL_STATE(30)] = 745,
  [SMALL_STATE(31)] = 787,
  [SMALL_STATE(32)] = 829,
  [SMALL_STATE(33)] = 871,
  [SMALL_STATE(34)] = 912,
  [SMALL_STATE(35)] = 953,
  [SMALL_STATE(36)] = 994,
  [SMALL_STATE(37)] = 1035,
  [SMALL_STATE(38)] = 1076,
  [SMALL_STATE(39)] = 1117,
  [SMALL_STATE(40)] = 1158,
  [SMALL_STATE(41)] = 1199,
  [SMALL_STATE(42)] = 1240,
  [SMALL_STATE(43)] = 1281,
  [SMALL_STATE(44)] = 1322,
  [SMALL_STATE(45)] = 1363,
  [SMALL_STATE(46)] = 1404,
  [SMALL_STATE(47)] = 1445,
  [SMALL_STATE(48)] = 1486,
  [SMALL_STATE(49)] = 1527,
  [SMALL_STATE(50)] = 1568,
  [SMALL_STATE(51)] = 1609,
  [SMALL_STATE(52)] = 1650,
  [SMALL_STATE(53)] = 1691,
  [SMALL_STATE(54)] = 1732,
  [SMALL_STATE(55)] = 1773,
  [SMALL_STATE(56)] = 1814,
  [SMALL_STATE(57)] = 1855,
  [SMALL_STATE(58)] = 1896,
  [SMALL_STATE(59)] = 1937,
  [SMALL_STATE(60)] = 1978,
  [SMALL_STATE(61)] = 2019,
  [SMALL_STATE(62)] = 2060,
  [SMALL_STATE(63)] = 2101,
  [SMALL_STATE(64)] = 2142,
  [SMALL_STATE(65)] = 2183,
  [SMALL_STATE(66)] = 2224,
  [SMALL_STATE(67)] = 2297,
  [SMALL_STATE(68)] = 2338,
  [SMALL_STATE(69)] = 2379,
  [SMALL_STATE(70)] = 2420,
  [SMALL_STATE(71)] = 2461,
  [SMALL_STATE(72)] = 2502,
  [SMALL_STATE(73)] = 2543,
  [SMALL_STATE(74)] = 2584,
  [SMALL_STATE(75)] = 2625,
  [SMALL_STATE(76)] = 2666,
  [SMALL_STATE(77)] = 2707,
  [SMALL_STATE(78)] = 2748,
  [SMALL_STATE(79)] = 2789,
  [SMALL_STATE(80)] = 2830,
  [SMALL_STATE(81)] = 2871,
  [SMALL_STATE(82)] = 2912,
  [SMALL_STATE(83)] = 2953,
  [SMALL_STATE(84)] = 2994,
  [SMALL_STATE(85)] = 3035,
  [SMALL_STATE(86)] = 3076,
  [SMALL_STATE(87)] = 3117,
  [SMALL_STATE(88)] = 3158,
  [SMALL_STATE(89)] = 3199,
  [SMALL_STATE(90)] = 3240,
  [SMALL_STATE(91)] = 3281,
  [SMALL_STATE(92)] = 3322,
  [SMALL_STATE(93)] = 3363,
  [SMALL_STATE(94)] = 3404,
  [SMALL_STATE(95)] = 3445,
  [SMALL_STATE(96)] = 3486,
  [SMALL_STATE(97)] = 3527,
  [SMALL_STATE(98)] = 3568,
  [SMALL_STATE(99)] = 3609,
  [SMALL_STATE(100)] = 3650,
  [SMALL_STATE(101)] = 3691,
  [SMALL_STATE(102)] = 3732,
  [SMALL_STATE(103)] = 3773,
  [SMALL_STATE(104)] = 3814,
  [SMALL_STATE(105)] = 3855,
  [SMALL_STATE(106)] = 3896,
  [SMALL_STATE(107)] = 3937,
  [SMALL_STATE(108)] = 3978,
  [SMALL_STATE(109)] = 4019,
  [SMALL_STATE(110)] = 4060,
  [SMALL_STATE(111)] = 4101,
  [SMALL_STATE(112)] = 4142,
  [SMALL_STATE(113)] = 4183,
  [SMALL_STATE(114)] = 4224,
  [SMALL_STATE(115)] = 4265,
  [SMALL_STATE(116)] = 4306,
  [SMALL_STATE(117)] = 4347,
  [SMALL_STATE(118)] = 4388,
  [SMALL_STATE(119)] = 4429,
  [SMALL_STATE(120)] = 4470,
  [SMALL_STATE(121)] = 4511,
  [SMALL_STATE(122)] = 4552,
  [SMALL_STATE(123)] = 4621,
  [SMALL_STATE(124)] = 4667,
  [SMALL_STATE(125)] = 4733,
  [SMALL_STATE(126)] = 4799,
  [SMALL_STATE(127)] = 4865,
  [SMALL_STATE(128)] = 4931,
  [SMALL_STATE(129)] = 4971,
  [SMALL_STATE(130)] = 5009,
  [SMALL_STATE(131)] = 5044,
  [SMALL_STATE(132)] = 5079,
  [SMALL_STATE(133)] = 5111,
  [SMALL_STATE(134)] = 5143,
  [SMALL_STATE(135)] = 5175,
  [SMALL_STATE(136)] = 5207,
  [SMALL_STATE(137)] = 5239,
  [SMALL_STATE(138)] = 5271,
  [SMALL_STATE(139)] = 5303,
  [SMALL_STATE(140)] = 5335,
  [SMALL_STATE(141)] = 5367,
  [SMALL_STATE(142)] = 5399,
  [SMALL_STATE(143)] = 5431,
  [SMALL_STATE(144)] = 5474,
  [SMALL_STATE(145)] = 5509,
  [SMALL_STATE(146)] = 5552,
  [SMALL_STATE(147)] = 5587,
  [SMALL_STATE(148)] = 5625,
  [SMALL_STATE(149)] = 5659,
  [SMALL_STATE(150)] = 5714,
  [SMALL_STATE(151)] = 5767,
  [SMALL_STATE(152)] = 5818,
  [SMALL_STATE(153)] = 5871,
  [SMALL_STATE(154)] = 5916,
  [SMALL_STATE(155)] = 5961,
  [SMALL_STATE(156)] = 6006,
  [SMALL_STATE(157)] = 6051,
  [SMALL_STATE(158)] = 6096,
  [SMALL_STATE(159)] = 6141,
  [SMALL_STATE(160)] = 6194,
  [SMALL_STATE(161)] = 6247,
  [SMALL_STATE(162)] = 6299,
  [SMALL_STATE(163)] = 6347,
  [SMALL_STATE(164)] = 6395,
  [SMALL_STATE(165)] = 6447,
  [SMALL_STATE(166)] = 6499,
  [SMALL_STATE(167)] = 6531,
  [SMALL_STATE(168)] = 6583,
  [SMALL_STATE(169)] = 6635,
  [SMALL_STATE(170)] = 6682,
  [SMALL_STATE(171)] = 6713,
  [SMALL_STATE(172)] = 6744,
  [SMALL_STATE(173)] = 6772,
  [SMALL_STATE(174)] = 6818,
  [SMALL_STATE(175)] = 6846,
  [SMALL_STATE(176)] = 6892,
  [SMALL_STATE(177)] = 6938,
  [SMALL_STATE(178)] = 6964,
  [SMALL_STATE(179)] = 7010,
  [SMALL_STATE(180)] = 7056,
  [SMALL_STATE(181)] = 7099,
  [SMALL_STATE(182)] = 7142,
  [SMALL_STATE(183)] = 7167,
  [SMALL_STATE(184)] = 7192,
  [SMALL_STATE(185)] = 7217,
  [SMALL_STATE(186)] = 7242,
  [SMALL_STATE(187)] = 7267,
  [SMALL_STATE(188)] = 7292,
  [SMALL_STATE(189)] = 7335,
  [SMALL_STATE(190)] = 7360,
  [SMALL_STATE(191)] = 7385,
  [SMALL_STATE(192)] = 7410,
  [SMALL_STATE(193)] = 7435,
  [SMALL_STATE(194)] = 7460,
  [SMALL_STATE(195)] = 7485,
  [SMALL_STATE(196)] = 7510,
  [SMALL_STATE(197)] = 7535,
  [SMALL_STATE(198)] = 7560,
  [SMALL_STATE(199)] = 7585,
  [SMALL_STATE(200)] = 7610,
  [SMALL_STATE(201)] = 7635,
  [SMALL_STATE(202)] = 7662,
  [SMALL_STATE(203)] = 7689,
  [SMALL_STATE(204)] = 7714,
  [SMALL_STATE(205)] = 7739,
  [SMALL_STATE(206)] = 7782,
  [SMALL_STATE(207)] = 7807,
  [SMALL_STATE(208)] = 7847,
  [SMALL_STATE(209)] = 7887,
  [SMALL_STATE(210)] = 7927,
  [SMALL_STATE(211)] = 7967,
  [SMALL_STATE(212)] = 8007,
  [SMALL_STATE(213)] = 8047,
  [SMALL_STATE(214)] = 8087,
  [SMALL_STATE(215)] = 8127,
  [SMALL_STATE(216)] = 8167,
  [SMALL_STATE(217)] = 8207,
  [SMALL_STATE(218)] = 8247,
  [SMALL_STATE(219)] = 8287,
  [SMALL_STATE(220)] = 8327,
  [SMALL_STATE(221)] = 8355,
  [SMALL_STATE(222)] = 8395,
  [SMALL_STATE(223)] = 8435,
  [SMALL_STATE(224)] = 8475,
  [SMALL_STATE(225)] = 8503,
  [SMALL_STATE(226)] = 8543,
  [SMALL_STATE(227)] = 8583,
  [SMALL_STATE(228)] = 8623,
  [SMALL_STATE(229)] = 8663,
  [SMALL_STATE(230)] = 8703,
  [SMALL_STATE(231)] = 8743,
  [SMALL_STATE(232)] = 8783,
  [SMALL_STATE(233)] = 8823,
  [SMALL_STATE(234)] = 8863,
  [SMALL_STATE(235)] = 8903,
  [SMALL_STATE(236)] = 8943,
  [SMALL_STATE(237)] = 8983,
  [SMALL_STATE(238)] = 9023,
  [SMALL_STATE(239)] = 9063,
  [SMALL_STATE(240)] = 9103,
  [SMALL_STATE(241)] = 9143,
  [SMALL_STATE(242)] = 9183,
  [SMALL_STATE(243)] = 9223,
  [SMALL_STATE(244)] = 9263,
  [SMALL_STATE(245)] = 9303,
  [SMALL_STATE(246)] = 9343,
  [SMALL_STATE(247)] = 9383,
  [SMALL_STATE(248)] = 9423,
  [SMALL_STATE(249)] = 9463,
  [SMALL_STATE(250)] = 9503,
  [SMALL_STATE(251)] = 9543,
  [SMALL_STATE(252)] = 9583,
  [SMALL_STATE(253)] = 9623,
  [SMALL_STATE(254)] = 9663,
  [SMALL_STATE(255)] = 9703,
  [SMALL_STATE(256)] = 9743,
  [SMALL_STATE(257)] = 9766,
  [SMALL_STATE(258)] = 9789,
  [SMALL_STATE(259)] = 9824,
  [SMALL_STATE(260)] = 9851,
  [SMALL_STATE(261)] = 9886,
  [SMALL_STATE(262)] = 9911,
  [SMALL_STATE(263)] = 9933,
  [SMALL_STATE(264)] = 9955,
  [SMALL_STATE(265)] = 9979,
  [SMALL_STATE(266)] = 10001,
  [SMALL_STATE(267)] = 10023,
  [SMALL_STATE(268)] = 10045,
  [SMALL_STATE(269)] = 10067,
  [SMALL_STATE(270)] = 10089,
  [SMALL_STATE(271)] = 10111,
  [SMALL_STATE(272)] = 10135,
  [SMALL_STATE(273)] = 10159,
  [SMALL_STATE(274)] = 10181,
  [SMALL_STATE(275)] = 10203,
  [SMALL_STATE(276)] = 10245,
  [SMALL_STATE(277)] = 10269,
  [SMALL_STATE(278)] = 10291,
  [SMALL_STATE(279)] = 10313,
  [SMALL_STATE(280)] = 10337,
  [SMALL_STATE(281)] = 10359,
  [SMALL_STATE(282)] = 10381,
  [SMALL_STATE(283)] = 10423,
  [SMALL_STATE(284)] = 10447,
  [SMALL_STATE(285)] = 10471,
  [SMALL_STATE(286)] = 10493,
  [SMALL_STATE(287)] = 10518,
  [SMALL_STATE(288)] = 10541,
  [SMALL_STATE(289)] = 10562,
  [SMALL_STATE(290)] = 10587,
  [SMALL_STATE(291)] = 10612,
  [SMALL_STATE(292)] = 10637,
  [SMALL_STATE(293)] = 10658,
  [SMALL_STATE(294)] = 10679,
  [SMALL_STATE(295)] = 10700,
  [SMALL_STATE(296)] = 10721,
  [SMALL_STATE(297)] = 10746,
  [SMALL_STATE(298)] = 10767,
  [SMALL_STATE(299)] = 10792,
  [SMALL_STATE(300)] = 10815,
  [SMALL_STATE(301)] = 10836,
  [SMALL_STATE(302)] = 10857,
  [SMALL_STATE(303)] = 10878,
  [SMALL_STATE(304)] = 10899,
  [SMALL_STATE(305)] = 10920,
  [SMALL_STATE(306)] = 10941,
  [SMALL_STATE(307)] = 10964,
  [SMALL_STATE(308)] = 10987,
  [SMALL_STATE(309)] = 11024,
  [SMALL_STATE(310)] = 11047,
  [SMALL_STATE(311)] = 11068,
  [SMALL_STATE(312)] = 11105,
  [SMALL_STATE(313)] = 11130,
  [SMALL_STATE(314)] = 11155,
  [SMALL_STATE(315)] = 11180,
  [SMALL_STATE(316)] = 11205,
  [SMALL_STATE(317)] = 11230,
  [SMALL_STATE(318)] = 11251,
  [SMALL_STATE(319)] = 11276,
  [SMALL_STATE(320)] = 11301,
  [SMALL_STATE(321)] = 11323,
  [SMALL_STATE(322)] = 11345,
  [SMALL_STATE(323)] = 11367,
  [SMALL_STATE(324)] = 11389,
  [SMALL_STATE(325)] = 11415,
  [SMALL_STATE(326)] = 11441,
  [SMALL_STATE(327)] = 11463,
  [SMALL_STATE(328)] = 11485,
  [SMALL_STATE(329)] = 11507,
  [SMALL_STATE(330)] = 11529,
  [SMALL_STATE(331)] = 11551,
  [SMALL_STATE(332)] = 11573,
  [SMALL_STATE(333)] = 11595,
  [SMALL_STATE(334)] = 11617,
  [SMALL_STATE(335)] = 11639,
  [SMALL_STATE(336)] = 11665,
  [SMALL_STATE(337)] = 11687,
  [SMALL_STATE(338)] = 11709,
  [SMALL_STATE(339)] = 11735,
  [SMALL_STATE(340)] = 11761,
  [SMALL_STATE(341)] = 11783,
  [SMALL_STATE(342)] = 11819,
  [SMALL_STATE(343)] = 11841,
  [SMALL_STATE(344)] = 11863,
  [SMALL_STATE(345)] = 11889,
  [SMALL_STATE(346)] = 11911,
  [SMALL_STATE(347)] = 11933,
  [SMALL_STATE(348)] = 11959,
  [SMALL_STATE(349)] = 11981,
  [SMALL_STATE(350)] = 12007,
  [SMALL_STATE(351)] = 12040,
  [SMALL_STATE(352)] = 12065,
  [SMALL_STATE(353)] = 12090,
  [SMALL_STATE(354)] = 12115,
  [SMALL_STATE(355)] = 12140,
  [SMALL_STATE(356)] = 12165,
  [SMALL_STATE(357)] = 12189,
  [SMALL_STATE(358)] = 12205,
  [SMALL_STATE(359)] = 12229,
  [SMALL_STATE(360)] = 12245,
  [SMALL_STATE(361)] = 12258,
  [SMALL_STATE(362)] = 12271,
  [SMALL_STATE(363)] = 12284,
  [SMALL_STATE(364)] = 12305,
  [SMALL_STATE(365)] = 12318,
  [SMALL_STATE(366)] = 12331,
  [SMALL_STATE(367)] = 12344,
  [SMALL_STATE(368)] = 12365,
  [SMALL_STATE(369)] = 12385,
  [SMALL_STATE(370)] = 12399,
  [SMALL_STATE(371)] = 12417,
  [SMALL_STATE(372)] = 12437,
  [SMALL_STATE(373)] = 12457,
  [SMALL_STATE(374)] = 12477,
  [SMALL_STATE(375)] = 12497,
  [SMALL_STATE(376)] = 12517,
  [SMALL_STATE(377)] = 12535,
  [SMALL_STATE(378)] = 12552,
  [SMALL_STATE(379)] = 12567,
  [SMALL_STATE(380)] = 12578,
  [SMALL_STATE(381)] = 12595,
  [SMALL_STATE(382)] = 12612,
  [SMALL_STATE(383)] = 12623,
  [SMALL_STATE(384)] = 12638,
  [SMALL_STATE(385)] = 12653,
  [SMALL_STATE(386)] = 12668,
  [SMALL_STATE(387)] = 12679,
  [SMALL_STATE(388)] = 12696,
  [SMALL_STATE(389)] = 12707,
  [SMALL_STATE(390)] = 12722,
  [SMALL_STATE(391)] = 12737,
  [SMALL_STATE(392)] = 12754,
  [SMALL_STATE(393)] = 12767,
  [SMALL_STATE(394)] = 12782,
  [SMALL_STATE(395)] = 12797,
  [SMALL_STATE(396)] = 12814,
  [SMALL_STATE(397)] = 12828,
  [SMALL_STATE(398)] = 12842,
  [SMALL_STATE(399)] = 12854,
  [SMALL_STATE(400)] = 12868,
  [SMALL_STATE(401)] = 12882,
  [SMALL_STATE(402)] = 12896,
  [SMALL_STATE(403)] = 12910,
  [SMALL_STATE(404)] = 12924,
  [SMALL_STATE(405)] = 12938,
  [SMALL_STATE(406)] = 12952,
  [SMALL_STATE(407)] = 12964,
  [SMALL_STATE(408)] = 12978,
  [SMALL_STATE(409)] = 12992,
  [SMALL_STATE(410)] = 13006,
  [SMALL_STATE(411)] = 13020,
  [SMALL_STATE(412)] = 13034,
  [SMALL_STATE(413)] = 13048,
  [SMALL_STATE(414)] = 13062,
  [SMALL_STATE(415)] = 13076,
  [SMALL_STATE(416)] = 13090,
  [SMALL_STATE(417)] = 13101,
  [SMALL_STATE(418)] = 13112,
  [SMALL_STATE(419)] = 13123,
  [SMALL_STATE(420)] = 13134,
  [SMALL_STATE(421)] = 13145,
  [SMALL_STATE(422)] = 13156,
  [SMALL_STATE(423)] = 13167,
  [SMALL_STATE(424)] = 13178,
  [SMALL_STATE(425)] = 13189,
  [SMALL_STATE(426)] = 13200,
  [SMALL_STATE(427)] = 13211,
  [SMALL_STATE(428)] = 13222,
  [SMALL_STATE(429)] = 13233,
  [SMALL_STATE(430)] = 13244,
  [SMALL_STATE(431)] = 13255,
  [SMALL_STATE(432)] = 13266,
  [SMALL_STATE(433)] = 13275,
  [SMALL_STATE(434)] = 13286,
  [SMALL_STATE(435)] = 13297,
  [SMALL_STATE(436)] = 13308,
  [SMALL_STATE(437)] = 13319,
  [SMALL_STATE(438)] = 13328,
  [SMALL_STATE(439)] = 13337,
  [SMALL_STATE(440)] = 13346,
  [SMALL_STATE(441)] = 13354,
  [SMALL_STATE(442)] = 13362,
  [SMALL_STATE(443)] = 13370,
  [SMALL_STATE(444)] = 13378,
  [SMALL_STATE(445)] = 13386,
  [SMALL_STATE(446)] = 13394,
  [SMALL_STATE(447)] = 13402,
  [SMALL_STATE(448)] = 13410,
  [SMALL_STATE(449)] = 13418,
  [SMALL_STATE(450)] = 13426,
  [SMALL_STATE(451)] = 13434,
  [SMALL_STATE(452)] = 13442,
  [SMALL_STATE(453)] = 13450,
  [SMALL_STATE(454)] = 13458,
  [SMALL_STATE(455)] = 13466,
  [SMALL_STATE(456)] = 13474,
  [SMALL_STATE(457)] = 13482,
  [SMALL_STATE(458)] = 13490,
  [SMALL_STATE(459)] = 13498,
  [SMALL_STATE(460)] = 13506,
  [SMALL_STATE(461)] = 13514,
  [SMALL_STATE(462)] = 13522,
  [SMALL_STATE(463)] = 13530,
  [SMALL_STATE(464)] = 13538,
  [SMALL_STATE(465)] = 13546,
  [SMALL_STATE(466)] = 13554,
  [SMALL_STATE(467)] = 13562,
  [SMALL_STATE(468)] = 13570,
  [SMALL_STATE(469)] = 13578,
  [SMALL_STATE(470)] = 13586,
  [SMALL_STATE(471)] = 13594,
  [SMALL_STATE(472)] = 13602,
  [SMALL_STATE(473)] = 13610,
  [SMALL_STATE(474)] = 13618,
  [SMALL_STATE(475)] = 13626,
  [SMALL_STATE(476)] = 13634,
  [SMALL_STATE(477)] = 13642,
  [SMALL_STATE(478)] = 13650,
  [SMALL_STATE(479)] = 13658,
  [SMALL_STATE(480)] = 13666,
  [SMALL_STATE(481)] = 13674,
  [SMALL_STATE(482)] = 13682,
  [SMALL_STATE(483)] = 13690,
  [SMALL_STATE(484)] = 13698,
  [SMALL_STATE(485)] = 13706,
  [SMALL_STATE(486)] = 13714,
  [SMALL_STATE(487)] = 13722,
  [SMALL_STATE(488)] = 13730,
  [SMALL_STATE(489)] = 13738,
  [SMALL_STATE(490)] = 13746,
  [SMALL_STATE(491)] = 13754,
  [SMALL_STATE(492)] = 13762,
  [SMALL_STATE(493)] = 13770,
  [SMALL_STATE(494)] = 13778,
  [SMALL_STATE(495)] = 13786,
  [SMALL_STATE(496)] = 13794,
  [SMALL_STATE(497)] = 13802,
  [SMALL_STATE(498)] = 13810,
  [SMALL_STATE(499)] = 13818,
  [SMALL_STATE(500)] = 13826,
  [SMALL_STATE(501)] = 13834,
  [SMALL_STATE(502)] = 13842,
  [SMALL_STATE(503)] = 13850,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(241),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(335),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(238),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(411),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(473),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(325),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(452),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(475),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(476),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(237),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(499),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(503),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(236),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(479),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(250),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(252),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(235),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(232),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(227),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(261),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(277),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(496),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(443),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(440),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(455),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(275),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(317),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(495),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(260),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(207),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(347),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(243),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(405),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(461),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(344),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(244),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(245),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(452),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(450),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(448),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(471),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(255),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(467),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(470),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(253),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(472),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(208),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(247),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(239),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(261),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(277),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(496),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(443),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(440),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(455),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(275),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(288),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(459),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(258),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(489),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(483),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_clause, 4, .production_id = 21),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_clause, 4, .production_id = 21),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_clause, 3, .production_id = 11),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_clause, 3, .production_id = 11),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_statement, 4, .production_id = 10),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_statement, 4, .production_id = 10),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug_statement, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_statement, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 16),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 16),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, .production_id = 20),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, .production_id = 20),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 18),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 18),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warn_statement, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warn_statement, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend_statement, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_statement, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 26),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 26),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 7, .production_id = 25),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 7, .production_id = 25),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 18),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 18),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 18),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 18),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 4, .production_id = 10),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 4, .production_id = 10),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 3),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 3, .production_id = 10),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 3, .production_id = 10),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_root_statement, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_root_statement, 3),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_statement, 3, .production_id = 10),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_statement, 3, .production_id = 10),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 9),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 9),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_statement, 3),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_statement, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3, .production_id = 10),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3, .production_id = 10),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 18),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 8),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 8),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 18),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(213),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(214),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(447),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(132),
  [721] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(130),
  [724] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(131),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(129),
  [730] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(142),
  [733] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(132),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(214),
  [767] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(447),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(132),
  [773] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(130),
  [776] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(131),
  [779] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(129),
  [782] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(142),
  [785] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(132),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 5),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 5),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 13),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 13),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 13),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 13),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 5),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 5),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 5),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 5),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 15),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 15),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 12),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 12),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 14),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 14),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 6),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 6),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 7),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 7),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 13),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 13),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 19),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 19),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 12),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 12),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 19),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 19),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(210),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 3, .production_id = 24),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 23),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 1, .production_id = 17),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1027] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(223),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [1088] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(485),
  [1091] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(422),
  [1094] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(433),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 22),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(181),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(339),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2), SHIFT_REPEAT(205),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(429),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(29),
  [1212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(155),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 18),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 3),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 4),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1297] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_scss_external_scanner_create(void);
void tree_sitter_scss_external_scanner_destroy(void *);
bool tree_sitter_scss_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_scss_external_scanner_serialize(void *, char *);
void tree_sitter_scss_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scss(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_scss_external_scanner_create,
      tree_sitter_scss_external_scanner_destroy,
      tree_sitter_scss_external_scanner_scan,
      tree_sitter_scss_external_scanner_serialize,
      tree_sitter_scss_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
