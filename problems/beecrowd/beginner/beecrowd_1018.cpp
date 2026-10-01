#include <iostream>

using namespace std;

int main() {

    int banknotes;

    cin >> banknotes;

    cout << banknotes << endl;
    cout << banknotes / 100 << " nota(s) de R$ 100,00\n";
    banknotes = banknotes % 100;
    cout << banknotes / 50 << " nota(s) de R$ 50,00\n";
    banknotes = banknotes % 50;
    cout << banknotes / 20 << " nota(s) de R$ 20,00\n";
    banknotes = banknotes % 20;
    cout << banknotes / 10 << " nota(s) de R$ 10,00\n";
    banknotes = banknotes % 10;
    cout << banknotes / 5 << " nota(s) de R$ 5,00\n";
    banknotes = banknotes % 5;
    cout << banknotes / 2 << " nota(s) de R$ 2,00\n";
    banknotes = banknotes % 2;
    cout << banknotes / 1 << " nota(s) de R$ 1,00\n";

    
   

    return 0;
}