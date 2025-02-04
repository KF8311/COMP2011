#include <iostream>     /* File: while-max.cpp */
using namespace std;	

// To find the maximum of a list of +ve integers. Stop by inputting a 
// character that is not a digit. Assume there is at least one number.
int main() 
{
    cout << "Enter a number: ";
    int x; cin >> x;    // Input integers

    int max = x;        // Result initialized with the first number

    cout << "Enter the next number: ";
    while (cin >> x)    // If there is input, cin returns TRUE else FALSE
    {
        if (x > max)
            max = x;
        cout << "Enter the next number: ";
    }

    cout << endl << "The maximum number = " << max << endl;
    return 0;
}
