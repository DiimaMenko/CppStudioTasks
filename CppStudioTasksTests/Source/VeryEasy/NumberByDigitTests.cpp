#include "CppUnitTest.h"
#include "../../../CppStudioTasks/Headers/VeryEasy/NumberByDigit.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppStudioTasksTests
{
    namespace VeryEasy
    {
        TEST_CLASS(NumberByDigitTests)
        {
        public:

            TEST_METHOD(SimplePositiveTest)
            {
                NumberByDigit a1(47382);
                Assert::AreEqual((size_t)5, a1.GetDigits().size());
                Assert::IsTrue(a1.GetDigits()[0] == 4);
                Assert::IsTrue(a1.GetDigits()[1] == 7);
                Assert::IsTrue(a1.GetDigits()[2] == 3);
                Assert::IsTrue(a1.GetDigits()[3] == 8);
                Assert::IsTrue(a1.GetDigits()[4] == 2);
            }

            TEST_METHOD(SetNewNumber)
            {
                NumberByDigit a1(47382);
                Assert::AreEqual((size_t)5, a1.GetDigits().size());
                Assert::IsTrue(a1.GetDigits()[2] == 3);
                a1.SetNumber(517159);
                Assert::AreEqual((size_t)6, a1.GetDigits().size());
                Assert::IsTrue(a1.GetDigits()[5] == 9);
            }

            TEST_METHOD(SimpleStaticMethodPositiveTest)
            {
                auto result = NumberByDigit::GetDigits(47382);
                Assert::AreEqual((size_t)5, result.size());
                Assert::IsTrue(result[0] == 4);
                Assert::IsTrue(result[1] == 7);
                Assert::IsTrue(result[2] == 3);
                Assert::IsTrue(result[3] == 8);
                Assert::IsTrue(result[4] == 2);
            }
        };
    }
}
