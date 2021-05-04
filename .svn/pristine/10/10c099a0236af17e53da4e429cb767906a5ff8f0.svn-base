#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE


        char A[5] = {'h','e','l','l','o'};
        
        String  str(A);

        // TEST
        char result = str[0];
        std::cout << "subscript result: " << result << std::endl;
        // VERIFY
        assert(str == String(A));
        assert(result == 'h');
    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE


        char A[5] = {'h','e','l','l','o'};
        
        String  str(A);

        // TEST
        char result = str[4];
        std::cout << "subscript result: " << result << std::endl;
        // VERIFY
         assert(result == 'o');
    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE
        
        String  str("he1lo");

        // TEST
        char result = str[1];
        std::cout << "subscript result: " << result << std::endl;
        // VERIFY
        assert(str == "he1lo");
        assert(result == 'e');
    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE

        
        String  str("hello");

        // TEST
        char result = str[1];
        std::cout << "subscript result: " << result << std::endl;
        // VERIFY
        assert(str == "hello");
        assert(result != 'h');
    }







    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "done testing subscript." << std::endl;
}









