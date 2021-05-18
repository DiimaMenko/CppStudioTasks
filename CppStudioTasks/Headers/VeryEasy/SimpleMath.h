#pragma once
#include <string>

class SimpleMath
{
	double a;
	double b;
	double f;
	double result;

public:
	static double CalculateFunction(double a, double b, double f);
	static std::string GetDescriptionEn();
};
