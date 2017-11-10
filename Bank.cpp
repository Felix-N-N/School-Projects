#include "stdafx.h"
#include "Bank.h"				// provides Bank

using namespace std;				// make std:: accessible
									// standard constructor


Bank::Bank()
{
	bankCredit = 0;
	bankDebit = 0;
	routingNumber = 0000;
}

void Bank::setBankCredit(double c)
{
	bankCredit = c;
}

double  Bank::getBankCredit()
{
	return bankCredit;
}
void Bank::setBankDebit(double d)
{
	bankDebit = d;
}

double Bank::getBankDebit()
{
	return bankDebit;
}


void Bank::setRoutingNumber(double r)
{
	routingNumber = r;
}

double Bank::getRoutingNumber()
{
	return routingNumber;
}

