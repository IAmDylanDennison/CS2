//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp"
#include "logentry.hpp"






////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//

std::vector<String> Date::setDate(String rhs) {
	std::vector<String> date = rhs.split('/');
	date[0] = (date[0].split('['))[1];
	std::vector<String> tVec = date[2].split(':');
	day = date[0];
	month = date[1];
	year = toInt(tVec[0]);
	
return tVec;
}

void Time::setTime(std::vector<String> rhs) {
	
	hour = toInt(rhs[1]);
	minute = toInt(rhs[2]);
	second = toInt(rhs[3]);
	}


std::ostream& operator<<(std::ostream& out, const LogEntry& rhs) {
	out << rhs.host << " ";
	rhs.date.pDate(out);
	out << " ";
	rhs.time.pTime(out);
	out << " ";
	out << rhs.request << " ";
	out << rhs.status << " ";
	out << rhs.number_of_bytes;

return out;
}

	

LogEntry::LogEntry(String s) {
    // ...
    
    std::vector<String> vec = s.split(' ');
    
     if(vec.size() != 10) {
	        host = "";
		request = "";
		status = "";
		number_of_bytes = 0;
	}
	else{
		
	
		host = vec[0];
		time.setTime(date.setDate(vec[3]));
		status = vec[8];
		request = vec[5] + vec[6] + vec[7];
		if((vec[9]) == '-') {
			number_of_bytes = 0;
		}
		else {
		
			number_of_bytes = toInt(vec[9]);
		}
	}	
			
}

void Date::pDate(std::ostream& out) const {
	out << day << " " << month << " " << year;
}


void Time::pTime(std::ostream& out) const {
	out << hour << " " << minute << " " << second;
}



////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
std::vector<LogEntry> parse(std::istream& in) {
     std::vector<LogEntry> result;
	String s;
	
	char tmp[800];

	while(!in.eof()) {
	if(in.eof()) break;
	in.getline(tmp, 800);

	s = tmp;
	
	std::cout << std::endl;

	if(s.length() > 0) {

	LogEntry log(s);

	result.push_back(log);

	}
	
}
	    return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry> & vec) {
    	for(int i = 0; i < vec.size(); ++i)
		out << vec[i] << std::endl;
	
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry>& rhs) {
   	int index = 0;
		while(index < int(rhs.size())) {
			out << rhs[index].getHost() << std::endl;
			++index;
		
		}
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
int byte_count(const std::vector<LogEntry> & rhs) {
	int index = 0;
	int result = 0;
		while(index < int(rhs.size())) {
			result = result + rhs[index].getNumOfBytes();
			++index;
		}
    
return result;
}


int toInt(String rhs) {
int index = 0;
int result = 0;
int mult = 10;

	while(index < rhs.length()) {
		result = result * mult + (rhs[index] - '0');
		++index;
	}

return result;
}














