#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    int n, totalRabbits = 0, totalRats = 0, totalFrogs = 0,  total = 0;
    char type;
    int amount;

    cin >> n;
    
    cout << fixed << setprecision(2);

    for(int i = 0; i < n; i++){
        cin >> amount >> type;

        if(type == 'C') totalRabbits += amount;
        if(type == 'R') totalRats    += amount;
        if(type == 'S') totalFrogs   += amount;
    }

    total = totalFrogs + totalRabbits + totalRats;

    cout << "Total: " << total  <<" cobaias\n";
    cout << "Total de coelhos: " << totalRabbits << "\n";
    cout << "Total de ratos: " <<   totalRats  << "\n";
    cout << "Total de sapos: " <<   totalFrogs << "\n";
    cout << "Percentual de coelhos: " << totalRabbits / (total * 1.0) * 100.00 << " %\n";
    cout << "Percentual de ratos: " << totalRats / (total * 1.0) * 100.00<< " %\n";
    cout << "Percentual de sapos: " << totalFrogs / (total * 1.0) * 100.00<< " %\n";



    return 0;
}