#include "IntToCharUI.h"

void IntToCharUI::PrintDescription()
{
	std::cout << IntToChar::GetDescriptionEn();
}

void IntToCharUI::Run()
{
	std::cout << "Example of ASCII graphics: " << std::endl;
	auto line1 = { 201, 203, 203, 203, 203, 203, 203, 203, 187 }; // массив  рисунка из символов таблицы ASCII
	auto line2 = { 200, 202, 202, 202, 202, 202, 202, 202, 188 };
	for (int i : line1)
	{
		std::cout << char(i);
	}
	std::cout << std::endl;
	for (int i : line2)
	{
		std::cout << char(i);
	}
	std::cout << std::endl;
	std::cout << "Now enter number (code of ASCII character). To exit, enter 0" << std::endl;
	
	unsigned int num = 0;

	do {
		num = ReadNumber<unsigned int>();
		if (num > 255)
		{
			std::cout << "Enter number lower than 256" << std::endl;
		}
		else
		{
			std::cout << "In ASCII table it is " << IntToChar::GetChar(num) << std::endl;
		}
	} while (num != 0);
}
