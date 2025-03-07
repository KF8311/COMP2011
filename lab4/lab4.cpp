#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

const int MAX_STUDENTS = 100;
const int MAX_FILENAME_LENGTH = 100;
const int MAX_BUFFER_SIZE = 100;
const int NUM_GRADES = 5;
// index of letter grades in gradeDistribution array
const int INDEX_A = 0, INDEX_B = 1, INDEX_C = 2, INDEX_D = 3, INDEX_F = 4;

// Function to calculate 3 statistical data: max, min, and average.
//
// Input:
// - scores[]: an array of integers representing the scores.
// - count: the number of scores in the array.
// - max: a reference to an integer where the maximum score will be stored.
// - min: a reference to an integer where the minimum score will be stored.
// - average: a reference to a double where the average score will be stored.
//
// Functionality:
// Updates the max, min, and average variables with the maximum, minimum, and
// average grades, respectively.
//
// Todo 1

void calculateMaxMinAverage(const int scores[], int count, int &max, int &min,
                            double &average)
{
  // ** Your TODO: Implement this function. **
  max = min = scores[0];
  average = 0;
  for (int i = 0; i < count; i++)
  {
    average += scores[i];
    if (scores[i] > max) // if find something larger than current max then replace
      max = scores[i];
    if (scores[i] < min) // if find something smaller than current min then replace
      min = scores[i];
  }
  average /= count;
  return;
}

// Function to sort the scores array in descending order using Bubble Sort.
//
// Input:
// - scores[]: an array of integers representing the scores.
// - count: the number of scores in the array.
//
// Bubble Sort Procedure:
// 1. Outer loop runs from 0 to (count - 1).
// 2. Inner loop runs from 0 to (count - i - 1) (where i is the current
// iteration of the outer loop).
// 3. For each iteration of the inner loop:
//    i. Compares scores[j] and scores[j + 1].
//    ii. If scores[j] < scores[j + 1], swaps the elements.
//
// Todo 2

void sortScores(int scores[], int count)
{
  // ** Your TODO: Implement this function. **
  // Insertion Sort alternative
  /*for (int i=1;i<count;i++){
    int key = scores[i];
    int j = i-1;
    while (scores[j] < key && j >= 0){
      scores[j+1]=scores[j--];
    }
    scores[j+1] = key;

  }*/
  for (int a = 0; a < count; a++)
  {
    for (int b = 0; b < count - a - 1; b++)
    {
      // Basic bubble sort
      if (scores[b] < scores[b + 1])
        swap(scores[b], scores[b + 1]);
    }
  }
  return;
}

// Function to assign letter grades based on numerical scores.
//
// Input:
// - CUTOFFS[]: an array of integers representing the cutoff scores for letter
// grades (A, B, C, D, F).
// - scores[]: an array of integers representing the numerical scores.
// - letterGrades[]: an array of characters where the assigned letter grades
// will be stored.
// - count: the number of scores in the array.
//
// Functionality:
// 1. Iterates through the scores array.
// 2. Compares each score with the cutoff scores in the CUTOFFS array.
// 3. Assigns a letter grade based on the following criteria:
//    - If the score is greater than or equal to CUTOFFS[0], assigns 'A'.
//    - Else if the score is greater than or equal to CUTOFFS[1], assigns 'B'.
//    - Else if the score is greater than or equal to CUTOFFS[2], assigns 'C'.
//    - Else if the score is greater than or equal to CUTOFFS[3], assigns 'D'.
//    - Else assigns 'F'.
//
// Todo 3
void assignLetterGrades(const int CUTOFFS[], const int scores[],
                        char letterGrades[], int count)
{
  // ** Your TODO: Implement this function. **
  for (int i = 0; i < count; i++)
  {
    int score = scores[i];
    if (score >= CUTOFFS[0])
      letterGrades[i] = 'A';
    else if (score >= CUTOFFS[1])
      letterGrades[i] = 'B';
    else if (score >= CUTOFFS[2])
      letterGrades[i] = 'C';
    else if (score >= CUTOFFS[3])
      letterGrades[i] = 'D';
    else
      letterGrades[i] = 'F';
  }
  return;
}

// Function to create grade distribution graph.
//
// Input:
// - letterGrades[]: an array of characters representing the letter grades (A,
// B, C, D, F).
// - count: the number of grades in the array.
// - gradeDistribution[]: an array of integers to store the counts of each of
// the 5 letter grades (i.e. A, B, C, D, F).
//
// Functionality:
// - Counts the frequency of each letter grade in the array, letterGrades.
//
// Todo 4
// const int INDEX_A = 0, INDEX_B = 1, INDEX_C = 2, INDEX_D = 3, INDEX_F = 4;
void createGraph(const char letterGrades[], int count,
                 int gradeDistribution[])
{
  // ** Your TODO: Implement this function. **
  for (int i = 0; i < count; i++)
  {
    // Counting each grade exist how many times
    switch (letterGrades[i])
    {
    case 'A':
      ++gradeDistribution[INDEX_A];
      break;
    case 'B':
      ++gradeDistribution[INDEX_B];
      break;
    case 'C':
      ++gradeDistribution[INDEX_C];
      break;
    case 'D':
      ++gradeDistribution[INDEX_D];
      break;
    case 'F':
      ++gradeDistribution[INDEX_F];
      break;
    default:
      break;
    }
  }
  return;
}

// Function to print distribution graph.
// - Displays the grade distribution graph using asterisks (*) to represent the
// count of each letter grade in the console.
// - Format of the output like the following example:
//      Suppose gradeDistribution[0] is 4, gradeDistribution[1] is 3,
//              gradeDistribution[2] is 5, gradeDistribution[3] is 2,
//              gradeDistribution[4] is 0
//      Grade Distribution:
//      A: ****
//      B: ***
//      C: *****
//      D: **
//      F:
void printGraph(const int gradeDistribution[])
{
  // Display the grade distribution graph
  cout << "Grade Distribution:" << endl;

  cout << "A: ";
  for (int i = 0; i < gradeDistribution[INDEX_A]; i++)
    cout << '*';
  cout << endl;

  cout << "B: ";
  for (int i = 0; i < gradeDistribution[INDEX_B]; i++)
    cout << '*';
  cout << endl;

  cout << "C: ";
  for (int i = 0; i < gradeDistribution[INDEX_C]; i++)
    cout << '*';
  cout << endl;

  cout << "D: ";
  for (int i = 0; i < gradeDistribution[INDEX_D]; i++)
    cout << '*';
  cout << endl;

  cout << "F: ";
  for (int i = 0; i < gradeDistribution[INDEX_F]; i++)
    cout << '*';
  cout << endl;
}

// Function to read grades from a file
void readGrades(const char filename[], int grades[], int &count)
{
  ifstream infile(filename);
  count = 0;
  while (infile >> grades[count])
  {
    count++;
  }
  infile.close();
}

// Function to write letter grades to a file
//
// Input:
// - filename[]: a string representing the name of the file to write the letter
// grades to.
// - letterGrades[]: an array of characters representing the letter grades (A,
// B, C, D, F).
// - count: the number of grades in the array.
//
// Functionality:
// 1. Opens the specified file for writing.
// 2. Iterates through the letterGrades array.
// 3. Writes each letter grade to the file, each on a new line. (YOUR TODO, fill
// in the blank)
// 4. Closes the file after writing all the letter grades.
//
// Todo 5
void writeLetterGrades(const char filename[], const char letterGrades[],
                       int count)
{
  // open file for writing, truncating the file if it already exists
  // ios::out: Open file for output operations.
  // ios::trunc: If the file already exists, its contents will be truncated
  // before opening the file.
  ofstream outfile(filename, ios::out | ios::trunc);
  for (int i = 0; i < count; i++)
  {
    // ** Your TODO: Write each letter grade to the output file. **
    outfile << letterGrades[i] << endl;
  }
  outfile.close();
}

// Main function
// Note: Do not modify the main function.
int main()
{
  const int CUTOFFS[4] = {85, 75, 60, 40};

  int count;
  int scores[MAX_STUDENTS];
  char letterGrades[MAX_STUDENTS];
  char filename[MAX_FILENAME_LENGTH];
  char outputFilename[MAX_FILENAME_LENGTH];
  char buffer[MAX_BUFFER_SIZE];
  int max, min;
  double average;
  int gradeDistribution[NUM_GRADES] = {0}; // initialized to zeros

  // Set the precision of the double output to 2 decimal places
  cout << fixed << setprecision(2);

  // Prompt the user to enter the index of the test file
  cout << "Enter the path of the test file to read (e.g. testcase/file_in1.txt): ";
  cin >> filename;

  // Read grades from the specified file
  readGrades(filename, scores, count);
  // Print sorted grades
  cout << "Grades read from the test file:" << endl;
  for (int i = 0; i < count; i++)
  {
    cout << scores[i] << " ";
  }
  cout << endl
       << endl;

  // Calculate and display statistical data
  calculateMaxMinAverage(scores, count, max, min, average);
  cout << "Max grade: " << max << endl;
  cout << "Min grade: " << min << endl;
  cout << "Average grade: " << average << endl;
  cout << endl;

  // Assign letter grades
  assignLetterGrades(CUTOFFS, scores, letterGrades, count);
  cout << "Assigned Letter Grades:" << endl;
  for (int i = 0; i < count; i++)
  {
    cout << letterGrades[i] << " ";
  }
  cout << endl
       << endl;

  // Prompt the user to enter the index of the test file
  cout << "Enter the path of the file to write (e.g. testcase/file_out1.txt): ";
  cin >> outputFilename;

  // Write letter grades to the output file
  writeLetterGrades(outputFilename, letterGrades, count);

  // Sort the grades array in descending order
  sortScores(scores, count);

  // Print sorted grades in descending order
  cout << "Grades sorted in descending order:" << endl;
  for (int i = 0; i < count; i++)
  {
    cout << scores[i] << " ";
  }
  cout << endl
       << endl;

  // Create grade distribution graph
  createGraph(letterGrades, count, gradeDistribution);

  // Print grade distribution graph
  printGraph(gradeDistribution);

  // Dump the output file to the console
  ifstream outfile(outputFilename);
  cout << "\nContent of the output file:" << endl;
  while (outfile >> buffer)
  {
    cout << buffer << endl;
  }

  return 0;
}