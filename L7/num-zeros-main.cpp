#include <iostream>		/* File: num-zeros-main.cpp */
using namespace std;	

int num_zeros(int);

int main()	
{
    int n;

    while (cin >> n)
		cout << "num_zeros(" << n << ") = " << num_zeros(n) << endl;
	
    return 0;
}
