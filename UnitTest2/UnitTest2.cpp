#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(4, solution(1, 3));
			Assert::AreEqual(4, solution(2,2));

		}

		TEST_METHOD(TestMethod2) {
			Assert::AreEqual(0, solution(1, 4));
		}

		TEST_METHOD(TestMethod3) {
			Assert::AreEqual(1, solution(1, 4));
		}
	};
}
