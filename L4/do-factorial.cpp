#include <iostream>  /* File: do-factorial.cpp */
using namespace std; // Compute x! = x(x-1)(x-2)...1; x is non -ve

int main() 
{
    int factorial = 1, number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number > 0)
    {
        do
        {
            factorial *= number; // Same as: \scriptsize{factorial = factorial*number}
            --number;            // Same as: \scriptsize{number = number-1}
        } while (number > 1);
    }
    
    cout << factorial << endl;
    return 0;
}
