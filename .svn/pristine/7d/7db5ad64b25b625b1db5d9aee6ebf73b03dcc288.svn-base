// bigint Test Program
//
// Tests:  multiply, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 1);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(1);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 1);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(123);
        bigint right(56);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  123);
        assert(right  ==   56);
        assert(result == 6888);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(65);
        bigint right(321);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==    65);
        assert(right  ==   321);
        assert(result == 20865);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(9999);
        bigint right(2);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  9999);
        assert(right  ==     2);
        assert(result == 19998);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(2);
        bigint right(999999);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==       2);
        assert(right  ==  999999);
        assert(result == 1999998);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(99);
        bigint right(99);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   ==  99);
        assert(right  ==  99);
        assert(result ==  9801);
    }


    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("2222");
        bigint right("888888888888888888888888888888888888");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "2222");
        assert(right  == "888888888888888888888888888888888888");
        assert(result == "1975111111111111111111111111111111109136");
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("777777777777777777777777777777777777777777777");
        bigint right("333333");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "777777777777777777777777777777777777777777777");
        assert(right  == "333333");
        assert(result == "259258999999999999999999999999999999999999999740741");
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("111111111111111111111111111111111111111111");
        bigint right("999999999999999999999999999999999999999999");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "111111111111111111111111111111111111111111");
        assert(right  == "999999999999999999999999999999999999999999");
        assert(result == "111111111111111111111111111111111111111110888888888888888888888888888888888888888889");
    }
// MYTESTCASES
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(23);
        bigint right(23);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 23);
        assert(right  == 23);
        assert(result == 529);
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint left(5000);
        bigint right(1111);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 5000);
        assert(right  == 1111);
        assert(result == 5555000);
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint left("55555555555555555555");
        bigint right("2222222222222222222222222222");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "55555555555555555555");
        assert(right  == "2222222222222222222222222222");
        assert(result == "123456790123456790122222222209876543209876543210");
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint left("111111111111111111555555555222222");
        bigint right("555566666669888888844444444444");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "111111111111111111555555555222222");
        assert(right  == "555566666669888888844444444444");
        assert(result == "61729629629987654562967901050761604914975307940543219753234568");
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint left(2);
        bigint right(2);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 2);
        assert(right  == 2);
        assert(result == 4);
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint left("6666666669999999922244888555");
        bigint right("222233355554444856222111");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "6666666669999999922244888555");
        assert(right  == "222233355554444856222111");
        assert(result == "1481555704437076876049110192808200439342757521839605");
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint left(1213);
        bigint right(1213);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 1213);
        assert(right  == 1213);
        assert(result == 1471369);
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint left("444444444444448888888888888");
        bigint right("555222222266666666666666");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "444444444444448888888888888");
        assert(right  == "555222222266666666666666");
        assert(result == "246765432118520986172839406913876543167407407407408");
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint left(10);
        bigint right(1);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 10);
        assert(right  == 1);
        assert(result == 10);
    }
{
        //------------------------------------------------------
        // Setup fixture
        bigint left("5555555555555555222222222222222222266666666999");
        bigint right("25555555555555444444444444444");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "5555555555555555222222222222222222266666666999");
        assert(right  == "25555555555555444444444444444");
        assert(result == "141975308641974682839506172837074075209876551850982716049345790103703703556");
    }
    //Add test cases as needed.

    std::cout << "Done testing multiply" << std::endl;
}
