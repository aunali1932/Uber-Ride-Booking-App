#include "Passenger.h"


Passenger::Passenger(string naam, Date d, string em, string pno, PaymentMethods pm) :User(naam, d, pno, em)
{
	AddPaymentMethod(pm);
}
void Passenger:: AddPaymentMethod(PaymentMethods P)
{
	Payment_Methods.push_back(P);
}
void Passenger::DeletePaymentMethod()
{
	
}
Trip* Passenger::BookRide(string a , string b)
{
    Trip* newTrip = new Trip();
    newTrip->SetPickUp(a);
    newTrip->SetDropOf(b);
   
   

    return newTrip;
}
void Passenger::CancelRide()
{
	// Checkingg if ride is already in progress or no


	if (currentTrip->GetStatus() == "Completed"){
		cout << "Trip Already in Progress!!!" ;
	}
	// if not then cancel it
	else{
		currentTrip->ChangeStatus("cancel");
		currentTrip = nullptr;
	}
	
}
void Passenger::RateDriver(Trip* T ,int r)
{
	if (r >= 0 || r <= 5)
		T.DriverRating = r;
	else
		cout << "Invalid Rating!!!";
}
void Passenger::GetAverageRating()
{

}

ostream& operator << (ostream& outputobj, Passenger& p) {

	outputobj << p.Name << endl;
	outputobj << p.DOB << endl;
	outputobj << p.Email << endl;
	outputobj << p.PhoneNumber << endl;
	outputobj << p.Payment_Methods << endl;

	return outputobj;
}

