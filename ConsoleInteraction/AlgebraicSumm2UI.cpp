#include "AlgebraicSumm2UI.h"
#include "../CppStudioTasks/AlgebraicSumm2.h"

void AlgebraicSumm2UI::Run()
{
	int k = ReadNumber<int>("Enter K: ");
	int n = ReadNumber<int>("Enter N: ");

	AlgebraicSumm2 summ(n, k);
	summ.Calculate();

	std::cout << std::endl << "Result = " << summ.GetY() << std::endl;
}

void AlgebraicSumm2UI::PrintDescription()
{
	std::cout << "Found algebraic summ for next statement: 1^k + 2^k + ... + n^k." << std::endl
		<< "Numbers N and K user enters from keyboard." << std::endl;
}
