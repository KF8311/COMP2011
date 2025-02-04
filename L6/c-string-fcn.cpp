#include <iostream>     /* File: c-string-fcn.cpp */
using namespace std;	
const char NULL_CHAR = '\0';

int str_len(const char s[])
{
    int j;
    for (j = 0; s[j] != NULL_CHAR; j++)
        ;
    return j;
}

int str_concatenate(const char s1[], const char s2[], char s[])
{
    int j;
    for (j = 0; s1[j] != NULL_CHAR; j++)
        s[j] = s1[j];   // Copy s1 to s

    for (int k = 0 ; s2[k] != NULL_CHAR; k++, j++) 
        s[j] = s2[k];   // Copy s2 after s1

    s[j] = NULL_CHAR;   // Make s a C String
    return j;
}

int main()	
{
    char a[20] = "Albert";
    char b[20] = "Einstein"; 
    char c[20]; 
    int length;

    cout << "length of string a = " << str_len(a) << endl;
    cout << "length of string b = " << str_len(b) << endl;

    length = str_concatenate(a, b, c);
    cout << "After concatenation: "
         << c << " of length " << length << endl;

    return 0;
} // Read Appendix B of the textbook for more C string library functions.
