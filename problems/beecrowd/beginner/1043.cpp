#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double a, b, c;

    cin >> a >> b >> c;

    cout << fixed << setprecision(1);

    if ( a + b > c  && 
         b + c > a  &&
         c + a > b ){

        cout << "Perimetro = " << a + b + c << "\n";
            
        return 0;             
    }

    cout << "Area = " << ((a+b) * c) / 2 << "\n";
    
    
    return 0;
}