// Fast Exponentiation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int FastExponentiation(int a, int x, int n)
{
	int xArr[50], i = 0, tempX = x, bin = 2, count = 1, max = 0;
	while (i < 50)
	{
		xArr[i] = 0;
		i++;
	}

	if (x % 2 != 0)
	{
		xArr[0] = 1;
	}
	while (tempX > 2)
	{
		while (tempX >= bin)
		{
			bin = bin * 2;
			count++;
		}
		bin = bin / 2;
		xArr[count - 1] = 1;
		tempX = tempX - bin;
		if (max <= count)
		{
			max = count;
		}
		bin = 2;
		count = 1;
		if (tempX == 2)
		{
			xArr[1] = 1;
		}
	}

	int y = 1, k;
	cout << "Trace Table: " << endl;
	cout << endl << "i \tXi \tSquaring Y \t\tMultiplying Y" << endl;
	for (k = max - 1; k >= 0; k--)
	{
		cout << k << "\t" << xArr[k] << "\t" << y << "^2 mod " << n;
		y = y * y % n;
		cout << " = " << y << "\t\t";
		if (xArr[k] == 1)
		{
			cout << a << " * " << y << " mod " << n;
			y = a * y % n;
			cout << " = " << y;
		}
		else
		{
			cout << y;
		}
		cout << endl;
	}
	cout << endl << "Answer is: ";
	return y;
}

int main()
{
	int a, x, n;
	cout << "Enter the number, exponent, and modulus" << endl;
	cin >> a >> x >> n;
	cout << endl;
	cout << FastExponentiation(a, x, n);

	return 0;
}
