#include <iostream>
using namespace std;
class Date
{
public:
	void Print() { cout << year_ +" 년 " << month_+" 월 " << day_+" 일 " << endl; }
protected:
	int year_=2022;
	int month_=11;
	int day_=1;

};
class Time
{
public:
	void Print() { cout << hour_ + " 시 " << minute_ + " 분 " << second_ + " 초 " << endl; }
protected:
	int hour_=20;
	int minute_=21;
	int second_=40;

};
class DateTime : public Date , public Time
{
public:
	void Print() { Date::Print(); 
	Time::Print();
	cout << "오늘 할일은" + to_do_ << endl;
	}
private:
	char to_do_='x';

};