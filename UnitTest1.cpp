#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

//ignore this function
/*float tester(float a, float b) {
	return a + b;
}
*/

namespace UnitTest1
{

	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			class example_class
			{
				// Public member functions public:
				int multiply();    // multiplies x and y
				int divide();    // divides y from x
				void PrintLargest();    // Prints greatest of x or y

				// Test Method
				friend void test();

				// Private member functions 
			private:
				int largest();         // Returns largest of x or y

				// Private member data 
				int x;
				int y;
			};
		}
	};
}
