//Dylan Dennison
//multiply test
//cs23001


#include "bigint.hpp"
#include <fstream>

int main(){

	std::ifstream inFile("data1-2.txt");

  	bigint one;
	bigint two;

while (inFile >> one && inFile >> two && !inFile.eof()){
	
	std::cout << "bigint one:  " << one << std::endl;
	std::cout << "bigint two:  " << two << std::endl;

     bigint result = one * two;

	std::cout << "bigint result:  " << result << std::endl;

}
 
inFile.close();
return 0;

}
