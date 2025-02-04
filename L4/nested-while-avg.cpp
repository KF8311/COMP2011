#include <iostream>	/* File: nested-while-avg.cpp */
using namespace std;	

int main()	
{
    int NUM_ASSIGNMENTS = 5; // Uppercase variable doesn't change
    int j; // Assignment counter
    int score, sum_of_scores;
    char reply = 'y'; // 'y' for yes, 'n' for no; initialized to yes
    
    cout << "Enter scores for the first student? (y/n) " << endl;
    while ((cin >> reply)  &&  (reply == 'y' || reply == 'Y'))
    {
        sum_of_scores = 0;  // Reset the accumulator to zero
        j = 1;  // Reset the assignment counter to 1

        while (j <= NUM_ASSIGNMENTS)
        {
            cout << "Enter student's score for assignment #" << j << " : ";
            cin >> score; // Remark: one should check input errors here
            sum_of_scores += score;
            j++;
        }
        
        cout << "The average score = " << sum_of_scores/NUM_ASSIGNMENTS << endl;
        cout << "Enter scores for another student? (y/n) " ;
    }

    return 0;
}
