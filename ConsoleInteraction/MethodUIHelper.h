#pragma once
#include <iostream>
#include <string>

class MethodUIHelper
{
public:

	/// <summary>
	/// Reads number of specified type in entered bouds prompting message before input.
	/// </summary>
	/// <typeparam name="T">Numeric type for reading.</typeparam>
	/// <param name="text">Prompt for input, drawing before input in same line.</param>
	/// <param name="min">Minimum value for input. To disable, bounds, make min=max.</param>
	/// <param name="max">Maximum value for input. To disable, bounds, make min=max.</param>
	/// <returns>Specified type number entered by user from keyboard</returns>
	template<typename T>
	T ReadNumber(const std::string text, T min, T max)
	{
		std::string input;

		do
		{
			T number;
			std::cout << text;
			if (std::cin >> number)
				if (min == max || number >= min && number <= max)
					return number;

			std::cout << "Wrong input. Please, try again" << std::endl;

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		} while (true);
		return 0;
	};

	template<typename T>
	T ReadNumber()
	{
		return ReadNumber<T>("", 0, 0);
	};

	template<typename T>
	T ReadNumber(const char* text)
	{
		return ReadNumber<T>(text, 0, 0);
	};

	char ReadChar();
	char ReadChar(const std::string text);

	virtual void Run() = 0;
	virtual void PrintDescription() = 0;
};
