#pragma once
#include <string>

class SimpleMath
{
	double a;
	double b;
	double f;
	double result;
	const std::string taskDescriptionRu = "Запрограммировать следующее выражение: (a + b - f / a) + f * a * a - (a + b) Числа a, b, f вводятся с клавиатуры. Организовать пользовательский интерфейс, таким образом, чтобы было понятно, в каком порядке должны вводиться числа.";
	const std::string taskdescriptionEn = "Calculate next function: (a + b - f / a) + f * a * a - (a + b).";

public:
	static double CalculateFunction(double a, double b, double f);
	static std::string GetDescriptionEn();
};
