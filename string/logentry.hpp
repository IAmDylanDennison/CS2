#ifndef CS_LOGENTRY_H_
#define CS_LOGENTRY_H_

////////////////////////////////////////////////////////////
//
// File:        logentry.hpp 
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class definition for a log entry.
//
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 


////////////////////////////////////////////////////////////
class Date { 
public:
	
	Date() : day(), month(), year(0) {}; //ctors
	std::vector<String> setDate(String);
	void pDate(std::ostream& out) const;      

private:
    String  day, month;
    int     year;
};

////////////////////////////////////////////////////////////
class Time {
  public:
     Time() : hour(0), minute(0), second(0) {};
	void setTime(std::vector<String>);
	void pTime(std::ostream& out) const;
  private:
    int     hour, minute, second;
};


////////////////////////////////////////////////////////////
class LogEntry {
public:
	LogEntry() {};
     LogEntry(String);
		
	String getHost()    const {return host;}
 	int getNumOfBytes() const {return number_of_bytes;};
 	void printContents(const std::vector<LogEntry> &) const;
		
		
	friend  std::ostream& operator<<(std::ostream&, const LogEntry&);

private:
    
    String  host;
    Date    date;
    Time    time;
    String  request;
    String  status;
    int     number_of_bytes;
};


////////////////////////////////////////////////////////////
//
// Free functions
//

std::vector<LogEntry>   parse(std::istream&);
void                    output_all(std::ostream&, const std::vector<LogEntry>&);
void                    by_host(std::ostream&, const std::vector<LogEntry>&);
int                     byte_count(const std::vector<LogEntry>&);
int                     toInt(String);
int                     pow(int, int);


#endif

