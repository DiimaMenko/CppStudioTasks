#include "../../Headers/VeryEasy/LengthConverterUI.h"

void LengthConverterUI::Run()
{
	std::cout << "Enter number of meters:" << std::endl;
	auto meters = ReadNumber<double>();
	std::cout << "Is is equal to " << LengthConvert::ToKilometers(meters) << " kilometers" << std::endl;
}

void LengthConverterUI::PrintDescription()
{
	std::cout << LengthConvert::GetDescriptionEn();
}