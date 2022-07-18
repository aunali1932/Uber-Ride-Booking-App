#include "user.h"
User :: User() 
{
	Name = " ";
	PhoneNumber = " ";
	Email = " ";
	currentTrip = nullptr;
	/*sizeOftrips = 20;
	Trips = new Trip[sizeOftrips];*/
}
User::User(string n, Date dob, string pNo, string mailID) : Name(n), DOB(dob), PhoneNumber(pNo), Email(mailID)
{

}
void User::ChangeName(string s)
{
	
	Name = s ;
}
void User::ChangeDOB(Date n)
{
	DOB= n;

}
void User::ChangePhoneNo(string pNO)
{

	PhoneNumber = pNO;
}
float User::GetAvgRating()
{

}
User :: ~User()
{
	delete currentTrip;

}