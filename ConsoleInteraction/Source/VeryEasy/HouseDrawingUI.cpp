#include "../../Headers/VeryEasy/HouseDrawingUI.h"

void HouseDrawingUI::Run()
{
	std::cout << "House:" << std::endl;
	for (auto line : HouseDrawing::GetHouse())
	{
		std::cout << line << std::endl;
	}

	for (int i = 0; i < 256; i++)
	{
		std::cout << i << "\t" << char(i) << "\t";
		if (i % 8 == 0)
		{
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
}

void HouseDrawingUI::PrintDescription()
{
	std::cout << "Draws house in console using ASCII graphics." << std::endl;
}