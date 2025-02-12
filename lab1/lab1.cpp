// Lab1: Pass or Fail
#include <iostream>
using namespace std;

int main()
{
    // Set the overall precision to avoid displaying too many decimal places
    cout.precision(5);

    // The following constants are used so that we can change these values later
    const double PASSING_OVERALL = 36;
    const double PASSING_EXAM_ONLY = 14;
    const double MAX_LABS = 24;
    const double MAX_PAS = 300;
    const double MAX_QUIZ = 100;
    const double MAX_MIDTERM = 100;
    const double MAX_FINAL = 100;
    const double WEIGHT_LABS = 10;
    const double WEIGHT_PAS = 24;
    const double WEIGHT_QUIZ = 5;
    const double WEIGHT_MIDTERM = 25;
    const double WEIGHT_FINAL = 36;

    // Variables to store the entered scores
    double labScore, paScore, quizScore, midtermScore, finalScore;

    // To simply the requirements, we assume all input values are valid
    // We don't check the validity of the input values
    cout << "Enter your total lab score (Max: " << MAX_LABS << "): ";
    cin >> labScore;
    cout << "Enter your total PA score (Max: " << MAX_PAS << "): ";
    cin >> paScore;
    cout << "Enter your quiz score (Max: " << MAX_QUIZ << "): ";
    cin >> quizScore;
    cout << "Enter your midterm score (Max: " << MAX_MIDTERM << "): ";
    cin >> midtermScore;
    cout << "Enter your final score (Max: " << MAX_FINAL << "): ";
    cin >> finalScore;

    double weightedOverall = 0;
    double weightedExamOnly = 0;
    bool passExamOnly = false;
    bool passOverall = false;

    // TODO: You need to calculate the correct scores based on the input values
    // Note: Exam = Quiz, Midterm, and Final
    // === Start: Write your code within this region
    weightedOverall = (WEIGHT_LABS * labScore / MAX_LABS +           // weighted lab score
                       WEIGHT_PAS * paScore / MAX_PAS +              // weighted PA score
                       WEIGHT_QUIZ * quizScore / MAX_QUIZ +          // weighted quiz score
                       WEIGHT_MIDTERM * midtermScore / MAX_MIDTERM + // weighted midterm score
                       WEIGHT_FINAL * finalScore / MAX_FINAL)        // weighted final score
        ;

    weightedExamOnly = (WEIGHT_QUIZ * quizScore / MAX_QUIZ +          // weighted quiz score
                        WEIGHT_MIDTERM * midtermScore / MAX_MIDTERM + // weighted midterm score
                        WEIGHT_FINAL * finalScore / MAX_FINAL)        // weighted final score
        ;

    if (weightedExamOnly >= PASSING_EXAM_ONLY)
    {
        passExamOnly = true;
    }
    if (weightedOverall >= PASSING_OVERALL)
    {
        passOverall = true;
    }

    // === End: Write your code within this region

    // Finally, display the output
    cout << "Your exam only weighted score is: " << weightedExamOnly << endl;
    cout << "Your overall score is: " << weightedOverall << endl;
    if (passExamOnly && passOverall)
    {
        cout << "You passed! Take a rest!" << endl;
    }
    else
    {
        cout << "You failed! Please retake!" << endl;
    }

    return 0;
}