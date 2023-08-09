#include "Token.h"

Token::Token(int type, std::string value): type(static_cast<TokenTypes>(type)), value(std::move(value)) {}
