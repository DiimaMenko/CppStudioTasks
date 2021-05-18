#include "CppUnitTest.h"
#include "../../../CppStudioTasks/Headers/VeryEasy/SimpleMath.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppStudioTasksTests
{
    namespace VeryEasy
    {
        TEST_CLASS(SimpleMathTests)
        {
        public:

            TEST_METHOD(SimpleStaticPositiveTest)
            {
                Assert::AreEqual(0.0, SimpleMath::CalculateFunction(1, 1, 1));
                Assert::AreEqual(150650250.89066908, SimpleMath::CalculateFunction(123.53, 44.1, 9872.456));
            }

            TEST_METHOD(ZeroDivision)
            {
                Assert::AreEqual(0.0, SimpleMath::CalculateFunction(0.0, 1, 1));
            }
        };
    }
}
