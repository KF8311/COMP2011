#include <iostream> /* File: array-sum.cpp */
using namespace std;

// Summing up x[0] + x[1] + ... + x[num\_elements-1]
int array_sum(const int x[], int num_elements)
{
    if (num_elements <= 0) return 0; // Base case
    return array_sum(x, num_elements-1) + x[num_elements-1];
}

int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6 };
    int n;              // #elements in an array to sum
    while (cin >> n)
        cout << array_sum(a, n) << endl;
    return 0;
}
