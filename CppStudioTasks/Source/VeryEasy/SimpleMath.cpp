#include "../../Headers/VeryEasy/SimpleMath.h"

double SimpleMath::CalculateFunction(double a, double b, double f)
{
    if (a == 0.0)
        return 0.0;
    else
        return (a + b - f / a) + f * a * a - (a + b);
}

/// <summary>
/// Запрограммировать следующее выражение: (a + b - f / a) + f * a * a - (a + b) 
/// Числа a, b, f вводятся с клавиатуры. 
/// Организовать пользовательский интерфейс, таким образом, чтобы было понятно, в каком порядке должны вводиться числа.
/// </summary>
/// <returns></returns>
std::string SimpleMath::GetDescriptionEn()
{
    return "Calculate next function: (a + b - f / a) + f * a * a - (a + b).";
}