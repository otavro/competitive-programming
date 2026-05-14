#include <iostream>

using namespace std;

int main() {

   
    int positiveNumbers = 0;
    float number;

    
    for(int i = 0; i <6; i++){
        cin >> number;
        if(number > 0)
            positiveNumbers++;
    }

    cout << positiveNumbers << " valores positivos\n";

    return 0;
}