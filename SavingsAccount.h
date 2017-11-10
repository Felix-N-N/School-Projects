//
//  SavingsAccount.h
//  Project 1 CSCI 373
//
//  Created by Nicole Fuller on 10/19/17.
//  Copyright © 2017 Nicole Fuller. All rights reserved.
//
#include "stdafx.h"
#ifndef SAVINGSACCOUNT_h
#define SAVINGSACCOUNT_h
#include "Bank.h"
#include "Account.h"

class savingsAccount : public Bank
{
public:
	savingsAccount();
	void withdraw(double w);
	void deposit(double d);
	double checkBalance();
private:
	double accountBalance;
	void interestEarned(double interest);
};

#endif /* SavingsAccount_h */