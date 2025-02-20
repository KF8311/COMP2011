//Phoebe.cpp
#include <iostream>
using namespace std;

int main(){
    const int INITIAL_NUMBER = 11; 
    const float RATE = 0.5;   
    const int MAX_NUMBER = 20000;
    int time = 0;
    float number = INITIAL_NUMBER;
    cout << "設被菲比敲過的每一個調諧器每1分鐘就會生出0.5個可以繼續生殖的調諧器, " << 
            "那麼幾分鐘後調諧器會大於20000?\n";
    while (number < MAX_NUMBER){
        number = static_cast<int>(number) * (RATE) + number;
        time++;
    }
    cout << "需要" << time << "分鐘\n";
    return 0;
}