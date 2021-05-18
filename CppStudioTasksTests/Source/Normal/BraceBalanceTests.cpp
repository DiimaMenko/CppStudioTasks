#include "CppUnitTest.h"
#include "../../../CppStudioTasks/Headers/Normal/BraceBalance.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppStudioTasksTests
{
    namespace Easy
    {
        TEST_CLASS(BraceBalanceTests)
        {
            TEST_METHOD(SimplePositive)
            {
                BraceBalance bb("Resources/Normal/BraceBalance/SimplePositive.txt");
                Assert::IsTrue(bb.Check(), L"Cannot open text file.");
                Assert::AreEqual("There are no any brace errors in this file. ", bb.GetResult().data());
            }
        };
    }
}