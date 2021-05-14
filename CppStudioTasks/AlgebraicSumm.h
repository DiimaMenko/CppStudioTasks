#pragma once
#include <vector>

/// <summary>
/// Найти Y, если Y = X1 + X2 + … + Xn,   X = Z^3 - B + A^2 / tg^2 C. 
/// Количество X вводятся пользователем программы. 
/// Для каждого X значения Z, B, А, C разные (вводятся пользователем программы).
/// </summary>

class X
{
	double _X;
	double _Z;
	double _A;
	double _B;
	double _C;
public:
	X(double Z, double A, double B, double C);
	double GetX();
};

class AlgebraicSumm
{
	unsigned int _N;
	double _Y;
	std::vector<X> XN;
public:
	AlgebraicSumm();
	void AddX(double Z, double A, double B, double C);
	void SetN(unsigned int N);
	void Calculate();
	double GetY();
	int GetN();
};

