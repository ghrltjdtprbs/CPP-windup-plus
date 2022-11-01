#include <iostream>
using namespace std;

class Date
{
public:
	void Print() {  }
protected:
	int year_ ;
	int month_ ;
	int day_ ;

};
class Time
{
public:
	void Print() {  }
protected:
	int hour_ ;
	int minute_ ;
	int second_ ;

};
class DateTime : public Date, public Time
{
public:
	void Print() {
		Date::Print();
		Time::Print();
		
	}
private:
	char to_do_ ;

};
