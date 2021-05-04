// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4);  
        assert(digit == 4);
    }
    
    //MYTESTCASES
{
        // Setup
        bigint bi("22222222222343221423234578");

        // Test 
        int digit = bi[1];

        // Verify
        assert(bi    == "22222222222343221423234578");  
        assert(digit == 7);
    }
{
        // Setup
        bigint bi("874657329876");

        // Test 
        int digit = bi[4];

        // Verify
        assert(bi    == "874657329876");  
        assert(digit == 2);
    }
{
        // Setup
        bigint bi("73647367473628272938473839");

        // Test 
        int digit = bi[7];

        // Verify
        assert(bi    == "73647367473628272938473839");  
        assert(digit == 3);
    }
{
        // Setup
        bigint bi("33333333333333999999988888777222");

        // Test 
        int digit = bi[5];

        // Verify
        assert(bi    == "33333333333333999999988888777222");  
        assert(digit == 7);
    }
{
        // Setup
        bigint bi("2222222222222222222222222222222222");

        // Test 
        int digit = bi[15];

        // Verify
        assert(bi    == "2222222222222222222222222222222222");  
        assert(digit == 2);
    }
    
    

    std::cout << "Done testing subscript." << std::endl;
}

