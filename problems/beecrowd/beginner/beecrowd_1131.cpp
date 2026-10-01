#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    int i, g, interVit = 0, gremioVit = 0,empates = 0, grenais = 0;


    while (1){
        cin >> i >> g;
        grenais++;
        if(i > g) interVit++;
        if(g > i) gremioVit++;
        if(i == g) empates++;

        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> i;
        if(i == 2)
            break;  
    }

    cout << grenais << " grenais\n";
    cout << "Inter:" << interVit << "\n";
    cout << "Gremio:" << gremioVit << "\n";
    cout << "Empates:" << empates << "\n";

    if(interVit > gremioVit) cout << "Inter venceu mais\n";
    if(interVit < gremioVit) cout << "Gremio venceu mais\n";
    if(interVit < gremioVit) cout << "Não houve vencedor\n";

    

    return 0;
}