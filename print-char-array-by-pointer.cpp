#include <iostream> /* File: print-char-array-by-pointer.cpp */
using namespace std;	
int main()	
{
    char s[] = "hkust";
    for (const char* sp = s; *sp != '\0'; ++sp)
        cout << *sp << endl;
    return 0;
}
