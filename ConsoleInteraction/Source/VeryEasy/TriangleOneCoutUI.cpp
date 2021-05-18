#include "../../Headers/VeryEasy/TriangleOneCoutUI.h"

void TriangleOneCoutUI::PrintDescription()
{
	std::cout << TriangleOneCout::GetDescriptionEn() << std::endl;
}

void TriangleOneCoutUI::Run()
{
	auto symbol = ReadChar("Enter symbol or character for drawing: ");
	auto height = ReadNumber<unsigned int>("Enter height: ");
	auto width = ReadNumber<unsigned int>("Enter width: ");

	auto triangle = TriangleOneCout::GetTriangleString(symbol, height, width);

	std::cout << triangle << std::endl;
}
