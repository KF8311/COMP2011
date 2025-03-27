#include <iostream>     /* File: pbv-pointer.cpp */
using namespace std;	

void swap(int* x, int* y)
{
    cout << "x = " << x << "\t*x = " << *x << endl; 
    cout << "y = " << y << "\t*y = " << *y << endl << endl; 

    int temp = *x; *x = *y; *y = temp;

    cout << "x = " << x << "\t*x = " << *x << endl; 
    cout << "y = " << y << "\t*y = " << *y << endl << endl; 
}
    
int main() 
{
    int a = 10, b = 20;
    cout << "a = " << a << "\t\t\t&a = " << &a << endl;
    cout << "b = " << b << "\t\t\t&b = " << &b << endl << endl;

    swap(&a, &b);
    cout << "a = " << a << "\t\t\tb = " << b << endl;
    return 0;
}
