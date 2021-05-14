#define _USE_MATH_DEFINES
#include "AngleCalc.h"
#include <cmath>

#define M_G 9.80665

AngleCalc::AngleCalc(double V, double T)
{
	_V = V;
	_T = T;
	_alpha = 0.0;
}

void AngleCalc::Calculate()
{
	_alpha = 0.0;
	_alpha = asin(M_G *_T / (2 * _V));
}

double AngleCalc::GetAlpha()
{
	return _alpha;
}

double AngleCalc::GetAlphaDeg()
{
	return _alpha * 180.0 / M_PI;
}

std::string AngleCalc::GetDescriptionEn()
{
	//Ќапишите программу, в которой по извесной начальной скорости V и времени полета тела T
//определ€етс€ угол aльфа под которым тело брошено по отношению к горизонту
//(воспользуйтесь соотношением a = arcsin(gT/2V) ).
	return "Write a programm to calculate angle alpha to horizon of flying object \
			using starting speed V and fly time T. Use formula a = arcsin(g*T/2*V)";
}
