#include <iostream>     /* File: nullptr.cpp */
using namespace std;	

void f(char* s) { cout << "f(char* s)" << endl; }
void f(int x) { cout << "f(int x)" << endl; }

int main()	
{
    int* ip = nullptr;
    int* iq = 0;
    char* cp = nullptr;
    char* cq = 0;
    int x;
    int* xp = &x;
    
    cout << ip << endl;
    cout << (ip ? "yes" : "no") << endl;     // nullptr can be converted to bool
    cout << (iq ? "yes" : "no") << endl;
    cout << boolalpha << (ip == iq) << endl;
    cout << boolalpha << (ip == xp) << endl;
    cout << boolalpha << (nullptr == 0) << endl;
    //cout << boolalpha << (cp == ip) << endl; // Error: pointers of different types
    //cout << boolalpha << (cq == iq) << endl; // Error: pointers of different types

    f(nullptr);         // Which f()?
    f(0);               // Which f()?
    return 0;
}
