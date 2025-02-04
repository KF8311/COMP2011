#include <iostream>     /* array-mean.cpp */
using namespace std;	

int main()	
{
    const int NUM_STUDENTS = 5;
    float score[NUM_STUDENTS];
    float sum_score = 0.0;     // Don't forget initializing the sum 

    for (int j = 0; j < NUM_STUDENTS; ++j)
    {
        cin >> score[j];
        sum_score += score[j]; // Accumulate the scores
    }
    
    cout << "mean score = " << sum_score/NUM_STUDENTS << endl;
    return 0;
}
