#include "LengthConvert.h"

double LengthConvert::ToKilometers(double meters)
{
	return meters / 1000.0;
}

std::string LengthConvert::GetDescriptionEn()
{
	return "Converts number from meters to kilometers";
}