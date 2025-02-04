/* File: break-example.cpp */
#include <iostream>	
using namespace std;	

int main()	
{
    int j = 0;

    while (j < 3)
    {
        cout << "Enter iteration " << j << endl;

        if (j == 1)
            break;

        cout << "Leave iteration " << j << endl;
        j++;
    }
        
    return 0;
}
