#include "CppUnitTest.h"
#include "../../../CppStudioTasks/Headers/Easy/AlgebraicSumm2.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppStudioTasksTests
{
    namespace Easy
    {
        TEST_CLASS(AlgebraicSumm2Tests)
        {
            TEST_METHOD(SimplePositive)
            {
                AlgebraicSumm2 s2(10, 2);
                s2.Calculate();
                Assert::AreEqual(285.0, s2.GetY(), 0.00001);
            }
            
            TEST_METHOD(Zero)
            {
                AlgebraicSumm2 s2(0, 0);
                s2.Calculate();
                Assert::AreEqual(0.0, s2.GetY(), 0.00001);
            }
            
            TEST_METHOD(Zero2)
            {
                AlgebraicSumm2 s2(50, 0);
                s2.Calculate();
                Assert::AreEqual(50.0, s2.GetY(), 0.00001);
            }
        };
    }
}