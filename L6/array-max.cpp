#include <iostream>     /* array-max.cpp */
using namespace std;	

int main()	
{
    const int NUM_STUDENTS = 5;
    float score[NUM_STUDENTS];
    // Read in the first student's score. Assume #students >= 1
    cin >> score[0]; 
    float max_score = score[0]; // A good way to initialize max score

    for (int j = 1; j < NUM_STUDENTS; ++j)
    {
        cin >> score[j];
        if (max_score < score[j]) 
            max_score = score[j];
    }
    
    cout << "max score = "  << max_score << endl;
    return 0;
}
