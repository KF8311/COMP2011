/* File: pbr-swap.cpp */
#include <iostream>	 
using namespace std;	

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()	
{
    int x = 10, y = 20;
    swap(x, y);
    cout << "(x , y) = " << '(' << x 
         << " , " << y << ')' << endl;
    return 0;
}
