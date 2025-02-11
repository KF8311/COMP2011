#include <iostream>
using namespace std;

void multi_rat(int height, int repeat)
{
    for (int j = 0; j < height; j++)
    {
        for (int i = 0; i < height * repeat; i++)
        {
            (i % height <= j) ? cout << '*' : cout << ' ';
        }
        cout << endl;
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