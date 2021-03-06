//Dylan Dennison
//Implementation file
//CS23001
//project 2 string

#include "string.hpp"

String::String() {
	stringSize = 1;
	str = new char[stringSize];
	str[0] = '\0';
	
}

String::String(char ch) {
	stringSize = 2;
	str = new char[stringSize];
	str[0] = ch;
	str[1] = '\0';
}

String::String(const char cChar[]) {
	stringSize = 0;
	while(cChar[stringSize] != '\0') {
		++stringSize;
	}
	++stringSize;

	str = new char[stringSize];

	for(int i = 0; i < stringSize-1; ++i) {
		str[i] = cChar[i];
	}

	str[stringSize-1] = '\0';
}

String::String(int x) : String() {
	resetCapacity(x);

}

String::String(int x, const char cArray[]) : String(cArray) {
	resetCapacity(x);
}

String::~String() { //destructor
	if(str != NULL);
	 delete[] str;
}

String::String(const String& rhs) { //copy constructor
	stringSize = rhs.stringSize;
	str = new char[stringSize];
	
	int i = 0;
	for(; i < stringSize; ++i) { // jon
		str[i] = rhs.str[i];
	}
 str[stringSize -1] = '\0';
}

void String::swap(String& rhs) { //swap func
	char * tmpSw = str;
	str = rhs.str;
	rhs.str = tmpSw;

	int tmpSize = stringSize;
	stringSize = rhs.stringSize;
	rhs.stringSize = tmpSize;


}

void String::resetCapacity(int size) {
	
	stringSize = size+1;
	char * new_str = new char[stringSize];
	
	for(int i = 0; i < stringSize; i++) {
		if(str[i] == '\0') {
			break;
		}
		new_str[i] = str[i];
	}
	new_str[stringSize - 1] = '\0';
	
	delete[] str;
	str = new_str;
}

String& String::operator=(String rhs) { //overload assignment
	swap(rhs);
	return *this;
}




char& String::operator[](int num) {
	if(num < 0) num = 0;
	else if (num > length()) num = length();
	return str[num];

}

char String::operator[](int num) const {
	if(num < 0) num = 0;
	else if (num > length()) num = length();
	return str[num];
}

int String::capacity() const {
return stringSize - 1;
} 

int String::length() const {
int i = 0;
while(str[i]!= '\0') {
	++i;
}
return i;
}

String String::substr(int start, int end) const {
	
	if(start < 0)
		start = 0;
	if(start > length())
		start = length() -1;
	if(end < 0)
		end = 0;
	if(end > length())
		end = length() -1;
	if(start > end) return "";

	String rlt(end-start+1);
	int i = 0;
	for(; i <= end - start; i++)
	{
		rlt.str[i] = str[i + start];
	}
	
	rlt.str[i] = '\0';
	return rlt;
}

int String::findch(int start, char c) const {
	if (!(start >= 0 && start < length())) {
		return -1;
	}

	int end = length()-1;

	
	for(int i = start; i <= end; i++)
	{
		
		if(str[i] == c)
		{
			return i;
		}
	}
	return -1;
}

int String::findstr(int pos, const String& target) const{
	
	while(pos <= length() - target.length()) {
		if (substr(pos, pos + target.length() - 1) == target)
			return pos;
		++pos;
	}	
	return -1;
	

}

String operator+(const char lhs[],  const String& rhs) {return String(lhs) + rhs;};

String operator+(char lhs,  const String &rhs) {return String(lhs) + rhs;};

String String::operator+(const String& rhs)  const{
	String result(str);
	int totalLen = length() + rhs.length();
	result.resetCapacity(totalLen);
	int offset = length();
	for(int i = 0; i < rhs.length(); ++i) {
		result[i+offset] = rhs[i];
	}
	result[totalLen] = '\0';
	return result;
}

String& String::operator+=(const String& rhs) {
	int totalLen = length() + rhs.length();
	resetCapacity(totalLen);
	int offset = length();
	for(int i = 0; i < rhs.length(); ++i) {
		str[i+offset] = rhs[i];
	}
	str[totalLen] = '\0';
	return *this;
}

bool operator==(const char lhs[], const String& rhs) {return String(lhs) == rhs;};

bool operator==(char lhs, const String& rhs) {return String(lhs) == rhs;};

bool String::operator==(const String& rhs) const {
int size1 = length();
int size2 = rhs.length();
if (size2 != size1) {
	
	return false;
}
else {
	for(int i = 0; i < size2; ++i) {
		if(str[i] != rhs.str[i]) {
			return false;
		}
	}
}
return true;

}


bool String::operator<(const String& rhs) const {


	int i = 0;
	while(str[i] == rhs.str[i] && str[i] != '\0' && rhs.str[i] != '\0'){
		++i;
	}

	return str[i] < rhs.str[i];
}

bool operator<(const char lhs[],  const String& rhs){
	return(String(lhs) < rhs);
		
}

bool operator<(char lhs, const String& rhs){
	return(String(lhs) < rhs);
		
}

bool operator<=(const String& lhs, const String& rhs) {
	return ((lhs < rhs) || (lhs == rhs));
}

bool operator!=(const String& lhs, const String& rhs) {
	return (!(lhs == rhs));
}

bool operator>=(const String& lhs, const String& rhs) {
	return ((lhs > rhs) || (lhs == rhs));
		
}

bool operator>(const String& lhs, const String& rhs) {
	return(!(lhs < rhs) && !(lhs == rhs));
		
}



std::ostream& operator<<(std::ostream& out, const String& rhs) {
	int index = 0;
	while(rhs.str[index] != 0) {
		out << rhs.str[index];
		++index;
}	
return out;
}

std::istream& operator>>(std::istream& in, String& rhs) {
	char temp[256];
	
	if(!in.eof()) {
		in >> temp;
		rhs = String(temp);
	}
	else {
		rhs = String();
		}
return in;
}


std::vector<String> String::split(char ch) const {
int start = 0; 
int end = 0;

std::vector<String> tmp;
 
	while(end != -1) 
	{
       	end = findch(start, ch);

		if(start == end) {
			tmp.push_back("");
		}
		else if(end != -1) {
			tmp.push_back(substr(start, end -1));
		}
		
		if(end == -1) {
			
		tmp.push_back(substr(start,length()));

		}
		

		start = end + 1;
	}


return tmp;


}

