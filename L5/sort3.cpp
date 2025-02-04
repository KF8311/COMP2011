#include <iostream>     /* File: sort3.cpp */
using namespace std;	

void swap(int& x, int& y) /* To swap 2 numbers */
{
    int temp = x; 
    x = y; 
    y = temp;
}

int main()              /* To sort 3 numbers in ascending order */
{
    int x, y, z;
    cout << "Enter 3 numbers, x, y, z: "; 
    cin >> x >> y >> z;

    if (x > y) swap(x, y);
    if (x > z) swap(x, z);
    if (y > z) swap(y, z);

    cout << "x , y , z = " << x << " , " << y << " , " << z << endl;
    return 0;
}
