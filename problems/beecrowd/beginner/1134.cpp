#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n, alchool = 0, gasoline = 0, diesel = 0;

    while (true)
    {
        cin >> n;

        if(n == 1) alchool++;
        if(n == 2) gasoline++;
        if(n == 3) diesel++;
        if(n == 4) break;
    }

    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << alchool << "\n";
    cout << "Gasolina: " << gasoline << "\n";
    cout << "Diesel: " << diesel << "\n";
    
    
    
    return 0;
}