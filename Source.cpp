#include <iostream>

using namespace std;

int main() {
	int num;

	cout << "Enter an even number: ";
	cin >> num;

	while (num % 2 == 1) {
		cout << "Enter an even number: ";
		cin >> num;
	}
	cout << endl;
	for (int i = 0; i < num / 2; i++)
	{	
		for (int j = 0; j <=i; j++)
		{
			cout << num - 2 * j << "    ";
		}
		cout << endl;
	}


	return 0;
}