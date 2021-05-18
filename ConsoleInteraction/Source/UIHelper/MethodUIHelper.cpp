#include <conio.h>
#include "../../Headers/UIHelper/MethodUIHelper.h"

char MethodUIHelper::ReadChar()
{
	return ReadChar("");
}

char MethodUIHelper::ReadChar(const std::string text)
{
	std::cout << text;
	char ch = _getch();
	std::cout << ch << std::endl;
	return ch;
}