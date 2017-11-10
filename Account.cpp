#include "stdafx.h"
#include "Account.h"				// provides Account
#include<iostream>
#include<string>
using namespace std;				// make std:: accessible
									

void Account::setAccountNumber(double no)
{
	accountNumber = no;
}

double Account::getAccountNumber()
{
	return accountNumber;
}

void Account::setAccountName(string nm)
{
	accountName = nm;
}

double Account::getAccountName()
{
	return accountNumber;
}


void Account::setAccountBalance(double bal)
{
	accountBalance = bal;
}

double Account::getAccountBalance()
{
	return accountBalance;
}