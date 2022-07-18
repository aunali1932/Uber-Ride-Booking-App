#include <iostream>
#include<iostream>
using namespace std;
#ifndef PAYMENT_H
#define PAYMENt_H
class PaymentMethods
{
	string Type;
	string CardNumber;
public:
	PaymentMethods(string CN, string type) ;
	string GetCardNumber();
	void SetCardNumber(string cn);

};
#endif
