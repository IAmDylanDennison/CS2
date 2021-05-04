// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(0);

        // Verify
        assert(bi == 3);  
    }

{
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(2);

        // Verify
        assert(bi == 300);  
    }

{
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(4);

        // Verify
        assert(bi == 30000);  
    }
    
{
        //------------------------------------------------------
        // Setup fixture
        bigint bi("6646441548515815");

        // Test 
        bi = bi.times10(5);

        // Verify
        assert(bi == "664644154851581500000");  
    }
{


        //------------------------------------------------------
        // Setup fixture
        bigint bi("5464545121555534553445555");

        // Test 
        bi = bi.times10(0);

        // Verify
        assert(bi == "5464545121555534553445555");  
    }

{


        //------------------------------------------------------
        // Setup fixture
        bigint bi("5464545121555534553445555");

        // Test 
        bi = bi.times10(9);

        // Verify
        assert(bi == "5464545121555534553445555000000000");  
    }
    
{


        //------------------------------------------------------
        // Setup fixture
        bigint bi("54223878498839948599039499401");

        // Test 
        bi = bi.times10(11);

        // Verify
        assert(bi == "5422387849883994859903949940100000000000");  
    }
{


        //------------------------------------------------------
        // Setup fixture
        bigint bi("54223878498839948599039499401");

        // Test 
        bi = bi.times10(2);

        // Verify
        assert(bi == "5422387849883994859903949940100");  
    }
{


        //------------------------------------------------------
        // Setup fixture
        bigint bi(1);

        // Test 
        bi = bi.times10(20);

        // Verify
        assert(bi == "100000000000000000000");  
    }
    //Add test cases as needed.

    std::cout << "Done testing times_10" << std::endl;
}

