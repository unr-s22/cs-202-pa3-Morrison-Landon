#ifndef MONEY_H
#define MONEY_H
#include <iostream>


class Money {
private	:
	int cents;

public:
	Money();
	Money(int newDollar, int newCent);
	// operator overloads:  <,>,<=,>=,!=,==
	bool operator < (const Money&);
	bool operator > (const Money&);
	bool operator <= (const Money&);
	bool operator >= (const Money&);
	bool operator != (const Money&);
	bool operator == (const Money&);

	//operator overloads:  < +,-
	Money operator + (const Money&);
	Money operator - (const Money&);

	//operator overloads: <<
	friend std::ostream &operator << (std::ostream &os, const Money &money);

};
#endif //MONEY_H
