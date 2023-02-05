#include <iostream>

using namespace std;

int main() {

    int num;
    int array[]={67, 16, 66, 1, 87, 52, 27, 20};
    bool win;

    cout << "What lottery number do you want? ";
    cin >> num;

    for (int i=0; i<8;  ++i)
    {
        if (array[i] == num) {
            cout << "Congratulation!" << endl << "You have won the lottery with the number " << num << endl;
            win = true;
            break;
        } 
          
    }
    
    if (win != 1)
        cout << "Unfortunate. Spend another $5 to have another attempt." << endl;

/*  using switch statement instead of loops
    switch (num) {
        case 67 :
        cout << "Congratualtion!" << endl << "You have won the lottery" << endl;
        break;
        
        case 16 :
        cout << "Congratualtion!" << endl << "You have won the lottery" << endl;
        break;

        case 66 :
        cout << "Congratualtion!" << endl << "You have won the lottery" << endl;
        break;

        case 1 :
        cout << "Congratualtion!" << endl << "You have won the lottery" << endl;
        break;

        case 87 :
        cout << "Congratualtion!" << endl << "You have won the lottery" << endl;
        break;

        case 52 :
        cout << "Congratualtion!" << endl << "You have won the lottery" << endl;
        break;

        case 27 :
        cout << "Congratualtion!" << endl << "You have won the lottery" << endl;
        break;

        case 20 :
        cout << "Congratualtion!" << endl << "You have won the lottery" << endl;
        break;

        default :
        cout << "Unfortunate. Spend another $5 to have another attempt. " << endl;
    }
*/    

    return 0;
}