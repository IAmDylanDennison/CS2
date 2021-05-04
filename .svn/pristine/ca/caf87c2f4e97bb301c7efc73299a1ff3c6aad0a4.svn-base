//Dylan Dennison
//Project 1 big int
// CS23001
// headerfile

#ifndef BIGINT_H_
#define BIGINT_H_

#include <iostream>

const int CAPACITY = 400;
class bigint {
public:
bigint();
bigint(int);
bigint(const char[]);
void debugPrint() const;
bigint timesDigit(int) const;
bigint times10(int) const;
bool operator==(const bigint&) const;
int operator[](int) const;
bigint operator*(const bigint&) const;
bigint operator+(const bigint&);
bigint factorial() const;
friend std::istream& operator>>(std::istream&, bigint&);
friend std::ostream& operator<<(std::ostream&, bigint);
private:
int bigIntArray[CAPACITY]; //i is cap unlike class name
};

#endif

