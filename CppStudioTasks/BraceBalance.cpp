#include "BraceBalance.h"

BraceBalance::BraceBalance(std::string filename) :
	filename(filename),
	resultText(""),
	opened_count(0),
	closed_count(0),
	wrong_order(false)
{
}

/// <summary>
/// 
/// </summary>
/// <returns>true if check was conduct, false if some error was met during check</returns>
bool BraceBalance::Check()
{
	opened_count = 0;
	closed_count = 0;
	wrong_order = false;
	resultText = "";

	std::ifstream file(filename);
	if (!file.is_open())
	{
		resultText = "Cannot open file.";
		return false;
	}

	char nextChar;

	while (file >> nextChar)
	{
		if (nextChar == '{')
			opened_count++;

		if (nextChar == '}')
			closed_count++;

		if (closed_count > opened_count)
			wrong_order = true;
	}

	if (closed_count == opened_count && wrong_order)
	{
		resultText.append("Some closed brace placed earlier than opened one. ");
	}
	else if (closed_count > opened_count)
	{
		resultText.append("Here is more closed braces than opened. ");
	}
	else if (closed_count < opened_count)
	{
		resultText.append("Here is more opened braces than closed. ");
	}
	else if(wrong_order)
	{
		resultText.append("Some strange error happened. Please contact with developer. ");
	}
	else
	{
		resultText.append("There are no any brace errors in this file. ");
	}
	return true;
}

std::string BraceBalance::GetResult()
{
	return resultText;
}

