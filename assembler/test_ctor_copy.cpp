#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "string.hpp"
int main() {

    //Test copy ctor
    
    	{
     	stack<int> test;
		test.push(1);
          stack<int> copyTest(test);
        
          assert(test.top() == copyTest.top()); 
     }



     {
          stack<char> test;
          test.push('a');
          stack<char> copyTest(test);
        
          assert(test.top() == copyTest.top()); 
     }


     {
          stack<char> test;
          test.push('b');
          test.push('a');
          stack<char> copyTest(test);
        
          assert(test.top() == copyTest.top()); 
     }  

     {
		stack<int> test;
          test.push(10002);
          test.push(3);
          stack<int> copyTest(test);
        
          assert(test.top() == copyTest.top()); 
     }


     {
          stack<String> test;
          test.push("abc");
          test.push("def");
          stack<String> copyTest(test);
        
          assert(test.top() == copyTest.top()); 
     }


     {
          stack<String> test;
          test.push("abc");
          test.push("def");
          test.push("123456789");
          stack<String> copyTest(test);
        
          assert(test.top() == copyTest.top()); 
     }


     {
          stack<String> test;
          test.push("abc");
          test.push("def");
          test.push("123456789");
          test.push("987654321");
          stack<String> copyTest(test);
        
          assert(test.top() == copyTest.top()); 
     }

std::cout << "Done testing copy ctor" << std::endl;
}





