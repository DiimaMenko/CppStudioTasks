#pragma once
#include <vector>
#include <algorithm>
#include <string>

class NumberByDigit
{
	unsigned int number;
	std::vector<short> digits;
	
	static void Calculate(const int& number, std::vector<short>& digits);
public:
	NumberByDigit(unsigned int number);
	void SetNumber(unsigned int number);
	unsigned int GetNumber();
	std::vector<short> GetDigits();
	~NumberByDigit();

	static const std::string GetDescriptionEn();
	static std::vector<short> GetDigits(unsigned int number);
};

