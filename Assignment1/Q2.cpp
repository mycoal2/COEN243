#include <iostream>

using namespace std;

int main() {

    double income;
    cout << "Please enter your income here (without the $ sign): ";
    cin >> income;
        // Assignment did not show >= to 118000. People with exactly 118000 income will not get taxed :)

    if ( income >= 118000 ) {
        cout << "Your $" << income << " is higher than $118000, therefore you will be taxed 32% of your income." << endl;
        cout << "Your net income is $" << income - income * 0.32 << endl;
    } else 
        if ( income >= 88000 ) {
            cout << "Your income of $" << income << " is between $88000 and $11800, therefore you will be taxed 24% of your income." << endl;
            cout << "Your net income is $" << income - income * 0.24 << endl;
    } else 
        if ( income >= 58000 ) {
            cout << "Your income of $" << income << " is between $58000 and $88000, therefore you will be taxed 16% of your income." << endl;
            cout << "Your net income is $" << income - income * 0.16 << endl;
    } else 
        if ( income >= 28000 ) {
            cout << "Your income of $" << income << " is between $28000 and $58000, therefore you will be taxed 8% of your income." << endl;
            cout << "Your net income is $" << income - income * 0.08 << endl;
    } else 
        if ( income >= 0) {
            cout << "Your income of $" << income << " is lower than $28000, therefore you will be taxed 0% of your income." << endl;
            cout << "Your net income is $" << income - income * 0 << endl;
    } else

    cout << "Income cannot be lower than 0" << endl;


    return 0;

    }