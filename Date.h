#include<iostream>
#include <cstring>
using namespace std;
class Date
{
private:
	int d;
	int Month;
	int Year;
public:
	Date();
	Date(int, int, int);
	int getDay();
	int getMonth();
	int  getYear();
	void setDay(int n);
	void setMonth(int n);
	void setYear(int n);
	friend ostream& operator << (ostream& obj, Date date);
};
