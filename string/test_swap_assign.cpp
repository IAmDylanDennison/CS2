#include "string.hpp"
#include <cassert>


int main ()
{
	{
		// Setup
		String str1 = "Nah he is just alright";
		String str2 = "Dylan is pretty cool";

		// Test
		str1.swap(str2);

		// Verify
		assert(str1 == "Dylan is pretty cool");
		assert(str2 == "Nah he is just alright");
	}

     {
		// Setup
		String str1 = "one";
		String str2 = "two";

		// Test
		str1.swap(str2);

		// Verify
		assert(str1 == "two");
		assert(str2 == "one");
	}

std::cout << "Done testing swap" << std::endl;
}


