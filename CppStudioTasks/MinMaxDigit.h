#pragma once
#include "NumberByDigit.h"

class MinMaxDigit
{
	unsigned int _number;
	unsigned int _min;
	unsigned int _max;
public:
	MinMaxDigit(unsigned int number);
	void Calculate();
	unsigned int GetMin();
	unsigned int GetMax();
};

