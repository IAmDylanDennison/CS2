//Dylan Dennison
//fileio lab 5

#include <iostream>
#include <fstream>


void readFile() {
std::ifstream file ("fileio-text.txt");

if(!file.is_open()) {
	std::cout << "Unable to open file" << std::endl;
}

else {
	char ch;
	file.get(ch);
while(ch != ' '){
	std::cout << ch;
	file.get(ch);
}
}

std::cout << std::endl;
file.close();

}



void addFile() {
std::ifstream file2 ("fileio-data-1.txt");

if(!file2.is_open()) {
	std::cout << "Unable to open file" << std::endl;
}

	
	int one = 0; 
	int two = 0;
	char ch;
	int rlt;
	
	file2 >> one;
	file2.get(ch);
	file2 >> two;
	
	rlt = one + two;
	
	
	std::cout << rlt << std::endl;



file2.close();
}






int main() {
readFile();
addFile();

}



