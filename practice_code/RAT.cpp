//RAT.cpp
#include <iostream>
using namespace std;

void multi_rat(int height, int repeat)
{
    for (int j = 0; j < height; j++)//loop through column
    {
        for (int i = 0; i < height * repeat; i++) //loop through row
        {
            (i % height <= j) ? cout << '*' : cout << ' '; //is it the desired place?, the like is it the first of of the triangle, 1,2,3...
        }
        cout << endl; //finish a row, go to next row
    }
}
int main()
{
    int height;
    int repeat;
    cout << "Height?\n";
    cin >> height;
    cout << "Repeat how many times?\n";
    cin >> repeat;
    multi_rat(height, repeat);
    return 0;
}