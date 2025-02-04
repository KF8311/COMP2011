#include <iostream>     /* File: halving-float.cpp */
using namespace std;

int main()
{
    int HALF = 2;       // Reduce the number by this factor
    int count = 0;      // Count how many times that x can be halved     
    float x;            // Number to halve

    cout << "Enter a positive number: ";
    cin >> x;
    
    while (x > 0.1)
    {
        cout << "Halving " << count++ << " time(s); "
             << "x = " << x << endl;
        x /= HALF;
    }

    return 0;
}
