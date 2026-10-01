#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;


int main() {

    double average = 0, x;
    int n = 0, op=0;
    
    cout << fixed << setprecision(2);
    
    while (true)
    {
        if(n==2){
            cout << "media = " << average/2 << "\n";

            do {
                cout << "novo calculo (1-sim 2-nao)\n";
                cin >> op;
            }while( op!= 1 && op != 2);
            
            if(op == 2)
                break;
            n = 0;
            average = 0;
        } 

        cin >> x;

        if(x >= 0 && x<=10){
            n++;
            average+= x;
        }
        else
            cout << "nota invalida\n";
    }

    

    return 0;
}