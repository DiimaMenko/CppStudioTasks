#include "../../Headers/VeryEasy/TriangleOneCout.h"

std::string TriangleOneCout::GetTriangleString(char symbol, unsigned int height, unsigned int width)
{
    std::string result;
    for (unsigned int i = 1; i <= height; i++)
    {
        auto currentRowWidth = (double)width * (double)i / (double)height;
        for (unsigned int j = 0; j < currentRowWidth; j++)
        {
            result.push_back(symbol);
        }
        result.push_back('\n');
    }
    return result;
}

std::string TriangleOneCout::GetDescriptionEn()
{
    return "Draws triangle using some character and only with one std::cout!";
}