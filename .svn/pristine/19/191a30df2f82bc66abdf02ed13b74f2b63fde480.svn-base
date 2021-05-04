// bigint Test Program
//
// Tests:  int constructor, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

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
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }

//MY TESTS

{
      //------------------------------------------------------
      // Setup fixture
      bigint left(123456789);
      bigint right(123456789);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 123456789);
      assert(right  == 123456789);
      assert(result == 246913578);
    }

{
      //------------------------------------------------------
      // Setup fixture
      bigint left("1111111111111111111");
      bigint right("1111111111111111111");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "1111111111111111111");
      assert(right  == "1111111111111111111");
      assert(result == "2222222222222222222");
    }
{
      //------------------------------------------------------
      // Setup fixture
      bigint left("1234567891234567891");
      bigint right("1234567891234567891");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "1234567891234567891");
      assert(right  == "1234567891234567891");
      assert(result == "2469135782469135782");
    }
{

      //------------------------------------------------------
      // Setup fixture
      bigint left("98765432198765432199");
      bigint right("98765432198765432199");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "98765432198765432199");
      assert(right  == "98765432198765432199");
      assert(result == "197530864397530864398");
    }
{

      //------------------------------------------------------
      // Setup fixture
      bigint left(60);
      bigint right(2);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 60);
      assert(right  == 2);
      assert(result == 62);
    }
{

      //------------------------------------------------------
      // Setup fixture
      bigint left("55555555555555555555");
      bigint right("66666666666666666666");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "55555555555555555555");
      assert(right  == "66666666666666666666");
      assert(result == "122222222222222222221");
    }

{

      //------------------------------------------------------
      // Setup fixture
      bigint left("6666666555555555555555555555555555");
      bigint right("6666666666666666666666668888888888888888888");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "6666666555555555555555555555555555");
      assert(right  == "6666666666666666666666668888888888888888888");
      assert(result == "6666666673333333222222224444444444444444443");
    }
{

      //------------------------------------------------------
      // Setup fixture
      bigint left("7777777788888888885555552222211");
      bigint right("11111111555555588888844444");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "7777777788888888885555552222211");
      assert(right  == "11111111555555588888844444");
      assert(result == "7777788900000444441144441066655");
}
{
//#9
      //------------------------------------------------------
      // Setup fixture
      bigint left("7777777777777777777777777444444444441111111445555555");
      bigint right("66666665555555555500000");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "7777777777777777777777777444444444441111111445555555");
      assert(right  == "66666665555555555500000");
      assert(result == "7777777777777777777777777444511111106666667001055555");
}
{
//#10
      //------------------------------------------------------
      // Setup fixture
      bigint left(11);
      bigint right(11);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 11);
      assert(right  == 11);
      assert(result == 22);
}
{
//#11
      //------------------------------------------------------
      // Setup fixture
      bigint left("222222222222222222222555554871");
      bigint right("5555522222222233333366666666666");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "222222222222222222222555554871");
      assert(right  == "5555522222222233333366666666666");
      assert(result == "5777744444444455555589222221537");
}
{
//#12
      //------------------------------------------------------
      // Setup fixture
      bigint left(255);
      bigint right(147);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 255);
      assert(right  == 147);
      assert(result == 402);
}
{
//#13
      //------------------------------------------------------
      // Setup fixture
      bigint left("111111111111111111111111111111");
      bigint right("999999999999999999999999999999");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "111111111111111111111111111111");
      assert(right  == "999999999999999999999999999999");
      assert(result == "1111111111111111111111111111110");
}
{
//#14
      //------------------------------------------------------
      // Setup fixture
      bigint left("7777778888899994444555");
      bigint right("1111111555559999966666");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "7777778888899994444555");
      assert(right  == "1111111555559999966666");
      assert(result == "8888890444459994411221");
}
{
//#15
      //------------------------------------------------------
      // Setup fixture
      bigint left("11111111111111111111111111111");
      bigint right("555555555555555555555555555555555");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "11111111111111111111111111111");
      assert(right  == "555555555555555555555555555555555");
      assert(result == "555566666666666666666666666666666");
}

    
    
    //Add test cases as needed.
    
    
    std::cout << "Done with testing addition." << std::endl;
}

