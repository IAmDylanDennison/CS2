// concat test
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str1("abcde");
        String str2("12345");

        // TEST
        String result = str1 + str2;
        std::cout << "concat result: " << result << std::endl;

        // VERIFY
        assert(str1  == "abcde");
        assert(str2 == "12345");
        assert(result == "abcde12345");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str1("987654321");
        String str2("abcdefg");

        // TEST
        String result = str1 + str2;
        std::cout << "concat result: " << result << std::endl;

        // VERIFY
        assert(str1  == "987654321");
        assert(str2 == "abcdefg");
        assert(result == "987654321abcdefg");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "done testing concat." << std::endl;
}
