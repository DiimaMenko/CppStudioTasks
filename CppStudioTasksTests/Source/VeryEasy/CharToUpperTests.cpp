#include "CppUnitTest.h"
#include "../../../CppStudioTasks/Headers/VeryEasy/CharToUpper.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppStudioTasksTests
{
    namespace VeryEasy
    {
        TEST_CLASS(CharToUpperTests)
        {
        public:

            TEST_METHOD(SimpleStaticPositiveTest)
            {
                Assert::AreEqual('A', CharToUpper::ToUpper('a'));
                Assert::AreEqual('P', CharToUpper::ToUpper('p'));
            }

            TEST_METHOD(SimpleStaticAlreadyUpperTest)
            {
                Assert::AreEqual('K', CharToUpper::ToUpper('K'));
            }

            TEST_METHOD(SimpleStaticNotLetterTest)
            {
                Assert::AreEqual('!', CharToUpper::ToUpper('!'));
            }
        };
    }
}
