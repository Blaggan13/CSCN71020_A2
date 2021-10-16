#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* len, int* width);
extern "C" int getArea(int* len, int* width);



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(BCSRecTests)
	{
	public:
		
		TEST_METHOD(Task_1_find_perimeter_8and15_46)
		{
			//Declaring variables
			int len = 8;
			int width = 15;

			//calling the function
			int results;
			const int EXPECTED = 46;
			
			results = getPerimeter(&len, &width);

			Assert::AreEqual(EXPECTED, results);
		}

		//This test methods checks the area of rectangle
		TEST_METHOD(Task_1_find_area_8and15_120)
		{
			//Declaring variables
			int len = 8;
			int width = 15;

			int results;
			const int EXPECTED = 120;

			//calling the function
			results = getArea(&len, &width);

			//Checking if the value of are is equal to expected value
			Assert::AreEqual(EXPECTED, results);
		}
	};
}
