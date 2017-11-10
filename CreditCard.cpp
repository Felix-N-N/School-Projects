#include "stdafx.h"
#include "CreditCard.h"				// provides CreditCard

using namespace std;				// make std:: accessible

CreditCard::CreditCard()
{
	number = 0000;
	name = " ";
	limit = 1000;
	balance = 0;
	interest = 0;
}

void CreditCard::setNumber(double no)
{
	number = no;
}
void CreditCard::setName(string nm)
{
	name = nm;
}
void CreditCard::setBalance(double bal)
{
	balance = bal;
}
void CreditCard::setLimit(double lim)
{
	limit = lim;
}
void CreditCard::setInterest(double lim)
{
	limit = lim;
}

class CCexception
{
public:
	CCexception::CCexception(const string& err)
	{
		errMsg = err;
	}
	string getError()
	{
		return errMsg;
	}
private:
	string errMsg;
};

void CreditCard::chargeIt(double price) {
	try {
		if (price + balance > limit)
			throw CCexception("Purchase over Credit Limit. Purchase denied.");				// over limit
		else
			balance += price;
	}
	catch(CCexception e)
	{
		cout << e.getError() << endl;
	}					// the charge goes through
}

void CreditCard::makePayment(double payment) {	// make a payment
	try {
		if (payment < 0)
			throw CCexception("Payment is negative number. Payment denied.");
		else if (balance - payment < 0)
			throw CCexception("Payment amount is more than balance. Payment denied.");
		else
			balance -= payment;
	}
	catch (CCexception e)
	{
		cout << e.getError() << endl;
	}
}


