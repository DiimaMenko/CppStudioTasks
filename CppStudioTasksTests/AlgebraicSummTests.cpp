#define _USE_MATH_DEFINES

#include <cmath>
#include "CppUnitTest.h"
#include "../CppStudioTasks/AlgebraicSumm.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppStudioTasksTests
{
    namespace Easy
    {
        TEST_CLASS(AlgebraicSummTests)
        {
        public:

            TEST_METHOD(SimplePositiveTest)
            {
                AlgebraicSumm s1;
                s1.SetN(1);
                s1.AddX(0, 0, 0, M_PI_4);
                s1.Calculate();

                Assert::AreEqual(0.0, s1.GetY());
            }

            TEST_METHOD(SecondPositiveTest)
            {
                AlgebraicSumm s1;
                s1.SetN(7);
                
                s1.AddX(0, 0, 0, M_PI_4);
                s1.AddX(1, 0, 0, M_PI_4);
                s1.AddX(0, 2, 0, M_PI_4);
                s1.AddX(0, 0, 3, M_PI_4);
                s1.AddX(1, 2, 0, M_PI_4);
                s1.AddX(1, 0, 3, M_PI_4);
                s1.AddX(0, 2, 3, M_PI_4);

                s1.Calculate();

                Assert::AreEqual(6.0, s1.GetY(), 0.00001);
            }

            //Enter values for X0:
            //Z = 123
            //A = 1234
            //B = 432
            //C = 0.727272
            //Enter values for X1:
            //Z = 444
            //A = 555
            //B = 4323
            //C = 0.7573463
            //
            //Y = 0
            TEST_METHOD(JustCustomTest)
            {
                AlgebraicSumm s1;
                s1.SetN(7);

                s1.AddX(123, 1234, 432, 0.727272);
                s1.AddX(444, 555, 4323, 0.7573463);
                s1.Calculate();
                Assert::AreEqual(91651474.600912392, s1.GetY(), 0.00001);
            }

        };
    }
}
