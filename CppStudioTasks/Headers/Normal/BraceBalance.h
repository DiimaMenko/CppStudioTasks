#pragma once
#include <string>
#include <fstream>

class BraceBalance
{
	std::string filename;
	std::string resultText;
	size_t opened_count;
	size_t closed_count;
	bool wrong_order;

public:
	BraceBalance(std::string filename);
	bool Check();
	std::string GetResult();
};

