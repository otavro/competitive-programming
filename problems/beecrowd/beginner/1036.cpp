#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double a, b, c, delta, r1, r2;

    cin >> a >> b >> c;

    delta = b* b - 4 * a * c;

    if(delta < 0 || a == 0){
        cout << "Impossivel calcular\n";
        return 0;
    }

    r1 = (-b + sqrt(delta)) / (2*a);
    r2 = (-b - sqrt(delta)) / (2*a);

    cout << fixed << setprecision(5);
    cout << "R1 = " << r1 << "\n";
    cout << "R2 = " << r2 << "\n";

    
   

    return 0;
}