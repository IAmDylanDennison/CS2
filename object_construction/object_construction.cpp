//Dylan Dennison
//.cpp file

#include "object_construction.hpp"



myClass::myClass() {
std::cout << "default ctor" << std::endl;

}


myClass::myClass(myClass& rhs) {
std::cout << "copy ctor" << std::endl;
}


myClass& myClass::operator=(myClass rhs) {
std::cout << "operator equals/assignment operator" << std::endl;
}

myClass::~myClass() {

std::cout << "destructor" << std::endl;
}
