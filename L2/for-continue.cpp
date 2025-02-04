#include <iostream>     /* File: for-continue.cpp */
using namespace std;

int main()
{
    for (int j = 1; j <= 10; j++)
    {
        cout << "j = " << j << endl;

        if (j == 3) 
        {
            j = 10;
            continue;   // What if it is replaced by \color{blue}{break};
        }
    }

    return 0;
}
