#include <iostream>     /* File: pointer.cpp */
using namespace std;	

int main()	
{
    int x1 = 10, x2 = 20;  
    int *p1 = &x1;      // p1 now points to x1
    int *p2 = &x2;      // p2 now points to x2
    
    *p1 = 5;            // now x1 = 5
    *p2 += 1000;        // now x2 = 1020
    *p1 = *p2;          // now *p1 = *p2 = x1 = x2 = 1020, but p1 != p2
    p1 = p2;            // now p1 and p2 both point to x2
    
    cout << "x1 = " << x1 << '\t' << "&x1 = " << &x1 << endl;
    cout << "x2 = " << x2 << '\t' << "&x2 = " << &x2 << endl;
    cout << "p1 = " << p1 << '\t' << "*p1 = " << *p1 << endl;
    cout << "p2 = " << p2 << '\t' << "*p2 = " << *p2 << endl;

    return 0;
}
