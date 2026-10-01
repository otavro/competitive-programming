#include <iostream>

using namespace std;

int main() {

    int number, 
    even = 0,
    positive = 0,
    negative = 0,
    odd = 0;

    
    for(int i=0; i<5; i++){
        cin >> number;

        if(number > 0){
            positive++;
        } 
        else if (number < 0) {
            negative++;
        }

        if(number % 2 == 0){
            even++;
        } else{
            odd++;
        }
    }
    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negative << " valor(es) negativo(s)" << endl;
   
    return 0;
}