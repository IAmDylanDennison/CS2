//test equal
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("a");
        String str2("a");
        // TEST
        bool result = (str == str2);

        // VERIFY
        assert(str    == "a");
        assert(str2 == "a");
        assert(result == true);
    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("a");
        String str2("s");
        // TEST
        bool result = (str == str2);

        // VERIFY
        assert(str    == "a");
        assert(str2 == "s");
        assert(result == false);
    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("a1b23c");
        String str2("a1b23c");
        // TEST
        bool result = (str == str2);

        // VERIFY
        assert(str    == "a1b23c");
        assert(str2 == "a1b23c");
        assert(result == true);
    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("100");
        String str2("a");
        // TEST
        bool result = (str == str2);

        // VERIFY
        assert(str    == "100");
        assert(str2 == "a");
        assert(result == false);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing Equality." << std::endl;
}

