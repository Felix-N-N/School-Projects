#include "stdafx.h"
#ifndef CREDIT_CARD_H                           // avoid repeated expansion
#define CREDIT_CARD_H
#include <string>				// provides string
#include <iostream>				// provides ostream
#include "Account.h"
using namespace std;

class CreditCard : public Account 
{
public:
	CreditCard();
	// accessor functions
	void   setNumber(double no);
	double   getNumber() const { return number; }
	void   setName(string nm);
	string   getName() const { return name; }
	void    setBalance(double bal);
	double   	getBalance() const { return balance; }
	void       setLimit(double lim);
	double      	getLimit() const { return limit; }
	void 	setInterest(double lim);
	float 	getInterest() const { return interest;}

	void chargeIt(double price); 			// make a charge 
	void makePayment(double payment);		// make a payment

private:                                	// private member data
	double   number;				// credit card number
	string   name;				// card owner's name
	double       limit;				// credit limit
	double    	balance;			// credit card balance
	double 		interest;			// credit card's interest %
};
// print card information

#endif