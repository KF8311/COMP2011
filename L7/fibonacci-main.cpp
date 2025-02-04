#include <iostream>		/* File: fibonacci-main.cpp */
using namespace std;	

int fibonacci(int);

int main()	
{
    int n;

    while (cin >> n)
	cout << "fibonacci(" << n << ") = " 
	     << fibonacci(n) << endl;
	
    return 0;
}
