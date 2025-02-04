#include <iostream>     /* File: bool-blood-donation.cpp */
using namespace std;	

int main() 
{
    char donor_blood_type, recipient_blood_type;
    bool exact_match, match_all;
    
    cout << "Enter donor's bloodtype: A, B, C (for AB), and O. ";
    cin >> donor_blood_type;
    cout << "Enter recipient's bloodtype: A, B, C (for AB), and O. ";
    cin >> recipient_blood_type;
    
    exact_match = (donor_blood_type == recipient_blood_type);
    match_all = (donor_blood_type == 'O');
    
    if (exact_match || match_all)
        cout << "Great! A donor is found!" << endl;
    else
        cout << "Keep searching for the right donor." << endl;

    return 0;
}
