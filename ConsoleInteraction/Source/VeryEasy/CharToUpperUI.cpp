#include "../../Headers/VeryEasy/CharToUpperUI.h"

void CharToUpperUI::PrintDescription()
{
	std::cout << CharToUpper::GetDescriptionEn() << std::endl;
}

void CharToUpperUI::Run()
{
	char ch = ReadChar("Enter char in lowercase: ");

	auto result = CharToUpper::ToUpper(ch);
	std::cout << "Result: " << result << std::endl;
}
