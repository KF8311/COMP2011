#include <iostream>     /* File: product.cpp */
using namespace std;    // Standard C++ namespace

/* Other variables and class declarations and definitions */

int main()              // Program's entry point
{
    int x = 0;          // Variable definitions
    int y = 0;
    int product = 0;
    
    cout << "Enter the first integer: ";     // Asking for inputs
    cin >> x;                                // Input statement
    cout << "Enter the second integer: ";    // Asking for inputs
    cin >> y;                                // Input statement
    product = x * y;                         // Computations
    cout << "product = " << product << endl; // Output statements
    
    return 0;           // Program ends; feedback to the shell
}

