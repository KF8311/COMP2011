#include <iostream>     /* File: max.cpp */
using namespace std;	/* To find the greater value between x and y */

int max(int a, int b) 
{ 
    if (a > b)            
	    return a;
    else
	    return b;
}   // Question: can you write with only 1 return statement?

int main() 
{
    int x, y;
    cout << "Enter 2 numbers: ";
    cin >> x >> y;

    cout << "The bigger number is " << max(x, y) << endl;
    return 0;
}
