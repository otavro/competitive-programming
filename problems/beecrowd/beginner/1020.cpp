#include <iostream>
#include <iomanip> 

using namespace std;

int main() {

    int days;

    cin >> days;

    cout << days / 365 << " ano(s)\n";
    days = days % 365;
    
    cout << days / 30 << " mes(es)\n";
    days = days % 30;
    
    cout << days << " dia(s)\n";


    return 0;
}