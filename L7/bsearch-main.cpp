#include <iostream>		/* File: bsearch-main.cpp */
using namespace std;	

int bsearch(const int[], int, int, int);

int data[] = { 3, 5, 7, 9, 11, 13, 15, 17 };

int main()	
{
    int x;
    int num_data = sizeof(data)/sizeof(int);

    while (cin >> x)
	cout << bsearch(data, 0, num_data-1, x) << endl;
	
    return 0;
}
