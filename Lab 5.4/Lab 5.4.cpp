#include <iostream>
#include <string>

using namespace std;

int main() {

	int cardnum, firstsum = 0, secondsum = 0;

	cout << "Please enter an eight digit card number: \n";

	cin >> cardnum;

	int cardtemp = cardnum;


	while (cardtemp > 0) {

		firstsum += cardtemp % 10;

		cardtemp /= 100;

	}

	cardnum /= 10;


	while (cardnum > 0) {

		int remainder = cardnum % 10;

		cardnum /= 100;

		remainder *= 2;

		if (remainder >= 10) {

			secondsum += remainder % 10;

			remainder /= 10;

			secondsum += remainder % 10;

		}

		else { secondsum += remainder % 10; }
	}


	if ((firstsum + secondsum) % 10 == 0) {

		cout << "Card is valid.\n";
	}


	else { cout << "Card is invalid.\n"; }
	
	return 0;
}