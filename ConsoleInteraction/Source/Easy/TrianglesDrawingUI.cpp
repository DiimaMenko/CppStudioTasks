#include <iostream>
#include "../../Headers/Easy/TrianglesDrawingUI.h"

void TrianglesDrawingUI::PrintDescription()
{
	std::cout << "Draws inputed amount of triangles (between 0 and 6)." << std::endl;
}

void TrianglesDrawingUI::Run()
{
	int triangles;
	triangles = ReadNumber("Enter triangles amount, please:", 0, 6);

	int triangle_width = 15;
	int triangle_height = triangle_width / 2 + 1;

	for (int i = 0; i < triangle_height; i++)
	{
		for (int t = 0; t < triangles; t++)
		{
			if (i == 0)
			{
				for (int j = 0; j < (int)(triangle_width / 2) - i; j++)
				{
					std::cout << " ";
				}

				std::cout << "*";

				for (int j = 0; j < (int)(triangle_width / 2) - i; j++)
				{
					std::cout << " ";
				}
			}
			else if (i == triangle_height - 1)
			{
				for (int j = 0; j < triangle_width; j++)
				{
					std::cout << "*";
				}
			}
			else
			{
				for (int j = 0; j < (int)(triangle_width / 2) - i; j++)
				{
					std::cout << " ";
				}

				std::cout << "*";

				for (int j = 0; j < i * 2 - 1; j++)
				{
					std::cout << " ";
				}

				std::cout << "*";

				for (int j = 0; j < (int)(triangle_width / 2) - i; j++)
				{
					std::cout << " ";
				}
			}

			std::cout << " ";
		}

		std::cout << std::endl;
	}

	//       *
	//      * *
	//     *   *
	//    *     *
	//   *       *
	//  *         *
	// *           *
	//***************
}
