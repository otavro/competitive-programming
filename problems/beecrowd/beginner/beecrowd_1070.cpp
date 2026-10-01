#include <iostream>

using namespace std;

int main() {

    int number;

    cin >> number;

    for(int i=0; i<6; i++){
        if(number % 2 == 0){
            number++;
        }
        cout << number << endl;
        number+=2;
    }
   

    return 0;
}