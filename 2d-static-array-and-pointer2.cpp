#include <iostream>	/* File: 2d-static-array-and-pointer.cpp */
using namespace std;	

int main()	
{
    int x[3][4] = { {11, 12, 13, 14}, 
                    {21, 22, 23, 24}, 
                    {31, 32, 33, 34} };
    
    // *(x[j]) == x[j][0] => x[j] points to x[j][0]
    cout << *(x[0]) << '\t' << x[0][0] << endl;
    cout << *(x[1]) << '\t' << x[1][0] << endl;
    cout << *(x[2]) << '\t' << x[2][0] << endl << endl;
    
    // *(x[j]+k) == x[j][k] => (x[j]+k) points to x[j][k]
    cout << *(x[0]) << '\t' << *(x[0]+1) << '\t' << *(x[0]+2) << '\t' << *(x[0]+3) << endl;
    cout << *(x[1]) << '\t' << *(x[1]+1) << '\t' << *(x[1]+2) << '\t' << *(x[1]+3) << endl;
    cout << *(x[2]) << '\t' << *(x[2]+1) << '\t' << *(x[2]+2) << '\t' << *(x[2]+3) << endl;
    
    return 0;
}
