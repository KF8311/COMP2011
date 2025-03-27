#include <iostream>     /* File: pointer-math.cpp */
using namespace std;	

int main() 
{
    double x = 2.3;     // double is 8-byte
    double* xp = &x;    // xp points to x
    cout << &x << endl << xp + 2 << endl << xp - 2 << endl;
    
    // Nothing disallows you from assigning an integer value
    // to a pointer variable. Hexadecimal numbers start with 0x.
    int* yp = reinterpret_cast<int*>(0x14); 
    cout << yp + 1 << endl << yp - 1 << endl;

    // Since addresses around 0x14 may not be accessible to you
    // Dereferencing them usually leads to runtime error
    cout << *(yp + 1) << endl << *(yp - 1) << endl;
    return 0;
}
