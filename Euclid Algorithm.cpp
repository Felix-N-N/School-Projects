// Euclid Algorithm.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;

int gcd(int r1, int r2)
{
	int div = 1, i = 1, ri, rip, ripp;
	cout << "Trace Table: " << endl << "i \tQi \tRi \tRi+1 \tRi+2" << endl;
	if (r1 == r2)
	{
		cout << "The Greatest Common Divisor for " << r1 << " & " << r2 << " is: ";
		return r2;
	}
	else if (r1 > r2)
	{
		ri = r1%r2;
		cout << i << "\t" << r1 / r2 << "\t" << r1 << "\t" << r2 << "\t" << ri << endl;
		if (ri > 0)
		{
			i++;
			rip = r2%ri;
			cout << i << "\t" << r2 / ri << "\t" << r2 << "\t" << ri << "\t" << rip << endl;
		}
		else
		{
			return r2;
		}
		while (rip > 0)
		{
			i++;
			ripp = ri%rip;
			cout << i << "\t" << ri / rip << "\t" << ri << "\t";
			ri = rip;
			rip = ripp;
			cout << ri << "\t" << rip << endl;
		}
		div = ri;
	}
	else if (r2 > r1)
	{
		ri = r2%r1;
		cout << i << "\t" << r2 / r1 << "\t" << r2 << "\t" << r1 << "\t" << ri << endl;
		if (ri > 0)
		{
			i++;
			rip = r1%ri;
			cout << i << "\t" << r1 / ri << "\t" << r1 << "\t" << ri << "\t" << rip << endl;
		}
		else
		{
			return r1;
		}
		while (rip > 0)
		{
			i++;
			ripp = ri%rip;
			cout << i << "\t" << ri / rip << "\t" << ri << "\t";
			ri = rip;
			rip = ripp;
			cout << ri << "\t" << rip << endl;
		}
		div = ri;
	}
	cout << "The Greatest Common Divisor for " << r1 << " & " << r2 << " is: ";
	return div;
}

int main()
{
	int r1, r2;
	cout << "Enter the two numbers you'd like to find the Greatest Common Divisor for: " << endl;
	cin >> r1 >> r2;

	cout << gcd(r1, r2) << endl;

	return 0;
}
