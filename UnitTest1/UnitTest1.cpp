#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 4.5/Pair.h"
#include "..//OOP Lab 4.5/Money.h"
#include "..//OOP Lab 4.5/Money.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money m1(2, 4);
			long x = 2;
			Assert::AreEqual(x, m1.getHryvnya());
		}
	};
}
