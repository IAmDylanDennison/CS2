//Dylan Dennison
//2/7/20
//factorial challange .cpp



#include <iostream>
#include "bigint.hpp"



int main() {
	bigint bi = 100;

	bi.factorial();
	

	std::cout << "This works because you need to find how many 2s are in 100(100/2 = 50) which is not needed because there are varibles of not 10 in 50. So you need to find how many 5s are in 100(100/5 = 20). Also you need to know how many times 25s are in 100(100/25 = 4) because 5*5 is apart of (100/5) you add 20 + 4 and the answer turns out to be 24" << std::endl;
}

