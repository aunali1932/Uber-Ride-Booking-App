#include "Driver.h"
Driver :: Driver(string dln ="", string vin = "")
{
	DLnumber = dln;
	VInumber = vin;
}

Driver::Driver(string naam, Date d, string em, string pno, string dln ,string vln) :User(naam, d, pno, em)
{
	DLnumber = dln;
	VInumber = vln;
}

string Driver::GetDLnumber()
{
	return DLnumber;
}



void Driver::SetVInumber(string s)
{
    VInumber = s;
}


ostream& operator << (ostream& os, const Driver& d)
{
	os << d.Name << endl;
	os << d.DOB << endl;
	os << d.Email << endl;
	os << d.PhoneNumber << endl;
	os << d.DLnumber << endl;
	os << d.VInumber << endl;
}



void Driver::SetDLnumber(string s)
{
	DLnumber = s;
}
void Driver::pickARide(Trip* trippp)
{
	
	currentTrip = trippp;
		T.push_back(trippp);
		
		trippp->ChangeStatus("Started");
		trippp->SetDriver(this);

}

void Driver::endARide()
{
	currentTrip.ChangeStatus("Completed");
	currentTrip = nullptr;
}


string Driver::GetVInumber()
{
	return VInumber;
}


string  GetName()
{
    return Name;
}

void Driver::ratePassenger(Trip* T1, int n)
{
	T1->RatePassenger(n);
}