#include <iostream>     /* File: halving-int.cpp */
using namespace std;

int main() 
{
    int count = 0;      // Count how many times that x can be halved     
    int x;              // Number to halve

    cout << "Enter a positive number: ";
    cin >> x;

    while (x > 0.1)
    {
        cout << "Halving " << count++ << " time(s); "
             << "x = " << x << endl;
        x /= 2;
    }

    return 0;
}
