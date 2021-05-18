#pragma once

//Найти алгебраическую сумму для выражения : 1k + 2k + 3k + … + Nk.N и степень k вводит пользователь.
class AlgebraicSumm2
{
	double _N;
	double _K;
	double _Y;
public:
	AlgebraicSumm2(unsigned int N, double K);
	void Calculate();
	double GetY();
};

