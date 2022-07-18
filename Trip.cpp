#include "Trip.h"
Trip :: Trip()
{
	StatusOfTrip = "looking for driver";
	passenger = nullptr;
	driver = nullptr;

	DriverRating = 0;
	PassengerRating = 0;

	Pickup = "";
	DropOff = "";
	
}
void Trip::ChangeStatus(string s)
{
	StatusOfTrip = s;
}
void Trip::RatePassenger(int PRating)
{
	if (PRating > 0 && PRating <= 5)
		PassengerRating = PRating;
	else
		cout << "Invalid Rating";
}
void Trip::RateDriver(int rating)
{
	if (rating > 0 && rating <= 5)
	DriverRating = rating;
	else
		cout << "Invalid Rating";
}

 ostream& operator<<(ostream& osobj, const Trip& T)
{
	osobj << "status:  " << T.StatusOfTrip << endl;
	osobj << "date:  : " << T.date << endl;
	osobj << "driver:   " << T.driver->GetName() << endl;
	
	osobj << "dropoff : " << T.DropOff << endl;
	osobj << "pickup:   " << T.Pickup << endl;


}

void Trip::SetPickUp(string pick)
{
	Pickup = pick;
}
void Trip::SetDropOf(string drop)
{
	DropOff = DropOff;
}
void Trip::SetDriver(Driver* D)
{
	driver = D;
}
void Trip::SetPassenger(Passenger* P)
{
	passenger = P;
}
string Trip:: GetStatus()
{
	return StatusOfTrip;
}
Trip :: ~Trip()
{
	delete driver;
	delete passenger;
	driver = nullptr;
	passenger = nullptr;
}