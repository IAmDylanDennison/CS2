//test char array ctor
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
        
        String  str("qwertyuiop");

        // VERIFY
        assert(str == "qwertyuiop");
     }
{
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        
        String  str("dylaniscool");

        // VERIFY
        assert(str == "dylaniscool");
    }

	{
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x[7] = {'a','b','c','d','1','2','3'};
        String  str(x);

        // VERIFY
        assert(str == String(x));
     }

    std::cout << "Done testing char array ctor" << std::endl;
    
    // ADD ADDITIONAL TESTS AS NECESSARY
    

}
