//Dylan Dennison
//split test


#include "string.hpp"
#include <cassert>




int main() {

 {	
	//SETUP FIXTURE

	String str("asd fgh");
	
	String str2 = "asd";
	String str3 = "fgh";

	//TEST

	std::vector<String> result = str.split(' ');

	//VERIFY
	
	assert(str == "asd fgh");
	assert(str2 == result[0]);
	assert(str3 == result[1]);
 }
	

 {	
	//SETUP FIXTURE

	String str("dylan-is-cool-yo");
	
	String str2 = "dylan";
	String str3 = "is";
	String str4 = "cool";
	String str5= "yo";

	//TEST

	std::vector<String> result = str.split('-');

	//VERIFY
	
	assert(str == "dylan-is-cool-yo");
	assert(str2 == result[0]);
	assert(str3 == result[1]);
	assert(str4 == result[2]);
	assert(str5 == result[3]);
	
 }


	std::cout << "Done testing split" << std::endl;

}














