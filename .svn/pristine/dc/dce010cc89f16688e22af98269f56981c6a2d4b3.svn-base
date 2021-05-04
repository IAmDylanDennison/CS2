#include "utilities.hpp"


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
	  	String result = toPostFix(infix);
	  	std::cout << result << std::endl;
	  	infix = "";
		}

      	}
	}	
	
	
	

  if (argc == 3) {

std::ofstream postfixFile(argv[2]);
      String token;
      String infix;

      while (!infixFile.eof()) {

		infixFile >> token;

	if (token != ";") {
	  	infix = infix + token + " ";

	}
	else {

	  	postfixFile << infix << std::endl;
	  	String result = toPostFix(infix);
	  	postfixFile << result << std::endl;
	  	infix = "";
	}

      }

      postfixFile.close();
    }

    	std::cout << "done" << std::endl;
    	infixFile.close();

    return 0;
  }


