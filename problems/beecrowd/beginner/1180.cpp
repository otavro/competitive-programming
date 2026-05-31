#include <iostream>
 
#define INT_LOWEST -2147483648
#define INT_HIGHEST 2147483647

using namespace std;

int main() {

    int n, number, pos=0, lowest = INT_HIGHEST;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> number;

        if (number < lowest){
            lowest = number;
            pos = i;
        }
    }
    cout << "Menor valor: " << lowest << endl;
    cout << "Posicao: " << pos << endl;

    return 0;
}