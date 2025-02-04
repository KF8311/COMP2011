#include <iostream>     /* File: switch-char-bloodtype.cpp */
using namespace std;	

int main()              // To find out who may give you blood
{
    cout << "Enter your blood type (put 'C' for blood type AB): ";
    char bloodtype; cin >> bloodtype;
    
    switch (bloodtype)
    {
        case 'A':
            cout << "Your donor must be of blood type: O or A\n"; 
            break;
        case 'B':
            cout << "Your donor must be of blood type: O or B\n"; 
            break;
        case 'C':
            cout << "Your donor must be of blood type: O, A, B, or AB\n"; 
            break;
        case 'O':
            cout << "Your donor must be of blood type: O"; 
            break;
        default:        // To catch errors
            cerr << "Error: " << bloodtype << " is not a valid blood type!\n";
            break;
    }
    return 0;
}
