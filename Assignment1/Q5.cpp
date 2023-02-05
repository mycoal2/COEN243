#include <iostream>

using namespace std;

int main(){

    int num[4];
    
        
    for (int i=0; i<4; ++i){    // loop to imput numbers
        cout << "Please enter a number: ";
        cin >> num[i];
    }
    
    cout << endl;

    for (int j=3; j>=0; --j){   // loop to output numbers in reverse order. I could of reused i, but i did not want to.
        cout << "You have entered: " << num[j] << endl;
    }


    return 0;
}