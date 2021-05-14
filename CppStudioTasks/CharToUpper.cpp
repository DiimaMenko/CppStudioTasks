#include "CharToUpper.h"

char CharToUpper::ToUpper(char lower)
{
    if (lower >= 'A' && lower <= 'Z')
        return lower;

    if (lower >= 'a' && lower <= 'z')
        return lower - ('a' - 'A');

    return lower;
}

const std::string CharToUpper::GetDescriptionEn()
{
    return "Change character from lowercase to uppercase.";
}
