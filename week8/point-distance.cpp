/* File: point-distance.cpp */
#include <cmath>        // Header file for C math lib

/* To find the 2D Euclidean distance between 2 points */
double euclidean_distance(const Point& p1, const Point& p2)
{
    double x_diff = p1.x - p2.x, y_diff = p1.y - p2.y;
    return sqrt(x_diff*x_diff + y_diff*y_diff);
}

void print_point(const Point& p)
{
    cout << '(' << p.x << ", " << p.y << ')';
}

void print_distance(const Point& p1, const Point& p2)
{
    cout << "Distance between "; print_point(p1);
    cout << " and "; print_point(p2);
    cout << " is " << euclidean_distance(p1, p2) << endl;
}
