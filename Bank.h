#include "stdafx.h"
#ifndef BANK_H                           // avoid repeated expansion
#define BANK_H
#include "Account.h"
#include <string>				// provides string
#include <iostream>				// provides ostream
using namespace std;

class Bank : public Account {
public:
	Bank();
	// accessor functions
	void   setBankCredit(double d);
	double   getBankCredit();
	void   setBankDebit(double d);
	double   getBankDebit();

	void setRoutingNumber(double r);
	double getRoutingNumber();

private:                                	// private member data
	double   bankCredit;				// bank's credit
	double   bankDebit;				// bank's debit
	double routingNumber;
};
// print card information

#endif