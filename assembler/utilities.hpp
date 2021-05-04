#ifndef _UTILITIES_HPP_
#define _UTILITIES_HPP_

#include <iostream>
#include <fstream>
#include <vector>
#include "stack.hpp"
#include "string.hpp"


String toPostFix(const String&);
void toAssembly(const String&);
String evaluate(const String&, const String&, const String&, bool[]);
String intToString(const int);

#endif

