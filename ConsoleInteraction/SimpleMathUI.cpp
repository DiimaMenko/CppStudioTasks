#include "SimpleMathUI.h"

void SimpleMathUI::PrintDescription()
{
	std::cout << SimpleMath::GetDescriptionEn() << std::endl;
}

void SimpleMathUI::Run()
{
	double a = 0.0, b = 0.0, f = 0.0;
	std::cout << "Enter three numbers" << std::endl;
	
	do
	{
		a = ReadNumber<double>("a=");
		if (a == 0.0)
			std::cout << "Enter not zero value please." << std::endl;
	} while (a == 0.0);

	b = ReadNumber<double>("b=");

	f = ReadNumber<double>("f=");

	auto result = SimpleMath::CalculateFunction(a, b, f);

	std::cout << "Result: x=" << result << std::endl;
}