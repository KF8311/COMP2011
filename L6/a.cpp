#include <iostream>     /* File: palindrome.cpp */
#include <cstring>
using namespace std;	

bool palindrome(const char x[]) {
    int j = 0;             // An index reading the array from top (left)
    int k = strlen(x) - 1; // An index reading the array from bottom (right)

    for ( ; j < k; ++j, --k)
        if (x[j] != x[k])
            return false;
    return true;
}

int main() {
    const int MAX_LINE_LEN = 5; char whole_line[MAX_LINE_LEN+1];

    while (cin.getline(whole_line, MAX_LINE_LEN+1, 'x')
			|| cin.gcount() == MAX_LINE_LEN)
    {
        cout << whole_line << endl
             << boolalpha << palindrome(whole_line) << endl;
        //cin.clear();    
    }
    return 0;
}
