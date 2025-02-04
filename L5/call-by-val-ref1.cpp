#include <iostream>	/* File: call-by-val-ref1.cpp */
using namespace std;	

int f_ref(int& x) { return ++x; }
int f_val(int x) { return ++x; }

int main()	
{
    int a = 5;

    cout << f_ref(a) << endl;
    cout << a << endl;
    
    cout << f_val(a) << endl;
    cout << a << endl;

    return 0;
}
