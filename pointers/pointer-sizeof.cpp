#include <iostream>	/* File: pointer-sizeof.cpp */
using namespace std;	

int main()	
{
    char   c = 'A';   char* pc = &c; 
    short  s = 5;    short* ps = &s; 
    int    i = 10;     int* pi = &i; 
    double d = 5.6; double* pd = &d; 
    
    cout << sizeof(pc) << '\t' << sizeof(*pc) << '\t' << sizeof(&pc)
         << endl;
    cout << sizeof(ps) << '\t' << sizeof(*ps) << '\t' << sizeof(&ps) 
         << endl;
    cout << sizeof(pi) << '\t' << sizeof(*pi) << '\t' << sizeof(&pi) 
         << endl;
    cout << sizeof(pd) << '\t' << sizeof(*pd) << '\t' << sizeof(&pd) 
         << endl;
         /*
         32 bit 4, 64 bit 8
         8,8,8,8
         1,2,4,8
         8,8,8,8*/

    return 0;
}
