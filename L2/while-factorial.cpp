#include <iostream>     /* File: while-factorial.cpp */
using namespace std;	

/* To compute x! = x(x-1)(x-2)...1, where x is a non -ve integer */
int main() 
{
    int factorial = 1;
    int number;

    cout << "Enter a non-negative integer: ";
    cin >> number;
    
    while (number > 0)
    {
        factorial *= number; // Same as: factorial = factorial*number
        --number;            // Same as: number = number-1
    }
    
    cout << factorial << endl;
    return 0;
}
