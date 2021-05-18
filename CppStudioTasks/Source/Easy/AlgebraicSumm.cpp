#include "../../Headers/Easy/AlgebraicSumm.h"
#include <cmath>
#include <iostream>

X::X(double Z, double A, double B, double C)
{
	_Z = Z;
	_A = A;
	_B = B;
	_C = C;
	_X = 0.0;
}

double X::GetX()
{
	_X = pow(_Z, 3) - _B + pow(_A, 2) / pow(tan(_C), 2);
	return _X;
}

AlgebraicSumm::AlgebraicSumm()
{
	_Y = 0.0;
	_N = 0;
	for(unsigned int i = 0; i < XN.size() && i < _N; i++)
		_Y += XN[i].GetX();
}

void AlgebraicSumm::AddX(double Z, double A, double B, double C)
{
	XN.push_back(*(new X(Z, A, B, C)));
}

void AlgebraicSumm::SetN(unsigned int N)
{
	_N = N;
	XN.reserve(_N);
}

void AlgebraicSumm::Calculate()
{
	_Y = 0.0;
	for (int i = 0; i < XN.size(); i++)
		_Y += XN[i].GetX();
}

double AlgebraicSumm::GetY()
{
	return _Y;
}

int AlgebraicSumm::GetN()
{
	return _N;
}
