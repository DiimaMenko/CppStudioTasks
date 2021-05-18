#include "../../Headers/Easy/AlgebraicSummUI.h"

void AlgebraicSummUI::Run()
{
	AlgebraicSumm summ;
	summ.SetN(ReadNumber<int>("Enter X count: "));

	for (int i = 0; i < summ.GetN(); i++)
	{
		std::cout << "Enter values for X" << i << ":" << std::endl;
		double Z = ReadNumber<double>("Z = ");
		double A = ReadNumber<double>("A = ");
		double B = ReadNumber<double>("B = ");
		double C = ReadNumber<double>("C = ");

		summ.AddX(Z, A, B, C);
	}

	summ.Calculate();

	std::cout << std::endl << "Y = " << summ.GetY() << std::endl;
}

void AlgebraicSummUI::PrintDescription()
{
	std::cout << "Found Y = X1 + X2 + .. + XN, where Xi = Z ^ 3 - B + A ^ 2 / tg ^ 2 C. "
		<< "X count entered from keyboard. For each X, user enter new values Z, B, A, C." << std::endl;
}
