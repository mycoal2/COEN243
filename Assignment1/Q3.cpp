#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int count = 21;
        
        // The assignment shows that 4 celcius = 38.2 Fahrenheit which is not true

    cout << "Celcius" << setw(19) << "Fahrenheit" << setw(19) << "Kelvin" << endl;
    for(int i=1; i < count/2; ++i ) {
        cout << i << setw(19) << i*1.8 + 32 << right << setw(25) << i + 273.15 << endl;
    }
        
        /* Another loop because the fahrenheit and kelvin collumn will be lined up once it reaches 10 celcius
        because it adds another character which cause everything to shift to the right. */

    for(int i= count/2; i < count; ++i ) {
        cout << i << setw(18) << i*1.8 + 32 << right << setw(25) << i + 273.15 << endl;

    }


    return 0;
}