#pragma once
#include <string>

class SimpleMath
{
	double a;
	double b;
	double f;
	double result;
	const std::string taskDescriptionRu = "����������������� ��������� ���������: (a + b - f / a) + f * a * a - (a + b) ����� a, b, f �������� � ����������. ������������ ���������������� ���������, ����� �������, ����� ���� �������, � ����� ������� ������ ��������� �����.";
	const std::string taskdescriptionEn = "Calculate next function: (a + b - f / a) + f * a * a - (a + b).";

public:
	static double CalculateFunction(double a, double b, double f);
	static std::string GetDescriptionEn();
};
