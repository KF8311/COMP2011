#include <iostream>     /* File: for-factorial.cpp */
using namespace std;	

/* To compute x! = x(x-1)(x-2)...1, where x is a non -ve integer */
int main() 
{
    int factorial = 1;
    int number;

    cout << "Enter a non-negative integer: ";
    cin >> number;
    
    for (int j = 1; j <= number; ++j) // Set up a counter to iterate 
        factorial *= j;
    
    cout << number << "! = " << factorial << endl;
    return 0;
}
