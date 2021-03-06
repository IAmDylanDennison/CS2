// Dylan Dennison
// implementaion file
// project 1 big int
// cs23001

#include "bigint.hpp"

bigint::bigint(){ //initializes all(default constructor)
	for (int i = 0; i < CAPACITY; ++i) //setting all elements to zero
		bigIntArray[i] = 0;
}

bool bigint::operator==(const bigint& rhs) const{ //equals operator, compares two instances of bigInt
   for (int i = 0; i < CAPACITY; ++i) {
	if(bigIntArray[i] != rhs.bigIntArray[i])
		return false;
   }
   return true;
}

bigint::bigint(int num): bigint() {             //puts each number in an element
for (int i = 0; i < CAPACITY; i++) {
	bigIntArray[i] = num % 10;
	num = num / 10;
}
}

bigint::bigint(const char charArray[]) : bigint() {  //takes charArray and puts it into bigIntArray
int arraySize = 0;

while(charArray[arraySize] != '\0'){
	++arraySize;
}
--arraySize;
for(int i = 0; arraySize >= 0; ++i, --arraySize){
	bigIntArray[i] = charArray[arraySize] - '0';
}
}

void bigint::debugPrint() const {  //prints array
for (int i = CAPACITY-1; i >= 0; --i){
	std::cout << bigIntArray[i] << "|";
}
}

std::ostream& operator<<(std::ostream& out, bigint rhs) { //outputs array in correct order
int count = 0;
bool check = false;
for(int i = CAPACITY-1; i >= 0; --i){

	if(rhs.bigIntArray[i] > 0)
		check = true;
	if(check == true){
		out << char(rhs.bigIntArray[i] + '0');
		++count;
	}
	if(count > 79) {
		out << std::endl;
		count = 0;
	}
}

return out;
}
std::istream& operator>>(std::istream& in, bigint& rhs) {
int count = 0;
bigint tmpBigInt;
char ch;

for(int i = 0; i < CAPACITY; i++){
	rhs.bigIntArray[i] = 0;
}

in >> ch;
while (ch != ';' && !in.eof()){
//std::cout << 'a' << std::endl;
tmpBigInt.bigIntArray[count] = ch - '0';
in >> ch;
count++;
}
for(int i = 0; i < CAPACITY; i++) {
	rhs.bigIntArray[i] = 0;
}
	
for(int i = 0; i < count; i++) {

	rhs.bigIntArray[i] = tmpBigInt[count-1-i];
}
return in;
}

bigint bigint::operator+(const bigint& addInt) { //adds two bigints together
int tmp = 0; 
int rem = 0; //remainder of last element
bigint result;
for(int i = 0; i < CAPACITY; i++){
	rem = bigIntArray[i] + addInt.bigIntArray[i] + rem;
	tmp = rem % 10;
	rem /= 10;
	result.bigIntArray[i] = tmp;
}
return result;
}

int bigint::operator[](int i) const {
if (i < 0 || i >= CAPACITY) return 0;
	return bigIntArray[i];
}
bigint bigint::timesDigit(int num) const {
bigint rlt;
int product = 0;
int rem = 0;
for (int i = 0; i < CAPACITY; i++)
	{
	rem = bigIntArray[i] * num + rem; //same logic as add operator
	product = rem % 10;
	rem /= 10;
	rlt.bigIntArray[i] = product;
	}
return rlt;
}

bigint bigint::times10(int num) const {

bigint ten;

for(int i = 0; i < CAPACITY - num; ++i)
	{
	ten.bigIntArray[num + i] = bigIntArray[i];
	}
	return ten;
}

bigint bigint::operator*(const bigint& multInt) const {

bigint product;
bigint tmp;
for(int i = 0; i < CAPACITY; i++) 
	{
	tmp = timesDigit(multInt.bigIntArray[i]); //follows pseudo code given
	product = product + tmp.times10(i);
	}
return product;
}

bigint bigint::factorial() const {

bigint product = 1;
for(int i = 1; !(*this == i); ++i){
	product = product * (i + 1);
}
int count = 0;
for(int i = 0; product[i] == 0; ++i){
	if(product[i] == 0){
	 ++count;
}
}
std::cout << count << std::endl;
return product;
}











