#include "pch.h"
#include "CppUnitTest.h"
#include "..\Exam1\pickup.h"
#include "..\Exam1\sedan.h"
#include "..\\Exam1\racecar.h"
#include "..\\Exam1\vehicle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test_addWeight_Method)
		{
			Pickup test1("Red",2000);
			Assert::AreEqual(test1.addWeight(2100), false);
		}
		TEST_METHOD(Test_addPassenger_Method)
		{
			Sedan test2("Blue", 2);
			test2.addPassenger();
			test2.addPassenger();
			Assert::AreEqual(test2.addPassenger(), false);

		}
		TEST_METHOD(Test_addweight)
		{
			Pickup test3("Black",2000);
			Assert::AreEqual(test3.addWeight(1900), true);
		}
		TEST_METHOD(Test_addPassenger)
		{
			Sedan test4("Silver", 3);
			test4.addPassenger();
			Assert::AreEqual(test4.addPassenger(), true);
		}
	};
}
