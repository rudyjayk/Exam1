/*I affirm that all code given below was written solely by me, Rudyjay Keopuhiwa,
and that any help I received adhered to the rules stated for this exam.*/

#include "pch.h"
#include "CppUnitTest.h"
#include "..\Exam1\pickup.h"
#include "..\Exam1\sedan.h"
#include "..\\Exam1\racecar.h"
#include "..\\Exam1\vehicle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

//Test Cases for the code
//Tested mainly the boolean methods I have created in the Sedan and Pickup class 
//and made sure that they are returning true and false respectively

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test_addWeight_Method) //Tests the Pickup addWeight method
		{
			Pickup test1("Red",2000);
			Assert::AreEqual(test1.addWeight(2100), false); //Showing that we are expecting a false because of weight added is greater than weight capacity
		}
		TEST_METHOD(Test_addPassenger_Method) //Tests the Sedan addPassenger Method
		{
			Sedan test2("Blue", 2);
			test2.addPassenger();
			test2.addPassenger();
			Assert::AreEqual(test2.addPassenger(), false); //Expecting a False because there is no more room in the Sedan

		}
		TEST_METHOD(Test_addweight)//Testing the addWeight method again but test for a true argument
		{
			Pickup test3("Black",2000);
			Assert::AreEqual(test3.addWeight(1900), true); //Expect a true because weight added is less than weight capacity
		}
		TEST_METHOD(Test_addPassenger)//Testing the addPassenger method again but test for a true argument
		{
			Sedan test4("Silver", 3);
			test4.addPassenger();
			Assert::AreEqual(test4.addPassenger(), true);//Expecting a true because there is room for another passenger
		}
	};
}
