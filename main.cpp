#include <iostream>
#include <iomanip>
#include "Money.h"



int main() {
	bool eval = true;
	//constant amounts to be deposited/withdrawn later
	Money initMoney(300,23);
	Money a(200,0);
	Money b(300,24);
	Money c(501,22);
	Money d(300,10);
	Money e(201,34);

//	Account account(initMoney);

//	std::cout << account << std::endl;

//	account.makeDeposit(a);
//	account.makeDeposit(b);
//	account.makeDeposit(c);

//	std::cout << account << std::endl;

//	account.makeWithdrawals(d);
//	account.makeWithdrawals(e);

//	std::cout << account << std::endl;


//verifies that the relational operators are working correctly.
// std::boolalpha and "#include <iomanip>" is here so that the bool value is printed as true/false and not 0/1 
	std::cout << std::boolalpha;

	std::cout << "When a is less than b:" << std::endl;
	std::cout << a <<" >  "<< b <<" is "<< (a >  b) << std::endl;
	std::cout << a <<" <  "<< b <<" is "<< (a <  b) << std::endl;
	std::cout << a <<" <= "<< b <<" is "<< (a <= b) << std::endl;
	std::cout << a <<" >= "<< b <<" is "<< (a >= b) << std::endl;
	std::cout << a <<" != "<< b <<" is "<< (a != b) << std::endl;
	std::cout << a <<" == "<< b <<" is "<< (a == b) << std::endl<<std::endl;

	std::cout << "When a is equal to b:" << std::endl;
	std::cout << b <<" >  "<< b <<" is "<< (b >  b) << std::endl;
	std::cout << b <<" <  "<< b <<" is "<< (b <  b) << std::endl;
	std::cout << b <<" <= "<< b <<" is "<< (b <= b) << std::endl;
	std::cout << b <<" >= "<< b <<" is "<< (b >= b) << std::endl;
	std::cout << b <<" != "<< b <<" is "<< (b != b) << std::endl;
	std::cout << b <<" == "<< b <<" is "<< (b == b) << std::endl<<std::endl;;

	std::cout << "When a is greater than b:" << std::endl;
	std::cout << b <<" >  "<< a <<" is "<< (b >  a) << std::endl;
	std::cout << b <<" <  "<< a <<" is "<< (b <  a) << std::endl;
	std::cout << b <<" <= "<< a <<" is "<< (b <= a) << std::endl;
	std::cout << b <<" >= "<< a <<" is "<< (b >= a) << std::endl;
	std::cout << b <<" != "<< a <<" is "<< (b != a) << std::endl;
	std::cout << b <<" == "<< a <<" is "<< (b == a) << std::endl<<std::endl;;



	return  0;
}
