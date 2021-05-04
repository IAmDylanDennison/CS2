//Dylan Dennison
//lab infix2prefix

#include <iostream>
#include <vector>
#include <fstream>
#include "stack.hpp"
#include "string.hpp"




String toPreFix(const String& eLine) {

std::vector<String> token = eLine.split(' ');
  
	stack<String> result;

  	int size = token.size() - 1;
	int i = 0;

     while ((i < size) && (token[i] != ';')) {

         	String mainToken = token[i];

     if(mainToken == ")") {
		String right = result.pop();
    		String left = result.pop();
    		String oper = result.pop();
    		result.push(left + " " + oper + " " + right);
   	 }

  	else {
		if(mainToken != "(")
    			result.push(mainToken);
      }

    i++;
  }
  return result.pop();
}


int main(int argc, char *argv[]) {

  	if (argc < 2) {
    		std::cerr << "files needed" << std::endl;
  	}

	std::ifstream infixFile(argv[1]);

	if (argc == 2) {
		 String token;
     	 String infix;

      	while (!infixFile.eof()) {

		infixFile >> token;

	if (token != ";") {
	  	infix = infix + token + " ";

	}
	else {

	  	std::cout << infix << std::endl;
	  	String result = toPreFix(infix);
	  	std::cout << result << std::endl;
	  	infix = "";
		}

      	}
	}

}





