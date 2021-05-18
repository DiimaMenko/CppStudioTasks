#include "../../Headers/Easy/Power.h"

double Power::Pow(double number, double power)
{
	int integral = (int)power;
	double fractional = power >= 0 ? power - ((long)power) : -(power - ((long)power));
	double result = 1.0;
	if (power == 1.0)
	{
		return number;
	}
	else if (power == 0.0)
	{
		return 1;
	}

	for (int i = 0; i < integral; i++)
	{
		result *= number;
	}

	if(fractional > 0.0001)
		result *= Root(number, (unsigned int)(1.0 / fractional));

	if (power > 0)
	{
		return result;
	}
	else if (power < 0)
	{
		return 1 / result;
	}
	else
	{
		return 0.0;
	}
}

double Power::Root(double number, unsigned int power)
{
	double epsilon = 0.001;
	double delX = 1.0;
	double xPre = 1.0;
	double xK = 0.0;
	unsigned int ittttt = 0;
	while (delX > epsilon || delX < - epsilon) {
		double prepow = 1.0;
		for (unsigned int i = 0; i < power - 1; i++)
		{
			prepow *= xPre;
		}

		xK = ((power - 1.0) * xPre + number / prepow) / power;
		delX = xK - xPre;
		xPre = xK;
		ittttt++;
	}
	return xK;
}