#include "Menu.h"
#include "NumberByDigitUI.h"
#include "SimpleMathUI.h"
#include "CharToUpperUI.h"
#include "LengthConverterUI.h"
#include "IntToCharUI.h"
#include "HouseDrawingUI.h"
#include "TriangleOneCoutUI.h"
#include "TrianglesDrawingUI.h"
#include "AlgebraicSummUI.h"
#include "AlgebraicSumm2UI.h"

Menu::Menu() : MenuItem('0', "Main Menu")
{
	//Very easy level
	auto veryEasyLevelMenu = new MenuItem('0', "VeryEasyLevel");
	
	MenuItem numberByDigits('1', "Number by digits", "Separate number by digits (eg 555 -> '5' '5' '5').");
	numberByDigits.methodUIHelper = new NumberByDigitUI();

	MenuItem simpleMath('2', "Simple math calculation", "Calculates function.");
	simpleMath.methodUIHelper = new SimpleMathUI();

	MenuItem charToUpper('3', "Char to uppercase", "Returns same character with uppercase.");
	charToUpper.methodUIHelper = new CharToUpperUI();

	MenuItem lengthConvert('4', "Length converter", "Converts meters to kilometers.");
	lengthConvert.methodUIHelper = new LengthConverterUI();

	MenuItem simpleASCIIGraphics('5', "Simple ASCII graphics", "Converts number to ASCII character.");
	simpleASCIIGraphics.methodUIHelper = new IntToCharUI();
	
	MenuItem houseDrawing('6', "Draw house", "Draws house.");
	houseDrawing.methodUIHelper = new HouseDrawingUI();

	MenuItem triangleOneCout('7', "Draw triangle", "Draws triangle from entered symbol of specified height and width using one cout.");
	triangleOneCout.methodUIHelper = new TriangleOneCoutUI();

	veryEasyLevelMenu->childItems.push_back(numberByDigits);
	veryEasyLevelMenu->childItems.push_back(simpleMath);
	veryEasyLevelMenu->childItems.push_back(charToUpper);
	veryEasyLevelMenu->childItems.push_back(lengthConvert);
	veryEasyLevelMenu->childItems.push_back(simpleASCIIGraphics);
	veryEasyLevelMenu->childItems.push_back(houseDrawing);
	veryEasyLevelMenu->childItems.push_back(triangleOneCout);

	//Easy level
	auto easyLevelMenu = new MenuItem('1', "EasyLevel");

	MenuItem trianglesDrawing('1', "Triangles drawing", "Draws specified amount of triangles");
	trianglesDrawing.methodUIHelper = new TrianglesDrawingUI();

	MenuItem algebraicSumm('2', "Algebraic summ", "Calculates algebraic summ");
	algebraicSumm.methodUIHelper = new AlgebraicSummUI();

	MenuItem algebraicSumm2('3', "Algebraic summ 2", "Calculates another algebraic summ");
	algebraicSumm2.methodUIHelper = new AlgebraicSumm2UI();

	easyLevelMenu->childItems.push_back(trianglesDrawing);
	easyLevelMenu->childItems.push_back(algebraicSumm);
	easyLevelMenu->childItems.push_back(algebraicSumm2);

	childItems.push_back(*veryEasyLevelMenu);
	childItems.push_back(*easyLevelMenu);
}
