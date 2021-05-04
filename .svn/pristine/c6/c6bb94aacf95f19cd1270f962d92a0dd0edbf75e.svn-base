//substring test
#include "string.hpp"
#include <cassert>
#include <iostream>

int main(){


    {
        String str = "abcdefg";
        String result1;
        String result2;
        String result3;
        
        result1 = str.substr(0,0);
        result2 = str.substr(3,6);
		std::cout << result2 << std::endl;
        
        assert(result1 == "a");
        assert(result2 == "defg");
        
        String strTwo = "Dylan is not the greatest at c++";
        
        result3 = strTwo.substr(0,4);
        assert(result3 == "Dylan"); 
    }


    std::cout << "done testing substr" << std::endl;


}
