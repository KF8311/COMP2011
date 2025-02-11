//factorical.cpp
#include <iostream>
using namespace std;

unsigned long long int recursion(unsigned long long int num){
    if (num == 0||num == 1) return 1;
    else{
        return recursion(num-1) * num;
    }


}

int main(){
    int choice = 0; unsigned long long int number=0; unsigned long long int result=1;
    cout << "Which way do you want? (0,1,2) " << endl;
    cin >> choice;
    cout << "What factorial" << endl;;
    cin >> number;
    unsigned long long int index = 1;
    switch (choice){
        case 0:
        
        while (index <= number){
            result *= index;
            index++;
        }
        break;
        case 1:
        for (unsigned long long int i = 1;i <= number; i++){
            result *= i;
        }
        break;
        case 2:
            result = recursion(number);

        break;
        default:
        cerr << "Fuck you it is not 0, 1 or 2";
        break;
    }    
    cout << "The factorial is" << endl;
    cout << result;
    return 0;
}