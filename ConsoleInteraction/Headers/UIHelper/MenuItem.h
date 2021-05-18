#pragma once
#include <list>
#include <string>
#include "MethodUIHelper.h"

class MenuItem
{
public:
	MenuItem(char character, std::string title, std::string description);
	MenuItem(char character, std::string title);
	std::list<MenuItem> childItems;
	MethodUIHelper* methodUIHelper;

	std::string title;
	std::string description;
	std::string prenumber;
	char character;

	char input;

	void Show();
	void ShowChildren(std::string prenumber);
	void ReadInput();
	int ProcessChoise();
	void RunItem();
	void ExecuteTask();
};

