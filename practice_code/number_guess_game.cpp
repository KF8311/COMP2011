#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int number;
    int MAX_RANGE;
    //int guessed = 0;
    int turn = 1;
    cout << "What's the maximum?\n";
    cin >> MAX_RANGE;

    number = rand() % MAX_RANGE + 1;
    //cout << number << endl;

    int guessing_number = 0;
    while (true)
    {
        cout << "Player " << turn << ", please enter your guess:\n";
        cin >> guessing_number;
        if (guessing_number > number)
        {
            cout << "Sorry, the number is smaller than " << guessing_number << endl;
        }
        else if (guessing_number < number)
        {
            cout << "Sorry, the number is larger than " << guessing_number << endl;
        }
        else
        {
            cout << "Player " << turn << ", you win!!!" << endl;
            break;
        }
        if (turn == 1)
        {
            turn = 2;
        }
        else if (turn == 2)
        {
            turn = 1;
        }
    }
    return 0;
}