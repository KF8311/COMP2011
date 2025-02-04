#include <iostream>     /* File: 2d-array-fcn.cpp */
#include <cmath>	
using namespace std;	

float euclidean_distance(float x1, float y1, float x2, float y2)
{
    float x_diff = x1 - x2, y_diff = y1 - y2;
    return sqrt(x_diff*x_diff + y_diff*y_diff);
}

void compute_all_distances(
    const float point[][2], float dist[][3], int num_points)
{
    for (int i = 0; i < num_points; i++)
        for (int j = 0; j < num_points; j++)
            dist[i][j]
                = euclidean_distance(point[i][0], point[i][1],
                                     point[j][0], point[j][1]);
}

void print_2d_array(const float a[][3], int num_rows, int num_columns)
{
    for (int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < num_columns; j++)
            cout << a[i][j] << '\t';
        cout << endl;
    }
}

int main()	
{
    float dist[3][3];   // Distances between any pairs of points
    float point[3][2]   // (x, y) coordinates of 3 points
        = { {1.0, 1.0} , {2.0, 2.0} , {4.0, 3.0} };

    compute_all_distances(point, dist, 3);
    print_2d_array(dist, 3, 3);
    return 0;
}
