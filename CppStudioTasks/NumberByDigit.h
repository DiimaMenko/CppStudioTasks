#pragma once
#include <vector>
#include <algorithm>
#include <string>

class NumberByDigit
{
	unsigned int number;
	std::vector<short> digits;
	const std::string taskDescription_ru = "��������� ���������, ������� ����� ��������� �������� ����������� ����� (unsigned int). ����� ����, ������ ����� ����� ����� ���������� ������� � ����� ������.";
	const std::string taskDescription_en = "Create a program which will read an natural number (unsigned int). After that, each digit of number must be output in new line.";
	
	static void Calculate(const int& number, std::vector<short>& digits);
public:
	NumberByDigit(unsigned int number);
	void SetNumber(unsigned int number);
	unsigned int GetNumber();
	static const std::string GetDescriptionEn();
	std::vector<short> GetDigits();
	~NumberByDigit();

	static std::vector<short> GetDigits(unsigned int number);
};

