#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n, pass=2002;

    while (n != pass)
    {
        cin >> n;
        if(n != pass)
            cout << "Senha Invalida\n";
    }
    cout << "Acesso Permitido\n";

    
    
    return 0;
}