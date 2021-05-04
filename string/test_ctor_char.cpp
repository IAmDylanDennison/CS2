
//char ctor
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('A');

        // VERIFY
        assert(str == 'A');
    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('G');

        // VERIFY
        assert(str == 'G');
    }

 	{
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('o');

        // VERIFY
        assert(str == 'o');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str(' ');

        // VERIFY
        assert(str == ' ');
    }



    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing char ctor." << std::endl;

}








