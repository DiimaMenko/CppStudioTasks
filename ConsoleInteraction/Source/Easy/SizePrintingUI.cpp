#include "../../Headers/Easy/SizePrintingUI.h"
#include <iostream>
#include <iomanip>

void SizePrintingUI::PrintDefaultTypes()
{
	std::cout << "Simple data types sizes:" << std::endl;
	std::cout << "Size of char         " << sizeof(char) << std::endl;
	std::cout << "Size of short        " << sizeof(short) << std::endl;
	std::cout << "Size of int          " << sizeof(int) << std::endl;
	std::cout << "Size of long         " << sizeof(long) << std::endl;
	std::cout << "Size of long long    " << sizeof(long long) << std::endl;
	std::cout << "Size of int8_t       " << sizeof(int8_t) << std::endl;
	std::cout << "Size of int16_t      " << sizeof(int16_t) << std::endl;
	std::cout << "Size of int32_t      " << sizeof(int32_t) << std::endl;
	std::cout << "Size of int64_t      " << sizeof(int64_t) << std::endl;
	std::cout << "Size of int_fast8_t  " << sizeof(int_fast8_t) << std::endl;
	std::cout << "Size of int_fast16_t " << sizeof(int_fast16_t) << std::endl;
	std::cout << "Size of int_fast32_t " << sizeof(int_fast32_t) << std::endl;
	std::cout << "Size of int_fast64_t " << sizeof(int_fast64_t) << std::endl;
	std::cout << "Size of float        " << sizeof(float) << std::endl;
	std::cout << "Size of double       " << sizeof(double) << std::endl;
	std::cout << "Size of long double  " << sizeof(long double) << std::endl;
	std::cout << "Size of wchar_t      " << sizeof(wchar_t) << std::endl;
}

void SizePrintingUI::PrintPointers()
{
	std::cout << "Pointers sizes:" << std::endl;
	char* p_char = new char();
	short* p_short = new short;
	int* p_int = new int();
	long* p_long = new long();
	long long* p_long_long = new long long();
	int8_t* p_int8_t = new int8_t();
	int16_t* p_int16_t = new int16_t();
	int32_t* p_int32_t = new int32_t();
	int64_t* p_int64_t = new int64_t();
	int_fast8_t* p_int_fast8_t = new int_fast8_t();
	int_fast16_t* p_int_fast16_t = new int_fast16_t();
	int_fast32_t* p_int_fast32_t = new int_fast32_t();
	int_fast64_t* p_int_fast64_t = new int_fast64_t();
	float* p_float = new float();
	double* p_double = new double();
	long double* p_long_double = new long double();
	wchar_t* p_wchar_t = new wchar_t();

	std::cout << "Size of p_char         " << sizeof(p_char) << std::endl;
	std::cout << "Size of p_short        " << sizeof(p_short) << std::endl;
	std::cout << "Size of p_int          " << sizeof(p_int) << std::endl;
	std::cout << "Size of p_long         " << sizeof(p_long) << std::endl;
	std::cout << "Size of p_long long    " << sizeof(p_long_long) << std::endl;
	std::cout << "Size of p_int8_t       " << sizeof(p_int8_t) << std::endl;
	std::cout << "Size of p_int16_t      " << sizeof(p_int16_t) << std::endl;
	std::cout << "Size of p_int32_t      " << sizeof(p_int32_t) << std::endl;
	std::cout << "Size of p_int64_t      " << sizeof(p_int64_t) << std::endl;
	std::cout << "Size of p_int_fast8_t  " << sizeof(p_int_fast8_t) << std::endl;
	std::cout << "Size of p_int_fast16_t " << sizeof(p_int_fast16_t) << std::endl;
	std::cout << "Size of p_int_fast32_t " << sizeof(p_int_fast32_t) << std::endl;
	std::cout << "Size of p_int_fast64_t " << sizeof(p_int_fast64_t) << std::endl;
	std::cout << "Size of p_float        " << sizeof(p_float) << std::endl;
	std::cout << "Size of p_double       " << sizeof(p_double) << std::endl;
	std::cout << "Size of p_long double  " << sizeof(p_long_double) << std::endl;
	std::cout << "Size of p_wchar_t      " << sizeof(p_wchar_t) << std::endl;
}

class empty_one {};
class empty_second { void some() {} };

void SizePrintingUI::PrintClassTypes()
{
	std::cout << "Some classes sizes:" << std::endl;
	std::cout << std::left << std::setw(30) << typeid(empty_one).name() << sizeof(empty_one) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(empty_second).name() << sizeof(empty_second) << std::endl;

	// UI classes
	// UI Helper
	std::cout << "UI classes:" << std::endl;
	std::cout << "UI Helper:" << std::endl;
	std::cout << std::left << std::setw(30) << typeid(Menu).name() << sizeof(Menu) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(MenuItem).name() << sizeof(MenuItem) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(MethodUIHelper).name() << sizeof(MethodUIHelper) << std::endl;

	// Very easy
	std::cout << "Very Easy:" << std::endl;
	std::cout << std::left << std::setw(30) << typeid(CharToUpperUI).name() << sizeof(CharToUpperUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(HouseDrawingUI).name() << sizeof(HouseDrawingUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(IntToCharUI).name() << sizeof(IntToCharUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(LengthConverterUI).name() << sizeof(LengthConverterUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(NumberByDigitUI).name() << sizeof(NumberByDigitUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(SimpleMathUI).name() << sizeof(SimpleMathUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(TriangleOneCoutUI).name() << sizeof(TriangleOneCoutUI) << std::endl;
	// Easy
	std::cout << "Easy:" << std::endl;
	std::cout << std::left << std::setw(30) << typeid(AlgebraicSumm2UI).name() << sizeof(AlgebraicSumm2UI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(AlgebraicSummUI).name() << sizeof(AlgebraicSummUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(AngleCalcUI).name() << sizeof(AngleCalcUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(SizePrintingUI).name() << sizeof(SizePrintingUI) << std::endl;
	// Normal
	// Hard
	// Experienced

	// Task classes
	// Very easy
	std::cout << "Task classes:" << std::endl;
	std::cout << "Very Easy:" << std::endl;
	std::cout << std::left << std::setw(30) << typeid(CharToUpper).name() << sizeof(CharToUpper) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(HouseDrawing).name() << sizeof(HouseDrawing) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(IntToChar).name() << sizeof(IntToChar) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(LengthConvert).name() << sizeof(LengthConvert) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(NumberByDigit).name() << sizeof(NumberByDigit) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(SimpleMath).name() << sizeof(SimpleMath) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(TriangleOneCout).name() << sizeof(TriangleOneCout) << std::endl;
	// Easy
	std::cout << "Easy:" << std::endl;
	std::cout << std::left << std::setw(30) << typeid(AlgebraicSumm).name() << sizeof(AlgebraicSumm) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(AlgebraicSumm2).name() << sizeof(AlgebraicSumm2) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(AngleCalc).name() << sizeof(AngleCalc) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(MinMaxDigit).name() << sizeof(MinMaxDigit) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(Power).name() << sizeof(Power) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(RandomNumberGenerator).name() << sizeof(RandomNumberGenerator) << std::endl;
	// Normal
	std::cout << "Normal:" << std::endl;
	std::cout << std::left << std::setw(30) << typeid(BraceBalance).name() << sizeof(BraceBalance) << std::endl;
	// Hard
	// Experienced
}

void SizePrintingUI::PrintPointersClassTypes()
{
	std::cout << "Some classes sizes:" << std::endl;
	empty_one* p_empty_one;
	empty_second* p_empty_second;
	std::cout << std::left << std::setw(30) << typeid(empty_one).name() << sizeof(p_empty_one) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(empty_second).name() << sizeof(p_empty_second) << std::endl;

	// UI classes
	// UI Helper
	std::cout << "UI classes:" << std::endl;
	std::cout << "UI Helper:" << std::endl;
	Menu* p_Menu;
	MenuItem* p_MenuItem;
	MethodUIHelper* p_MethodUIHelper;
	std::cout << std::left << std::setw(30) << typeid(Menu).name() << sizeof(p_Menu) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(MenuItem).name() << sizeof(p_MenuItem) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(MethodUIHelper).name() << sizeof(p_MethodUIHelper) << std::endl;

	// Very easy
	std::cout << "Very Easy:" << std::endl;
	CharToUpperUI* p_CharToUpperUI;
	HouseDrawingUI* p_HouseDrawingUI;
	IntToCharUI* p_IntToCharUI;
	LengthConverterUI* p_LengthConverterUI;
	NumberByDigitUI* p_NumberByDigitUI;
	SimpleMathUI* p_SimpleMathUI;
	TriangleOneCoutUI* p_TriangleOneCoutUI;
	std::cout << std::left << std::setw(30) << typeid(CharToUpperUI).name() << sizeof(p_CharToUpperUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(HouseDrawingUI).name() << sizeof(p_HouseDrawingUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(IntToCharUI).name() << sizeof(p_IntToCharUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(LengthConverterUI).name() << sizeof(p_LengthConverterUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(NumberByDigitUI).name() << sizeof(p_NumberByDigitUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(SimpleMathUI).name() << sizeof(p_SimpleMathUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(TriangleOneCoutUI).name() << sizeof(p_TriangleOneCoutUI) << std::endl;
	// Easy
	std::cout << "Easy:" << std::endl;
	AlgebraicSumm2UI* p_AlgebraicSumm2UI;
	AlgebraicSummUI* p_AlgebraicSummUI;
	AngleCalcUI* p_AngleCalcUI;
	SizePrintingUI* p_SizePrintingUI;

	std::cout << std::left << std::setw(30) << typeid(AlgebraicSumm2UI).name() << sizeof(p_AlgebraicSumm2UI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(AlgebraicSummUI).name() << sizeof(p_AlgebraicSummUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(AngleCalcUI).name() << sizeof(p_AngleCalcUI) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(SizePrintingUI).name() << sizeof(p_SizePrintingUI) << std::endl;
	// Normal
	// Hard
	// Experienced

	// Task classes
	// Very easy
	std::cout << "Task classes:" << std::endl;
	std::cout << "Very Easy:" << std::endl;
	CharToUpper* p_CharToUpper;
	HouseDrawing* p_HouseDrawing;
	IntToChar* p_IntToChar;
	LengthConvert* p_LengthConvert;
	NumberByDigit* p_NumberByDigit;
	SimpleMath* p_SimpleMath;
	TriangleOneCout* p_TriangleOneCout;
	std::cout << std::left << std::setw(30) << typeid(CharToUpper).name() << sizeof(p_CharToUpper) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(HouseDrawing).name() << sizeof(p_HouseDrawing) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(IntToChar).name() << sizeof(p_IntToChar) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(LengthConvert).name() << sizeof(p_LengthConvert) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(NumberByDigit).name() << sizeof(p_NumberByDigit) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(SimpleMath).name() << sizeof(p_SimpleMath) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(TriangleOneCout).name() << sizeof(p_TriangleOneCout) << std::endl;
	// Easy
	std::cout << "Easy:" << std::endl;
	AlgebraicSumm* p_AlgebraicSumm;
	AlgebraicSumm2* p_AlgebraicSumm2;
	AngleCalc* p_AngleCalc;
	MinMaxDigit* p_MinMaxDigit;
	Power* p_Power;
	RandomNumberGenerator* p_RandomNumberGenerator;

	std::cout << std::left << std::setw(30) << typeid(AlgebraicSumm).name() << sizeof(p_AlgebraicSumm) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(AlgebraicSumm2).name() << sizeof(p_AlgebraicSumm2) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(AngleCalc).name() << sizeof(p_AngleCalc) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(MinMaxDigit).name() << sizeof(p_MinMaxDigit) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(Power).name() << sizeof(p_Power) << std::endl;
	std::cout << std::left << std::setw(30) << typeid(RandomNumberGenerator).name() << sizeof(p_RandomNumberGenerator) << std::endl;
	// Normal
	std::cout << "Normal:" << std::endl;
	BraceBalance* p_BraceBalance;
	std::cout << std::left << std::setw(30) << typeid(BraceBalance).name() << sizeof(p_BraceBalance) << std::endl;
	// Hard
	// Experienced
}

void SizePrintingUI::Run()
{
m1:
	switch (ReadChar("Default types: d; Pointers for default types: p; Classes: c; Pointers for classes v."))
	{
	case 'd':
		PrintDefaultTypes();
		break;
	case 'p':
		PrintPointers();
		break;
	case 'c':
		PrintClassTypes();
		break;
	case 'v':
		PrintPointersClassTypes();
		break;
	default:
		goto m1;
		break;
	}
}

void SizePrintingUI::PrintDescription()
{
	std::cout << "Displays common used data types sizes, size of pointers for this types," <<
		" size of class types and size of pointers to class types as well." << std::endl;
}
