#include <iostream>
using namespace std;


int main() {
	double small_pizza_price = 8;
	double large_pizza_price = 12;

	int s_number;
	int l_number;
	int points;
	double total;

	cout << "How many small Pizzas? ";
		cin >> s_number;

	cout << "How many large Pizzas? ";
		cin >> l_number;
	cout <<	endl;
	
		total = small_pizza_price * s_number + large_pizza_price * l_number;
		points = total / 3;

		cout << "Your total bill for " << s_number << " small pizza(s) and " << l_number << " large pizza(s) is $" << total << ". You have earned " << points << " points." << endl;

	return 0;
}