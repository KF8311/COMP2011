#include <iostream>     /* File: factorial-sum-fcn.cpp */
using namespace std;	

int factorial(int x)    /* To compute x! where x >= 0 */
{
    int factorial = 1, j = 2;
    while (j <= x)
    {
        factorial *= j;
        j++;
    }
    return factorial;
}

int main()              /* To compute x! + y! + z! */
{
    int x, y, z;
    cout << "Enter x, y, z: "; cin >> x >> y >> z;
    cout << x << "! + " << y << "! + " << z << "! = " 
         << factorial(x) + factorial(y) + factorial(z) << endl;
    return 0;
}
