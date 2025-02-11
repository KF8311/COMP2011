//number_guessing_game.cpp
#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int number;
    int MAX_RANGE;
    int MIN_RANGE;
    // int guessed = 0;
    int turn = 1;
    cout << "What's the minimum?\n";
    cin >> MIN_RANGE;
    cout << "What's the maximum?\n";
    cin >> MAX_RANGE;

    number = rand() % (MAX_RANGE - MIN_RANGE) + MIN_RANGE;
    // cout << number << endl;

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
        turn = (turn % 2) + 1;
    }
    return 0;
}