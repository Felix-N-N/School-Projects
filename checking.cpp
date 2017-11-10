//
//  checking.cpp
//  Project 1 CSCI 373
//
//  Created by Kelvin Ramphaul on 10/20/17.
//  Copyright (c) 2017 Kelvin Ramphaul. All rights reserved.
//
#include "stdafx.h"
#include <iostream>
#include "Checking.h"
using namespace std;


void checkingAccount:: deposit (double d)
{
    checkingAccountBalance= checkingAccountBalance+d;
}

checkingAccount::checkingAccount()
{
	checkingAccountBalance = 0;
}

void checkingAccount::withdraw (double w)
{
    checkingAccountBalance=checkingAccountBalance-w;
}
void checkingAccount:: monthlyFeeAdd (float fee)
{
    checkingAccountBalance=checkingAccountBalance-fee;
}
double checkingAccount::checkBalance()
{
    return checkingAccountBalance;
}