#include<iostream>
#include "Date.h"
#include<string>
//#include"Trip.h"
#include<vector>
using namespace std;
class Trip;
#ifndef USER_H
#define USER_H
class User
{
	string Name;
	Date DOB;
	string PhoneNumber;
	string Email;
	/*int sizeOftrips;*/
	vector<Trip*>T;
	/*trip* Trips;*/

	Trip* currentTrip;
public:
	int no_of_trips;
	User();
	User(string n,Date dob,string pNo, string mailID);
	void ChangeName(string s);
	void ChangeDOB(Date n);
	void ChangePhoneNo(string pNO);
	float GetAvgRating();
	~User();
};

#endif;