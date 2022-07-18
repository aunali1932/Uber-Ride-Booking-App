#include < iostream> 
#include <vector>
#include"Trip.h"
#include "user.h"
#include "PaymentMethods.h"
using namespace std;
#ifndef PASSENGER_H
#define PASSENGER_H
class Passenger : public User
{
	vector <PaymentMethods> Payment_Methods;
public :
	Passenger(string naam, Date d, string em, string pno, PaymentMethods pm);
	void AddPaymentMethod(PaymentMethods P);
   void DeletePaymentMethod();
	Trip* BookRide(string a, string b);
	void CancelRide(); 
	void RateDriver(Trip* T,int r); 
	void GetAverageRating();
	friend ostream& operator << (ostream& outputobj, Passenger& p);
};
#endif