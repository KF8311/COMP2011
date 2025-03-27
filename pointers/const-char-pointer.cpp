#include <iostream>     /* File: const-char-pointer.cpp */
using namespace std;	

int main()	
{
    const char* s1 = "creative"; // Correct way!
    char* s2 = "smart";          // Error if g++ -pedantic-errors

    /* This only works for char pointer. 
     * E.g., the following are illegal
     *     const int* x1 = {1, 2, 3};
     *     int* x2 = {1, 2, 3};
     */
    
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}
