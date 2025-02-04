#include <iostream> 	/* File: palindrome.cpp */	
#include <cstring>
using namespace std;	

bool palindrome(char s[], int start, int end)
{
    if (start > end)
        return true;
    
    if (s[start] != s[end])
        return false;
    
    return palindrome(s, start+1, end-1);
}


int main(void)	
{
    char s[1024];

    cout << "Enter a string: ";
    cin >> s;
    
    /* strlen gives the no. of characters in s. But remember that the index 
       of the last character is 1 less the length.
       boolalpha => printing "true" or "false" instead of 1 or 0.
    */
    cout << boolalpha << palindrome(s, 0, strlen(s)-1) << endl;
    return 0;
}
