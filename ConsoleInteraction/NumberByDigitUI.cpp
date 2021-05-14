#include "NumberByDigitUI.h"

void NumberByDigitUI::Run()
{
    std::cout << std::endl;

    std::cout << "Enter positive integer." << std::endl;
    auto number = ReadNumber<unsigned int>();

    auto result = NumberByDigit::GetDigits(number);
    std::cout << "Number digits are: " << std::endl;
    for (auto var : result)
    {
        std::cout << var << std::endl;
    }
}

void NumberByDigitUI::PrintDescription()
{
    std::cout << NumberByDigit::GetDescriptionEn() << std::endl;
}