#pragma once
#include <string>

//Ќапишите программу, в которой по извесной начальной скорости V и времени полета тела T
//определ€етс€ угол aльфа под которым тело брошено по отношению к горизонту
//(воспользуйтесь соотношением a = arcsin(gT/2V) ).
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

