#include "Date.h"
Date :: Date()
{
    time_t tmNow;
    tmNow = time(NULL);
    struct tm t = *localtime(&tmNow);
    d = t.tm_mday;
    Month = t.tm_mon + 1;
    Year = t.tm_year + 1900;
}
ostream& operator << (ostream& obj, Date date)
{
	obj << "Date: " <<  date.d << endl;
	obj << "Month: " << date.Month << endl;
	obj << "Year" << date.Year << endl;
}
Date :: Date(int x, int y, int z)
{
	d = x;
	Month = y;
	Year = z;
}
void Date::setDay(int n)
{
	if (n <= 31 && n >= 1)
		d = n;
	else
	{
		Month += 1;
		d = n - 30;
	}
}
void Date::setYear(int n)
{
	Year = n ;
}
void Date::setMonth(int n)
{
	if (n >= 1 && n <= 12)
		Month = n;
	else
		cout << "Month can be only between 1 and 12" << endl;
}

int Date::  getDay()
{
	return  d;
}
int Date :: getMonth()
{
	return Month;
}
int Date::  getYear()
{
	return Year;
}