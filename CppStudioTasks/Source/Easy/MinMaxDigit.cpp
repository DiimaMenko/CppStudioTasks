#include "../../Headers/Easy/MinMaxDigit.h"

MinMaxDigit::MinMaxDigit(unsigned int number)
{
	_number = number;
	_min = 9;
	_max = 0;
}

void MinMaxDigit::Calculate()
{
	auto digits = NumberByDigit::GetDigits(_number);
	_min = 9;
	_max = 0;
	for (int i = 0; i < digits.size(); i++)
	{
		if (digits[i] < (short)_min)
		{
			_min = digits[i];
		}
		if (digits[i] > (short)_max)
		{
			_max = digits[i];
		}
	}
}

unsigned int MinMaxDigit::GetMin()
{
	return _min;
}

unsigned int MinMaxDigit::GetMax()
{
	return _max;
}
