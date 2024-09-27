#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a = h(2, 3);
			Assert::AreEqual(a, 0.908613, 0.000001);

		}
	};
}
