#include <iostream>     /* const-array-mean-max-fcn.cpp */
using namespace std;	

float mean_score(const float score[], int size)
{
    float sum_score = 0.0;  // Don't forget initializing the sum to 0
    for (int j = 0; j < size; j++)
        sum_score += score[j]; // Accumulate the scores
    return sum_score/size;
}

float max_score(const float score[], int size)
{
    // Initialize the max score to that of the first student
    float max_score = score[0];
    for (int j = 1; j < size; j++)
        if (max_score < score[j])
            max_score = score[j];
    return max_score;
}

int main()	
{
    const int NUM_STUDENTS = 5;
    float score[NUM_STUDENTS];
    
    for (int j = 0; j < NUM_STUDENTS; j++)
        if (!(cin >> score[j]))
            return -1;
    
    cout << "mean score = " << mean_score(score, NUM_STUDENTS) << endl;
    cout << "max score = "  << max_score(score, NUM_STUDENTS) << endl;
    return 0;
}
