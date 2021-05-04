//==============================================================================
// Basics for openning a file for milestone 2 of Project 1.
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in("data1-1.txt");    // Define stream for input
    if(!in) {                           // Make sure it opened correctly.
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }
bigint bi;
bigint biTwo;


while(in >> bi && in >> biTwo) {

std::cout << "First BigInt: " << bi << std::endl;
std::cout << "Second BigInt: " << biTwo << std::endl;

bigint result = bi + biTwo;

std::cout << "BigInt Results: " << result << std::endl;
}
    
    //Until end of file
       //Read two bigints
       //Print them out
       //Add them together
       //Print out results

 
    in.close();
    return 0;
}

