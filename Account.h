#include "stdafx.h"
#ifndef ACCOUNT_H                          // avoid repeated expansion
#define ACCOUNT_H
#include <string>				// provides string
#include <iostream>				// provides ostream
using namespace std;

class Account {
public:
  						// accessor functions
  						
  void   setAccountNumber(double no);
  double   getAccountNumber();
  
  void setAccountName(string nm);
  double   getAccountName();
  
  void setAccountBalance(double bal);
  double 	getAccountBalance();

  

private:                                	// private member data
  double   accountNumber;				// account's number
  string   accountName;				// account's name
  double   accountBalance;			// account balance
};

#endif