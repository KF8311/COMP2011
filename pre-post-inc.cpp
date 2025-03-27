#include <iostream>	 /* File: pre-post-inc.cpp */
using namespace std;	

int main()	
{
    int x = 5;
    
    cout << ++++++x << endl;
    cout << x++++ << endl;
    
    return 0;
}
