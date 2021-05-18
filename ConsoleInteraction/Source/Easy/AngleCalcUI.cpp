#include "../../Headers/Easy/AngleCalcUI.h"

void AngleCalcUI::Run()
{
	double V, T;

	V = ReadNumber<double>("Starting speed V = ");
	T = ReadNumber<double>("Flying time T = ", 0, DBL_MAX);

	AngleCalc ac(V, T);
}

void AngleCalcUI::PrintDescription()
{
	std::cout << AngleCalc::GetDescriptionEn() << std::endl;
}
