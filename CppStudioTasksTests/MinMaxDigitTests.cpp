#include "CppUnitTest.h"
#include "../CppStudioTasks/MinMaxDigit.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppStudioTasksTests
{
    namespace Easy
    {
        TEST_CLASS(MinMaxDigitTests)
        {
            TEST_METHOD(SimplePositive)
            {
                unsigned int expected_max = 9;
                unsigned int expected_min = 1;

                MinMaxDigit d1(19836);
                d1.Calculate();
                Assert::AreEqual(expected_max, d1.GetMax());
                Assert::AreEqual(expected_min, d1.GetMin());
            }

            TEST_METHOD(SimplePositive2)
            {
                unsigned int expected_max = 0;
                unsigned int expected_min = 0;

                MinMaxDigit d1(0);
                d1.Calculate();
                Assert::AreEqual(expected_max, d1.GetMax());
                Assert::AreEqual(expected_min, d1.GetMin());
            }
        };
    }
}