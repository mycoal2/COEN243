#include <iostream>

using namespace std;

int main() {

	int choice;

	cout << "What is your choice? (1 or 2)" << endl;
	cin >> choice;


	switch (choice) {
	case 1:
		cout << "Enter the birthday (day month year): " << endl;
		int day, month, year;
		cin >> day;
		cin >> month;
		cin >> year;

		cout << endl;

		cout << "Your phone number is (514)";


		if (day < 10) {
			cout << "0" << day;

		}
		else
			cout << day;

		if (month % 4 == 0 && month % 3 != 0) {
			cout << month * 5;
		}
		else
			if (month % 4 != 0 && month % 3 == 0) {
				if (day > 30) {
					cout << month << day-30;
				}
				else if (day == 30) {
					cout << month << "0";
				}
				else if (day > 20) {
					cout << month << day - 20;
				}
				else if (day == 20) {
					cout << month << "0";
				}
				else if (day > 10) {
					cout << month << day - 10;
				}
				else if (day == 10) {
					cout << month << "0";
				}
				else
					cout << month << day;

			}
			else
				cout << month * 7;

		if (year >= 2100) {
			cout << year - 2000;
		}
		else
			if (year >= 2010) {
				cout << "0" << year - 2000;
			}
			else
				if (year >= 2000) {
					cout << "00" << year - 2000;
				}
				else
					cout << year - 1000;
					// assuming that the user's birth year is not below 1100 and not above 2999

		break;



	case 2:
		cout << "Enter the card expiration date (month year)" << endl;
		int month1, year1;
		cin >> month;
		cin >> year;

		cout << endl << "Card Expiration date is ";

		if (month < 10) {
			cout << "0" << month;
		}
		else
			cout << month;
		cout << "/" << year + 2000 << endl; // assuming that expiration date is not after 2100 and before 2000
		break;
	}


	return 0;
}