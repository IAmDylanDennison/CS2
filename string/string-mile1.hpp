//File:        string-interface.hpp
//       
//Version:     1.0
//Date:        Fall 2019
//Author:      Dr. J. Maletic
//
//Description: Interface definition of String class for Project 2, milestone 1.
//
// To use the supplied test oracles you will need to use this interface and namings.
// You must also have all of these methods and functions defined for your string class.
//
// You will either have use this interface or call your methods through this interface.
//
// You need to implement all of the methods and funcitons declared here.
//

#ifndef CS23001_STRING_INTERFACE_HPP
#define CS23001_STRING_INTERFACE_HPP

#include <iostream>
#include <cassert>

const int STRING_SIZE = 256;                      //The size of the String.

////////////////////////////////////////////////////
// CLASS INV:   str[length()] == 0 &&
//              0 <= length() <= capacity() &&
//              capacity() == STRING_SIZE - 1
//
class String {
public:
            String        ();         //done            //Empty string
            String        (char);    //done             //Stirng('x')
            String        (const char[]);   //done      //String("abcd")
    char&   operator[]    (int);                //done  //Accessor/Modifier
    char    operator[]    (int)            const; //done //Accessor
    int     capacity      ()               const; //done //Max chars that can be stored (not including null terminator)
    int     length        ()               const; //done //Number of char in string
    String  operator+     (const String&)  const; //done //Concatenation
    bool    operator==    (const String&)  const; //done
    bool    operator<     (const String&)  const; //done
    String  substr(int , int) const;
    int 	  findch(int , char);
    int     findstr(int, const String&);


    friend  std::istream& operator>>(std::istream&, String&); //done
    friend  std::ostream& operator<<(std::ostream&, const String&); //done

private:
    char str[STRING_SIZE];
};

String  operator+       (const char[],  const String&); //done	
String  operator+       (char,          const String&); //done
bool    operator==      (const char[],  const String&); //done
bool    operator==      (char,          const String&); //done
bool    operator<       (const char[],  const String&); //done
bool    operator<       (char,          const String&); //done
bool    operator<=      (const String&, const String&); //done
bool    operator!=      (const String&, const String&); //done
bool    operator>=      (const String&, const String&); //done
bool    operator>       (const String&, const String&); //done

#endif








