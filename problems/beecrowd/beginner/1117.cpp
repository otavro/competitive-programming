#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    double average = 0, x;
    int n = 0;

    while (true)
    {
        if(n==2) 
            break;
        cin >> x;

        if(x >= 0 && x<=10){
            n++;
            average+= x;
        }
        else
            cout << "nota invalida\n";
    }

    cout << fixed << setprecision(2);
    cout << "media = " << average/2 << "\n";

    return 0;
}