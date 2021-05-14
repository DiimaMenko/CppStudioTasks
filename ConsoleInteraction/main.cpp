#include <iostream>
#include "Menu.h"

int main()
{
	Menu *menu = new Menu();

	while(true)
		menu->RunItem();

	return 0;
}