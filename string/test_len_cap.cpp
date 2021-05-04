//len cap test
#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {
    String one = "abc";
    
    int resultOne = one.length();
    int resultTwo = one.capacity();
    std::cout << "length: " << resultOne << std::endl;
    std::cout << "capacity: " << resultTwo << std::endl;
    assert(resultOne == 3);
    assert(resultTwo == 3);
 
	std::cout << "Done testing cap len" << std::endl;
}
