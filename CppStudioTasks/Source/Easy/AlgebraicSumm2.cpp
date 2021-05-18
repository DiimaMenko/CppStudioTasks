#include "../../Headers/Easy/AlgebraicSumm2.h"
#include <cmath>

AlgebraicSumm2::AlgebraicSumm2(unsigned int N, double K)
{
	_N = N;
	_K = K;
	_Y = 0.0;
}

void AlgebraicSumm2::Calculate()
{
	_Y = 0.0;
	for (unsigned int i = 0; i < _N; i++)
	{
		_Y += pow(i, _K);
	}
}

double AlgebraicSumm2::GetY()
{
	return _Y;
}
