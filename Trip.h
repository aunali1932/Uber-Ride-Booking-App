#include<iostream>
#include<string>
//#include "passenger.h"
//#include "Driver.h"
#include"Date.h"
using namespace std;
class Passenger;
class Driver;
#ifndef TRIP_H
#define TRIP_H
class Trip
{
	string StatusOfTrip;
	Driver* driver;
	Passenger* passenger;
	Date date;
	string DropOff;
	string Pickup;
	int DriverRating;
	int  PassengerRating;
	int sizeOfTrips;
	/*friend class Passenger;
	friend class Driver;*/
public:
	void ChangeStatus(string s);
	void RateDriver(int rating);
	void RatePassenger(int PRating);
	string GetStatus();
		void SetPickUp(string pick);
		void SetDropOf(string drop);
		void SetDriver(Driver* D);
		void SetPassenger(Passenger* P);
		friend ostream& operator<<(ostream& osobj, const Trip& T);
		~Trip();
};
#endif