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
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);  
    }

{
        //------------------------------------------------------
        // Setup fixture
        bigint bi(34345);

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 34345);  
    }

{
        //------------------------------------------------------
        // Setup fixture
        bigint bi("555556468484465555");

        // Test 
        bi = bi.timesDigit(5);

        // Verify
        assert(bi == "2777782342422327775");  
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint bi("4444444555588888656841254588");

        // Test 
        bi = bi.timesDigit(7);

        // Verify
        assert(bi == "31111111889122220597888782116");  
    }

{
        //------------------------------------------------------
        // Setup fixture
        bigint bi("555556468484465555");

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == "555556468484465555");  
    }

{
        //------------------------------------------------------
        // Setup fixture
        bigint bi("555556468484465555");

        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == 0);  
    }

{
        //------------------------------------------------------
        // Setup fixture
        bigint bi("44445581254555848555555");

        // Test 
        bi = bi.timesDigit(3);

        // Verify
        assert(bi == "133336743763667545666665");  
    }

{
        //------------------------------------------------------
        // Setup fixture
        bigint bi(1);

        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == 1);  
    }


    //Add test cases as needed.
    
    std::cout << "Done testing bigint * digit" << std::endl;


}









