#include "utilities.hpp" 



String toPostFix(const String& eLine) {
 
std::vector<String> token = eLine.split(' ');
  
	stack<String> result;

  	int size = token.size() - 1;
	int i = 0;

     while ((i < size) && (token[i] != ';')) {

         	String mainToken = token[i];

     if(mainToken == ")") {
		String right = result.pop();
    		String oper = result.pop();
    		String left = result.pop();
    		result.push(left + " " + right + " " + oper);
   	 }

  	else {
		if(mainToken != "(")
    			result.push(mainToken);
      }

    i++;
  }
  return result.pop();
}


String intToString(const int num) {
	char newChar = num + '0';

return String(newChar);
}


void toAssembly(const String& eline) {

stack<String> result;
std::vector<String> token = eline.split(' ');

  	String left;
	String right;

// had to make it unsigned because for some reason I was getting errors comparing size
  	unsigned int location = 0;

  	bool iter[token.size()]; //way to iterator through

  	for(unsigned int i = 0; i < token.size(); ++i) {
    		iter[i] = false;
}

  while((token.at(location) != " ") && (location < token.size() - 1)) {
    
      String op = token.at(location);
      ++location;

      if ((op != "*") && (op != "/") && (op != "+") && (op != "-"))
		result.push(op);

      else {

	right = result.pop();
	left  = result.pop();
	result.push(evaluate(left, right, op, iter));

      }

    }
}

String evaluate(const String& lhs, const String& rhs, const String& oper, bool iter[]) {

  	String result;
	String operC;
  	String load = "LD";
  	String store = "ST";
  
  	int i = 0;

  	while(iter[i]) 
   	  ++i;

  
  	iter[i] = true;

  	result = "TMP" + intToString(i + 1);

  	if (oper == "+")
   	  operC = "AD";

  	else if (oper == "-")
    	  operC = "SB";

  	else if (oper == "*")
    	  operC = "MU";

  	else if (oper == "/")
    	  operC = "DV";

  	else
       operC = "UN";

 
  std::cout << "    " << load << "          " << lhs << std::endl;
  std::cout << "    "  << operC << "          " << rhs << std::endl;
  std::cout << "    " << store << "          " << result << std::endl;
  
return result;
}









