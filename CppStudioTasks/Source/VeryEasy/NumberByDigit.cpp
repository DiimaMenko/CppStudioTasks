#include "../../Headers/VeryEasy/NumberByDigit.h"

NumberByDigit::NumberByDigit(unsigned int number)
{
	this->number = number;
	Calculate(number, digits);
}

NumberByDigit::~NumberByDigit()
{
	digits.clear();
}

void NumberByDigit::SetNumber(unsigned int number)
{
	this->number = number;
	digits.clear();
	Calculate(this->number, digits);
}

unsigned int NumberByDigit::GetNumber()
{
	return number;
}

std::vector<short> NumberByDigit::GetDigits()
{
	return digits;
}

void NumberByDigit::Calculate(const int &number, std::vector<short> &digits)
{
	auto left = number;
	do
	{
		digits.push_back(left % 10);
		left = left / 10;
	} while (left != 0);

	std::reverse(digits.begin(), digits.end());
}

std::vector<short> NumberByDigit::GetDigits(unsigned int number)
{
	std::vector<short> result;

	Calculate(number, result);

	return result;
}

/// <summary>
/// Составить программу, которая будет считывать введённое натуральное число (unsigned int). 
/// После чего, каждую цифру этого числа необходимо вывести в новой строке.
/// </summary>
/// <returns></returns>
const std::string NumberByDigit::GetDescriptionEn()
{
	return "Create a program which will read an natural number (unsigned int). After that, each digit of number must be output in new line.";
}