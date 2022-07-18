#include<iostream>
#include<string>
#include "user.h"
#include"Trip.h"
#include"PaymentMethods.h"

using namespace std;
#ifndef DRIVER_H
#define DRIVER_H
class Trip;
class Driver :public User
{
	string DLnumber;
	string VInumber;
public:
	Driver(string naam, Date d, string em, string pno, string dln, string vln);
	Driver(string, string);
	string GetName();
	void endARide();
	void pickARide(Trip* t);
	void ratePassenger(Trip* t, int r);
	float  getAvgRating();
	void SetDLnumber(string s);
	void SetVInumber(string s);
	string GetDLnumber();
	string GetVInumber();
	friend ostream& operator << (ostream& os, const Driver& d);
};

#endif;