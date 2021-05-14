#pragma once
#include <string>

//�������� ���������, � ������� �� �������� ��������� �������� V � ������� ������ ���� T
//������������ ���� a���� ��� ������� ���� ������� �� ��������� � ���������
//(�������������� ������������ a = arcsin(gT/2V) ).
class AngleCalc
{
	double _V;
	double _T;
	double _alpha;
public:
	AngleCalc(double V, double T);
	void Calculate();
	double GetAlpha();
	double GetAlphaDeg();
	static std::string GetDescriptionEn();
};

