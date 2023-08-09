#pragma once
#include <string>
#include "Token.h"

class Lexer {
 public:
  explicit Lexer(std::string contents);
  Token GetNextToken();
 public:

 private:
  char character;
  unsigned int i;
  std::string contents;

  void NextChar();
  void SkipWhitespace();
  Token ParseToken();
  Token ParseString();
  Token SaveCharAndGoNext(TokenTypes token_type);
  Token ParseIsStatement();
};

