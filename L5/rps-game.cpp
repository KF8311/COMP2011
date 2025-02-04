#include <iostream>  /* File: rps-game.cpp */
#include <cstdlib>   // Info about random number generator rand() 
using namespace std; // A more concise solution with error message is in rps-game2.cpp

const int ROCK = 0, PAPER = 1, SCISSORS = 2; // 0/1/2 to represent ROCK/PAPER/SCISSORS


/* To print out the choice picked by the computer or the user */
int print_choice(char player, int choice) // 'C' for computer and 'U' for user
{
    if (player == 'C') 
        cout << "Computer";
    else if (player == 'U') 
        cout << "User";
    else
        return -1; // Better also print an error message

    cout << " picks ";

    if (choice == ROCK) 
        cout << "rock" << endl;
    else if (choice == PAPER) 
        cout << "paper" << endl;
    else if (choice == SCISSORS) 
        cout << "scissors" << endl;
    else
        return -1; // Better also print an error message

    return 0;
}



/* To print game result: "DRAW!", "COMPUTER WINS!", or "PLAYER WINS!" */
void print_game_result(int computer_choice, int user_choice)
{
    if (computer_choice == user_choice)
        cout << "\tDRAW!" << endl;

    else if (computer_choice == ROCK && user_choice == SCISSORS
        || computer_choice == SCISSORS && user_choice == PAPER
    	|| computer_choice == PAPER && user_choice == ROCK)
        cout << "\tCOMPUTER WINS!" << endl;

    else
        cout << "\tUSER WINS!" << endl;
}



int main() 
{
    int seed;	// To seed the random number generator
    cout << "Enter an integer: "; cin >> seed;
    srand(seed);  // Initialize random number generator 

    int computer_choice = rand()%3; // rand() produces an integer which is
    int user_choice = rand()%3; // then converted to ROCK/PAPER/SCISSORS
    
    if (print_choice('C', computer_choice) != 0) return -1; // -1 signals an error
    if (print_choice('U', user_choice) != 0) return -1; // -1 signals an error
    print_game_result(computer_choice, user_choice);
    return 0;
}
