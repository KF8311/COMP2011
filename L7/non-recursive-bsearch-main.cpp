#include <iostream>		/* File: bsearch-main.cpp */
using namespace std;	

int bsearch(const int[], int, int);

int data[] = { 3, 5, 7, 9, 11, 13, 15, 17 };

int main()	
{
    int x;
    int num_data = sizeof(data)/sizeof(int);

    while (cin >> x)
	cout << bsearch(data, num_data, x) << endl;
	
    return 0;
}
