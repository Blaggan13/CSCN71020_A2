#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int *len, int *width);
extern "C" int getArea(int *len, int *width);
extern "C" void setLength(int input, int *len);
extern "C" void setWidth(int input, int *width);



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(BCSRecTests)
	{
	public:
		
		//This test methods checks the Perimeter of rectangle
		TEST_METHOD(getPerimeter_8and15_46)
		{
			int len = 8;
			int width = 15;

			int results;
			const int EXPECTED = 46;
			
			results = getPerimeter(&len, &width);

			//Checking if the value of Perimeter is equal to expected value
			Assert::AreEqual(EXPECTED, results);
		}

		//This test methods checks the area of rectangle
		TEST_METHOD(getArea_8and15_120)
		{
			int len = 8;
			int width = 15;

			int results;
			const int EXPECTED = 120;

			results = getArea(&len, &width);

			//Checking if the value of Area is equal to expected value
			Assert::AreEqual(EXPECTED, results);
		}

		//The following test methods checks the value of len(length)
		TEST_METHOD(setLength_1_1)
		{
			int len;
			int input = 1;
			
			setLength(input, &len);

			//Checking if the value of Length is equal to expected value
			Assert::AreEqual(len, input);
		}

		TEST_METHOD(setLength_99_99)
		{
			int len;
			int input = 99;

			setLength(input, &len);

			//Checking if the value of Length is equal to expected value
			Assert::AreEqual(len, input);
		}

		TEST_METHOD(setLength_98_notEqual)
		{
			int len;
			int input = 98;

			setLength(input, &len);

			//Checking if the value of Length is equal to expected value
			Assert::AreEqual(len, input);
		}

		//The following test methods checks the value of width
		TEST_METHOD(setWidth_1_1)
		{
			int width;
			int input = 1;

			setWidth(input, &width);

			//Checking if the value of Width is equal to expected value
			Assert::AreEqual(width, input);
		}


		TEST_METHOD(setWidth_99_99)
		{
			int width;
			int input = 99;

			setWidth(input, &width);

			//Checking if the value of Width is equal to expected value
			Assert::AreEqual(width, input);
		}

		TEST_METHOD(setWidth_100_notEqual)
		{
			int width;
			int input = 100;

			setWidth(input, &width);

			//Checking if the value of Width is equal to expected value
			Assert::AreEqual(width, input);
		}
	};
}
