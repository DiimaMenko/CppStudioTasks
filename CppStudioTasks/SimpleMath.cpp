#include "SimpleMath.h"

double SimpleMath::CalculateFunction(double a, double b, double f)
{
    if (a == 0.0)
        return 0.0;
    else
        return (a + b - f / a) + f * a * a - (a + b);
}

std::string SimpleMath::GetDescriptionEn()
{
    return "Calculate next function: (a + b - f / a) + f * a * a - (a + b).";
}