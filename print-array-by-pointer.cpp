#include <iostream> /* File: print-array-by-pointer.cpp */
using namespace std;	
int main()	
{
    int x[] = { 11, 22, 33, 44 };
    for (int* xp = x, j = 0; j < sizeof(x)/sizeof(int); ++j, ++xp)
        cout << *xp << endl;
    return 0;
}
