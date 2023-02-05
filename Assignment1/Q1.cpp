#include <iostream>

using namespace std;

int main() {

    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << endl << "-----------------------------------" << endl;
    int Ellipse = 3.1415 * num1 * num2;

    cout << "The results are: \n" << endl;
    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Division: " << num1 / num2 << endl;
    cout << "Area of an Ellipse: " << Ellipse << endl; // I could put (3.1415 * num1 * num2) instead of Ellipse but it will not be an integer.
    cout << "Average: " << (num1 + num2)/2 << endl;

    return 0;
}