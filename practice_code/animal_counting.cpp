#include <iostream>
using namespace std;

int main()
{
    const float PIG_WEIGHT = 4.5;
    const float SHEEP_WEIGHT = 3.0;
    int pig_number;
    int sheep_number;
    int total_weight = 36;
    int floor = total_weight / PIG_WEIGHT;

    for (pig_number = 0; pig_number <= floor; pig_number++) {
        float remain_weight = total_weight - pig_number * PIG_WEIGHT;
        int sheep_number = remain_weight / SHEEP_WEIGHT;
        remain_weight -= sheep_number * SHEEP_WEIGHT;
        cout << pig_number << endl << sheep_number;
    }

    return 0;
}