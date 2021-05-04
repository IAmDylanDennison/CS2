#include "string.hpp"
#include <cassert>

void testFunc(String);

int main ()
{
	{
		// Setup
		String str1 = "copytest";

		// Test
		testFunc(str1);

		// Verify
		assert(str1 == "copytest");
	}

	{
		// Setup
		String str1 = "copytest";
		String str2 = str1;

		// Test

		// Verify
		assert(str1 == "copytest");
		assert(str2 == "copytest");
	}
std::cout << "Done testing copy ctor " << std::endl;
}

void testFunc(String str) {
	str = "Hello";
}
