//exception handling
#include <iostream>
using namespace std;

int main() {

	int charged; {
		cout << "What is the charged amount?";
		cin >> charged;
		int limit;
		cout << "What is the Credit Card limit?";
		cin >> limit;
		if (charged > limit)
			throw "The credit limit is exceeded. Purchase denied."; //a
		else {
			limit = limit - charged;
			cout << "Purchase is completed" << endl;
		}

		int paymentAmount; {
			cout << "What is the payment amount?";
			cin >> paymentAmount;
			if (paymentAmount < 0)
				throw "Payment amount is negative. Denied!"; //c
		}
		int balance; {
			cout << "What is the balance amount?";
			cin >> balance;
			if (paymentAmount > balance)
				throw "Payment amount exceeds the balance due"; //b

			charged = charged + paymentAmount;
			cout << "Payment is successfully completed" << endl;
		}

		return 0;
	}
};