#include"PaymentMethods.h"
PaymentMethods::PaymentMethods(string CN, string type)
{
	Type = type;
	 CardNumber = CN;
}
string PaymentMethods::GetCardNumber()
{
	return CardNumber;
}
void PaymentMethods::SetCardNumber(string cn)
{
	CardNumber = cn;
}