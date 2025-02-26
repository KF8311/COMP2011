#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// This function displays the remaining balance in digit grouping.
//
// Input:
// - balance - the current balance in the account. The balance is a non-negative
//   integer less than 9223372036854775807.
// Output:
// - "Current balance in digit grouping: <balance>" in your terminal output.
//   <balance> is the value of the balance variable in digit grouping.
//   For example, if the balance is 1234567, the output should be "Current
//   balance in digit grouping: 1,234,567".
//
// TODO 1: Implement the function, displayInGrouping(), with appropriate function
// header and body
void displayInGrouping(long balance){
    //balance = 2173849934350; 
    int digit_count = 0;
    int balance_string[20];
    do{
      balance_string[digit_count] = balance%10; //get the last digit till the first digit
      //cout<<balance_string[digit_count];
      digit_count++;
      balance /= 10;
    }while (balance > 0);
    //cout<<digit_count<<endl;
    cout <<"Current balance in digit grouping: ";
    for (int i = digit_count-1; i >= 0;--i){ //cout the digit in a reverse way
      if ((i%3 == 0) && (i != 0))
      cout << balance_string[i] << ','; //multiple of 3 get a comma, 3 digits so need comma
      else cout<< balance_string[i];
    }
    cout << endl;
    return;
}


// This function deposits money into the account.
//
// Input:
// - balance - the current balance in the account. The balance is a non-negative
//   integer less than 9223372036854775807.
//
// Functionality:
// Perform validation checking on input to ensure that the input number is
// positive.
//      - If the amount is non-positive, (1) print "Invalid amount. Deposit
//      amount must be positive." in the terminal.
//        (2) And do not update the balance if the amount is negative.
//      - If the amount is positive, (1) add the amount to the balance.
//        (2) And print "Deposit successful. New balance: <balance>" in the
//        terminal.
//            <balance> is the value of the balance variable.
// TODO 2: Implement the function, deposit(), with appropriate function header
// and body
void deposit(long &balance,long &amount){
  if (amount < 0){
    cout <<"Invalid amount. Deposit amount must be positive.";
  }
  else{
    balance += amount;
    cout << "Deposit successful. New balance: " << balance;
  }
  cout << endl;
  return;

}

// This function withdraws money from the account.
//
// Input:
// - balance - the current balance in the account. The balance is a non-negative
//   integer less than 9223372036854775807.
//
// Functionality:
// 1. You need to perform input validation checking to ensure that the input
// number is positive.
//      - If the amount is non-positive, print "Invalid amount. Withdrawal
//      amount must be positive." in the terminal.
// 2. Check whether the account has enough balance to withdraw the amount.
//      - If the balance is greater than or equal to the amount, (1) subtract
//      the amount from the balance.
//        (2) And print "Withdrawal successful. New balance: <balance>" in the
//        terminal.
//            <balance> is the value of the balance variable.
//      - If the balance is less than the amount, print "Insufficient funds." in
//      the terminal.
// TODO 3: Implement the function, withdraw(), with appropriate function header
// and body
void withdraw(long &balance, long &amount){
  if (amount <= 0){
    cout <<"Invalid amount. Withdrawal amount must be positive.";
  }
  else if (balance >= amount){
    balance -= amount;
    cout << "Withdrawal successful. New balance: " << balance;
  }
  else if (amount > balance){
    cout << "Insufficient funds.";

  }
  cout << endl;

  return;

}


int main() {
  long balance = 0; // initial balance
  long amount;
  int choice;

  while (true) {
    // Display menu options
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Balance in digit grouping" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
      // Deposit money into an account
      cout << "Enter amount to deposit: ";
      cin >> amount;
      cout << endl;

      deposit(balance, amount);
      break;
    case 2:
      // Withdraw money from an account
      cout << "Enter amount to withdraw: ";
      cin >> amount;
      cout << endl;

      withdraw(balance, amount);
      break;
    case 3:
      // Display account details
      displayInGrouping(balance);
      break;
    case 4:
      // Exit the program
      return 0;
    default:
      // Handle invalid menu choice
      cout << "Invalid choice. Try again." << endl;
    }
    cout << endl;
  }

  return 0;
}
