#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() {

    int number;
    array<string, 100> ddds;

    ddds.fill("DDD nao cadastrado");
    
    ddds[61] = "Brasilia";
    ddds[71] = "Salvador";
    ddds[11] = "Sao Paulo";
    ddds[21] = "Rio de Janeiro";
    ddds[32] = "Juiz de Fora";
    ddds[19] = "Campinas";
    ddds[27] = "Vitoria";
    ddds[31] = "Belo Horizonte";

    cin >> number;

    cout << ddds[number] << endl;
   
    return 0;
}