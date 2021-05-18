#include <iostream>
#include "../Headers/UIHelper/Menu.h"
#include "../Headers/VeryEasy/NumberByDigitUI.h"
#include "../Headers/VeryEasy/SimpleMathUI.h"
#include "../Headers/VeryEasy/CharToUpperUI.h"
#include "../Headers/VeryEasy/LengthConverterUI.h"
#include "../Headers/VeryEasy/IntToCharUI.h"
#include "../Headers/VeryEasy/HouseDrawingUI.h"
#include "../Headers/VeryEasy/TriangleOneCoutUI.h"
#include "../Headers/Easy/TrianglesDrawingUI.h"
#include "../Headers/Easy/AlgebraicSummUI.h"
#include "../Headers/Easy/AlgebraicSumm2UI.h"
#include "../Headers/Easy/SizePrintingUI.h"

int main()
{
	Menu *menu = new Menu();

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
	MenuItem easyLevelMenu('1', "EasyLevel");

	MenuItem trianglesDrawing('1', "Triangles drawing", "Draws specified amount of triangles");
	trianglesDrawing.methodUIHelper = new TrianglesDrawingUI();

	MenuItem algebraicSumm('2', "Algebraic summ", "Calculates algebraic summ");
	algebraicSumm.methodUIHelper = new AlgebraicSummUI();

	MenuItem algebraicSumm2('3', "Algebraic summ 2", "Calculates another algebraic summ");
	algebraicSumm2.methodUIHelper = new AlgebraicSumm2UI();

	easyLevelMenu.childItems.push_back(trianglesDrawing);
	easyLevelMenu.childItems.push_back(algebraicSumm);
	easyLevelMenu.childItems.push_back(algebraicSumm2);

	MenuItem sizePrinting('s', "Size printing", "Prints sizeof default data types and some classes");
	sizePrinting.methodUIHelper = new SizePrintingUI();
	menu->childItems.push_back(sizePrinting);
	menu->childItems.push_back(*veryEasyLevelMenu);
	menu->childItems.push_back(easyLevelMenu);

	while(true)
		menu->RunItem();

	return 0;
}