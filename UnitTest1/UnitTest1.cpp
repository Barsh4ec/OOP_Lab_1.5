#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_Lab_1.5/Fraction.cpp"
#include "../OOP_Lab_1.5/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction d, c;
			int a = 5;
			int b = 6;	
			
			Assert::IsTrue(d.Init(a, b));
		}
	};
}
