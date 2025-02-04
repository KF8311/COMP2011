#include <iostream>     /* array-add-rotate.cpp */
using namespace std;	

void array_print(int x[], int size)
{
    for (int j = 0; j < size; j++)
        cout << x[j] << '\t';
    cout << endl;
}

void array_add(int x[], int y[], int z[], int size)
{
    for (int j = 0; j < size; j++)
        z[j] = x[j] + y[j];
}

void circular_rotation(int x[], int size)
{
    int item_0 = x[0];    // Save the first element before rotation
    for (int j = 1; j < size; j++)
        x[j-1] = x[j];    // Rotate up
    x[size - 1] = item_0; // Fix the last element
}

int main()	
{
    int a[] = {1, 2, 3, 4};
    int b[] = {11, 12, 13, 14}; 
    int c[4];

    array_add(a, b, c, 4); 
    array_print(c, 4); 
    cout << endl;

    for (int k = 0; k < 4; k++)
    {
        circular_rotation(a, 4); 
        array_print(a, 4); 
    }

    return 0;
}
