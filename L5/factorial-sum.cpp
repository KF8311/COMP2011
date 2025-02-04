#include <iostream>     /* File: factorial-sum.cpp */
using namespace std;	

int main()              /* To compute x! + y! + z! */
{
    int x, y, z;
    int fx = 1, fy = 1, fz = 1;

    cout << "Enter x, y, z: "; cin >> x >> y >> z;

    for (int j = 2; j <= x; ++j) { fx *= j; } // Compute x!

    for (int j = 2; j <= y; ++j) { fy *= j; } // Compute y!

    for (int j = 2; j <= z; ++j) { fz *= j; } // Compute z!

    cout << x << "! + " << y << "! + " << z << "! = " 
         << fx + fy + fz << endl;

    return 0;
}
