/* File: 2d-array-fcn2.cpp
 * Each row of a 2D array, e.g., a[N][M], can be treated as a 1D array. 
 * The i-th row can be addressed as a[N],
 * which represents a 1D array of M elements.
 */

float euclidean_distance(const float point_A[], const float point_B[])
{
    float x_diff = point_A[0] - point_B[0];
    float y_diff = point_A[1] - point_B[1];
    return sqrt(x_diff*x_diff + y_diff*y_diff);
}

void compute_all_distances(
    const float point[][2], float dist[][3], int num_points)
{
    for (int i = 0; i < num_points; i++)
        for (int j = 0; j < num_points; j++)
            dist[i][j] = euclidean_distance(point[i], point[j]);
}
