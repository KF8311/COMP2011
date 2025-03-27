#include <iostream>     /* File: pointer-pointer.cpp */
using namespace std;	
    
int main()	
{
    int x = 16;
    int* xp = &x;       // xp --> x
    int** xpp = &xp;    // xpp --> xp --> x
    int*** xppp = &xpp; // xppp --> xpp --> xp --> x

    cout << "x address    = " << &x   << "  x    = " << x << endl;
    cout << "xp address   = " << &xp  << "  xp   = " << xp 
         << "  *xp   = "      << *xp  << endl; 

    cout << "xpp address  = " << &xpp << "  xpp  = " << xpp 
         << "  *xpp  = "      << *xpp << "  **xpp  = " << **xpp << endl; 

    cout << "xppp address = " << &xppp   << "  xppp = " << xppp 
         << "  *xppp = "      << *xppp   << "  **xppp = " << **xppp
         << "  ***xppp = "    << ***xppp << endl; 
    return 0;
}
