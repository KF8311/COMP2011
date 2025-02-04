#include <iostream>     /* File: palindrome.cpp */
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
    const int MAX_LINE_LEN = 255; char whole_line[MAX_LINE_LEN+1];

    while (cin.getline(whole_line, MAX_LINE_LEN+1, '\n')// Input ends in newline
           || cin.gcount() == MAX_LINE_LEN) // Input ends with max #chars
    {
        cout << whole_line << endl
             << boolalpha << palindrome(whole_line) << endl;
        cin.clear();    // Clear the failbit if max #chars are read
    }
    return 0;
}
