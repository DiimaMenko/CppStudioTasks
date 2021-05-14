#include "CppUnitTest.h"
#include "../CppStudioTasks/BraceBalance.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppStudioTasksTests
{
    namespace Easy
    {
        TEST_CLASS(BraceBalanceTests)
        {
            TEST_METHOD(SimplePositive)
            {

                int a = 274 + 93;

                BraceBalance bb("SimplePositive.txt");
                Assert::IsTrue(bb.Check(), L"Cannot open text file.");
                Assert::AreEqual("There are no any brace errors in this file. ", bb.GetResult().data());
            }
        };
    }
}