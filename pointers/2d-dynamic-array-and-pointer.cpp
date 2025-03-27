#include <iostream>     /* File: 2d-dynamic-array-and-pointer.cpp */
using namespace std;	

int main()	
{
    // Dynamically create an array with 3 rows, 4 columns
    int** x = new int* [3];     // STEP 1
    for (int j = 0; j < 3; j++) // STEP 2
        x[j] = new int [4];
    
    cout << endl << "Info about x:" << endl;
    cout << "sizeof(x) :\t" << sizeof(x) << endl << endl;
    cout << "x\t\t"    << "&x[0]\t\t"    << "&x[0][0]" << endl;
    cout << x << '\t'  << &x[0]  << '\t' << &x[0][0] << endl << endl;
    cout << "&x[j]\t\t"          << "x[j]\t\t" 
         << "&x[j][0]" << '\t'   << "x+j" << endl;

    for (int j = 0; j < 3; j++)
        cout << &x[j]    << '\t' << x[j] << '\t'
             << &x[j][0] << '\t' << x+j  << endl;
    return 0;
}
