#include <iostream>
using namespace std;
int binary_search(int first, int mid, int end, const int goal, int numbers[])
{
    if (numbers[first] == goal)
        return first + 1;
    else if (numbers[mid] == goal)
        return mid + 1;
    else if (numbers[end] == goal)
        return end + 1;
    else if (first == mid || end == mid)
    {
        // cout << "None!";
        return 0;
    }
    else
        return (binary_search(first + 1, (first + mid) / 2, mid - 1, goal, numbers)) +
               (binary_search(mid + 1, (end + mid) / 2, end - 1, goal, numbers));
}
int main()
{
    int numbers[] = {2,4,6,8,15,16,19,21};
    int end = sizeof(numbers) / sizeof(numbers[0]);
    int goal = 21;
    int result = binary_search(0, end / 2, end, goal, numbers);
    if (result > 0){
        --result;
        cout << "numbers["<<result<<"] = "<<numbers[result];
    }
        
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}
