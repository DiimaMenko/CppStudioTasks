#include "CppUnitTest.h"
#include "../../../CppStudioTasks/Headers/Easy/Power.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppStudioTasksTests
{
    namespace Easy
    {
        TEST_CLASS(PowerTests)
        {
        public:
            TEST_METHOD(SimplePositiveTest1)
            {
                Assert::AreEqual(6987.71242969, Power::Pow(5, 5.5), 0.0001);
            }
            
            TEST_METHOD(SimplePositive2Test)
            {
                Assert::AreEqual(5.0, Power::Pow(5, 1), 0.0001);
            }

            TEST_METHOD(SimplePositive3Test)
            {
                Assert::AreEqual(1.0, Power::Pow(5, 0), 0.0001);
            }

            TEST_METHOD(SimplePositive4Test)
            {
                Assert::AreEqual(0, Power::Pow(0, 6.0002), 0.0001);
            }
        };
    }
}