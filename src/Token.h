#pragma once

#include "TokenType.h";

typedef struct {
    TokenType type;
    std::string name;
    std::string value;
    int start, end;
} Token;