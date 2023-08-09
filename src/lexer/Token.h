#include <string>

enum TokenTypes{
  TOKEN_STRING,
  TOKEN_RBRACE,
  TOKEN_LBRACE,
  TOKEN_SEMI,
  TOKEN_KEYWORD,
  TOKEN_COMMA,
  TOKEN_EQUALS,
  TOKEN_END,
  TOKEN_UNKNOWN,
  TOKEN_BIGGER,
  TOKEN_SMALLER,
  TOKEN_BIGGER_EQUALS,
  TOKEN_SMALLER_EQUALS,
  TOKEN_NOT_EQUALS,
  TOKEN_IS_NULL,
  TOKEN_IS_NOT_NULL
};

struct Token {
  Token(int type, std::string value);

  TokenTypes type;
  std::string value;
};
