#include <iostream>     /* File: ref-declaration.cpp */
using namespace std;

int main()
{
    int a = 1, b = 2;
    int& x = a;         // now x = a = 1
    int &y = b;         // now y = b = 2
    int &w = a, &z = y; // now w = a = x = 1, z = b = y = 2

    a++;       cout << a << '\t' << x << '\t' << w << endl;
    x += 5;    cout << a << '\t' << x << '\t' << w << endl;
    a = w - x; cout << a << '\t' << x << '\t' << w << endl;

    y *= 10; cout << b << '\t' << y << '\t' << z << endl;
    b--;     cout << b << '\t' << y << '\t' << z << endl;
    z = 999; cout << b << '\t' << y << '\t' << z << endl;

    z = a;              // that is not re-binding z to a
    cout << b << '\t' << y << '\t' << z << endl;
    return 0;
}
