#pragma once

#include <map>
#include <string>
#include <vector>

#include "TokenType.h";
#include "Token.h";
#include "State.h";

class Parser
{
	private:
		std::map<std::string, std::vector<Token>> _cache;

	public:
};