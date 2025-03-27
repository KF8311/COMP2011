#include <iostream>     /* File: confusion.cpp */
using namespace std;	

int x = 5;              // An int variable
int& xref = x;          // A reference variable: xref is an alias of x
int* xptr = &x;         // A pointer variable: xptr points to x

void xprint() 
{
    cout << hex << endl; // Print numbers in hexadecimal format
    cout << "x =     " << x     << "\t\tx address     = " << &x    << endl;
    cout << "xref =  " << xref  << "\t\txref address  = " << &xref << endl; 
    cout << "xptr =  " << xptr  << "\txptr address  = "   << &xptr << endl; 
    cout << "*xptr = " << *xptr << endl; 
}
    
int main() 
{
    x += 1; xprint();
    xref += 1; xprint();
    xptr = &xref; xprint(); // Now xptr points to xref

    return 0;
}
