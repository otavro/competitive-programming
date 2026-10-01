#include <iostream>

using namespace std;

int main() {

    int number, even = 0;

    
    for(int i=0; i<5; i++){
        cin >> number;
        if(number % 2 == 0){
            even++;
        }
    }
    cout << even << " valores pares" << endl;
   
    return 0;
}