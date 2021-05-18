#include "../../Headers/VeryEasy/IntToChar.h"

char IntToChar::GetChar(unsigned int num)
{
    if (num > 0 && num <= 255)
        return char(num);
    else
        return ' ';
}

const std::string IntToChar::GetDescriptionEn()
{
    return "Returns ASCII character by input integer code (no zero symbol)(returns space if incorrect input)";
}
