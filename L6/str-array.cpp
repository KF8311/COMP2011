#include <iostream>     /* File: str-array.cpp */
using namespace std;	

void print_strings(const char s[][16], int num_of_strings)
{
    for (int j = 0; j < num_of_strings; j++)
        cout << s[j] << " ";
    cout << endl;
}

int main()	
{
    // 5 C-strings, each having a max. length of 15 char
    const char word[5][16] = {  
        "hong kong",
        "university",
        "of",
        "science",
        "technology"
    };

    print_strings(word, 5);
    return 0;
}

