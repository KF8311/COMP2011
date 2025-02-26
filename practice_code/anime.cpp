#include <iostream>
using namespace std;
int main(){
    double rating = 0.0;
    for(int i = 1;i < 20;i++){
        rating = static_cast<double>(i * 5 + 1 * 1) / (i+1);
        cout << i << ":" << rating << endl;
    }
    
    return 0;
}