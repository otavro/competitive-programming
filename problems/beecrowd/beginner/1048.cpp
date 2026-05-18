#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int percentage;
    double salary, moneyEarned;

    cin >> salary;

    if (salary <= 400)
        percentage = 15;
    else if (salary <= 800)
        percentage = 12;
    else if (salary <= 1200)
        percentage = 10;
    else if (salary <= 2000)
        percentage = 7;
    else
        percentage = 4;

    moneyEarned = salary * (percentage / 100.0);

    cout << fixed << setprecision(2);

    cout << "Novo salario: " << salary + moneyEarned << "\n";
    cout << "Reajuste ganho: " << moneyEarned << "\n";
    cout << "Em percentual: " << percentage << " %\n";

    return 0;
}