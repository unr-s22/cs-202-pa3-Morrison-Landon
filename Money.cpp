#include <iostream>
#include "Money.h"

//default constructor
Money::Money(){
	cents = 0;
}
//parameterized constructor
Money::Money(int newDollar, int newCent){
	cents = 100*newDollar + newCent;

}
// operator overloads:  <,>,<=,>=,!=,==
bool Money::operator < (const Money& other){
	return ( cents < other.cents ); 
}
bool Money::operator > (const Money& other){
	return ( cents > other.cents ); 
}
bool Money::operator <= (const Money& other){
	return ( cents <= other.cents ); 
}
bool Money::operator >= (const Money& other){
	return ( cents >= other.cents ); 
}
bool Money::operator != (const Money& other){
	return ( cents != other.cents ); 
}
bool Money::operator == (const Money& other){
	return ( cents == other.cents ); 
}

//operator overloads + and -
Money Money::operator+(const Money& other){
	Money newMoney;
	newMoney.cents = cents + other.cents;
	return newMoney;
}
Money Money::operator-(const Money& other){
	Money newMoney;
	newMoney.cents = cents - other.cents;
	return newMoney;
}

//operator overload <<
std::ostream &operator << (std::ostream &os, const Money &money){
	os << "$" << money.cents * 0.01 ;
	return os;
}

