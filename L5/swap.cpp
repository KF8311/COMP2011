#include <iostream>     /* File: swap.cpp */
using namespace std;	

int main()              /* To swap 2 numbers */
{
    int x, y;
    cout << "Enter the 2 numbers, x and y: "; cin >> x >> y;

    int temp = x;
    x = y;
    y = temp;

    cout << "x , y = " << x << " , " << y << endl;
    return 0;
}
