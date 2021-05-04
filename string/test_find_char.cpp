// test findch
#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {

    {
        String one = "abcde";
        char two = 'd';
        
        int result = one.findch(0, two); 
        std::cout << "findCh result: " << result << std::endl;
        
        assert(result == 3);
    
    }



    {
        String one = "abcde";
        char two = 'c';
        
        int result = one.findch(0, two); 
        std::cout << "findCh result: " << result << std::endl;
        
        assert(result == 2);
    
    }

    {
        String one = "abcde1234";
        char two = '3';
        
        int result = one.findch(3, two); 
        std::cout << "findCh result: " << result << std::endl;
        
        assert(result == 7);
    
    }

    
    std::cout << "Done testing findCh" << std::endl;
}




