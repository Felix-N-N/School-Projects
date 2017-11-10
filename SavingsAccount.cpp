//
//  SavingsAccount.cpp
//  Project 1 CSCI 373
//
//  Created by Nicole Fuller on 10/19/17.
//  Copyright © 2017 Nicole Fuller. All rights reserved.
//
#include "stdafx.h"
#include <iostream>
#include "SavingsAccount.h"

using namespace std;

void savingsAccount::deposit(double d)
{
	accountBalance = accountBalance + d;
}
savingsAccount::savingsAccount()
{
	accountBalance = 0;
}
void savingsAccount::withdraw(double w)
{
	accountBalance = accountBalance - w;
}
double savingsAccount::checkBalance()
{
	return accountBalance;
}
void savingsAccount::interestEarned(double interest)
{
	accountBalance = accountBalance + (accountBalance*interest);
}