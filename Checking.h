//
//  checking.h
//  Project 1 CSCI 373
//
//  Created by Kelvin Ramphaul on 10/20/17.
//  Copyright (c) 2017 Kelvin Ramphaul. All rights reserved.
//
#include "stdafx.h"
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "Bank.h"
#include "Account.h"

class checkingAccount : public Bank
{
public:
	checkingAccount();
	void withdraw(double w);
	void monthlyFeeAdd(float fee);
	void deposit(double d);
	double checkBalance();

private:
	double checkingAccountBalance;

};
#endif