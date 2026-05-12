#include <iostream>
#include <iomanip> 

using namespace std;

int main() {

    int positiveNumbers = 0;
    float mean = 0, number;

    for(int i = 0; i < 6; i++){
        cin >> number;

        if(number > 0){
            mean += number;
            positiveNumbers++;
        }

    }

    mean /= positiveNumbers;
    
    cout << fixed << setprecision(1);

    cout << positiveNumbers <<" valores positivos\n";
    cout << mean <<"\n";
    

    return 0;
}