#include "CppUnitTest.h"
#include "../../../CppStudioTasks/Headers/Easy/AngleCalc.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppStudioTasksTests
{
    namespace Easy
    {
        TEST_CLASS(AngleCalcTests)
        {
            TEST_METHOD(SimplePositive)
            {
                AngleCalc a1(60, 12);
                a1.Calculate();
                Assert::AreEqual(1.37383, a1.GetAlpha(), 0.0001);
                Assert::AreEqual(78.7147, a1.GetAlphaDeg(), 0.0001);
            }
        };
    }
}