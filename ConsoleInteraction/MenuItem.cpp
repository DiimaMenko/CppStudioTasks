#include "MenuItem.h"
#include <iostream>
#include <iomanip>
#include <conio.h>

MenuItem::MenuItem(char character, std::string title)
{
	this->character = character;
	this->title = title;
	this->description = "";
	this->prenumber = "";
}

MenuItem::MenuItem(char character, std::string title, std::string description)
{
	this->character = character;
	this->title = title;
	this->description = description;
	this->prenumber = "";
}

void MenuItem::Show()
{
	std::cout << std::left << prenumber << character << ". \t" << std::setw(30) << title << std::setw(30) << description << std::endl;
}

void MenuItem::ShowChildren(std::string prenumber)
{
	std::string char_s;
	char_s.push_back(character);
	prenumber += char_s + ".";
	for (auto item : childItems)
	{
		item.prenumber = prenumber;
		item.Show();
	}
}

void MenuItem::RunItem()
{
	do
	{
		system("cls");
		Show();
		if (childItems.empty())
		{
			this->ExecuteTask();
			return;
		}
		ShowChildren(prenumber);

		ReadInput();
	} while (ProcessChoise());
}

void MenuItem::ReadInput()
{
	input = _getch();
}

int MenuItem::ProcessChoise()
{
	switch (input)
	{
	case 'r':
		return 0;
	case 'q':
		exit(0);
		break;
	default:
		if (input >= '0' && input <= '9'
			|| input >= 'a' && input <= 'z'
			|| input >= 'A' && input <= 'Z')
		{
			for (auto child : childItems)
			{
				if (child.character != input)
					continue;

				child.RunItem();
			}
		}
		else
		{
			std::cout << "Wrong command typed." << std::endl
				<< "Possible commands : q - quit, r - retuen to prev.menu, number / character for menu items navigation." << std::endl;
		}
		break;
	}
	return 1;
}

void MenuItem::ExecuteTask()
{
	methodUIHelper->PrintDescription();
	methodUIHelper->Run();
	system("pause");
}