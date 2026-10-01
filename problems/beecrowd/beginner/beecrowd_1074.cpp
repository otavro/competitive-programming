#include <iostream>
#include <iomanip> 

using namespace std;

int main() {

    int n, number;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> number;
        if(number == 0){
            cout << "NULL\n";
            continue;
        }

        if(number % 2 == 0){
            cout << "EVEN ";
        }
        else{
            cout << "ODD ";
        }
        
        if(number > 0){
            cout << "POSITIVE\n";
        }
        else{
            cout << "NEGATIVE\n";
        }
    }

    return 0;
}