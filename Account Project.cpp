// Account Project.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "stdafx.h"
#include "Account.h"
#include "Bank.h"
#include "Checking.h"
#include "CreditCard.h"	
#include "SavingsAccount.h"

int main()
{
	savingsAccount sav;
	checkingAccount check;
	CreditCard cred;
	int sent = 0, sent2 = 0, i = 0;
	double deposit, withdraw, charge, pay;

	while (sent != -1)
	{
		cout << "What type of account would you like to use?\n" <<
			"For Savings, press 1. \nFor Checking, press 2. \nFor Credit Card, press 3."
			<< "\nTo end, press -1" << endl;
		cin >> sent;
		if (sent == 1)
		{
			cout << "What would you like to do with your Savings Account?" << endl
				<< "To Deposit, press 1. \nTo Withdraw, press 2. \nTo Print Balance, press 3."
				<< endl;
			cin >> sent2;
			if (sent2 == 1)
			{
				cout << "How much are you depositing in your Savings Account?" << endl;
				cin >> deposit;
				sav.deposit(deposit);
				cout << "Your balance is now: $" << sav.checkBalance() << endl;
			}
			else if (sent2 == 2)
			{
				cout << "How much would you like to withdraw from your Savings Account?" << endl;
				cin >> withdraw;
				sav.withdraw(withdraw);
				cout << "Your balance is now: $" << sav.checkBalance() << endl;
			}
			else if (sent2 == 3)
			{
				cout << "Your balance is: $" << sav.checkBalance() << endl;
			}
			else
			{
				cout << "Error!" << endl;
			}
		}
		else if (sent == 2)
		{
			cout << "What would you like to do with your Checking Account?" << endl
				<< "To Deposit, press 1. \nTo Withdraw, press 2. \nTo Print Balance, press 3."
				<< endl;
			cin >> sent2;
			if (sent2 == 1)
			{
				cout << "How much are you depositing in your Checking Account?" << endl;
				cin >> deposit;
				check.deposit(deposit);
				cout << "Your balance is now: $" << check.checkBalance() << endl;
			}
			else if (sent2 == 2)
			{
				cout << "How much would you like to withdraw from your Checking Account?" << endl;
				cin >> withdraw;
				check.withdraw(withdraw);
				cout << "Your balance is now: $" << check.checkBalance() << endl;
			}
			else if (sent2 == 3)
			{
				cout << "Your balance is: $" << check.checkBalance() << endl;
			}
			else
			{
				cout << "Error!" << endl;
			}
		}
		else if (sent == 3)
		{
			cout << "What would you like to do with your Credit Card?" << endl
				<< "To Charge money to the card, press 1. \nTo make a Payment, press 2. \nTo check ammount owed, press 3."
				<< endl;
			cin >> sent2;
			if (sent2 == 1)
			{
				cout << "How much is being charged to the Card?" << endl;
				cin >> charge;
				cred.chargeIt(charge);
				cout << "Your balance is: $" << cred.getBalance() << endl;
			}
			else if (sent2 == 2)
			{
				cout << "How much is the payment?" << endl;
				cin >> pay;
				cred.makePayment(pay);		
				cout << "Your balance is: $" << cred.getBalance() << endl;
			}
			else if (sent2 == 3)
				cout << "Your balance is: $" << cred.getBalance() << endl;
			else
			{
				cout << "Error!" << endl;
			}
		}
	}
	
	return 0;
}

