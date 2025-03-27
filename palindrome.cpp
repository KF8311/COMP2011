#include <iostream>     /* File: palindrome.cpp */
using namespace std;	

bool palindrome(const char* first, const char* last)
{
    if (first >= last) 
        return true;
    else if (*first != *last) 
        return false;
    else
        return palindrome(first+1, last-1);
}

int main() {
    const int MAX_LINE_LEN = 255;
    char s[MAX_LINE_LEN+1];
    while (cin.getline(s, MAX_LINE_LEN+1, '\n')// Input ends in newline
    	|| cin.gcount() == MAX_LINE_LEN)  // Input ends with max #chars
        cout << boolalpha << palindrome(s, s+strlen(s)-1) << endl;
    return 0;
}
