#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double a, b, c, a2, bc2;

    cin >> a >> b >> c;

    if(a < b){
        swap(a, b);
    }
    if(b < c){
        swap(b, c);
        if(a < b){
            swap(a, b);
        }
    }
    
    a2 = a*a;
    bc2 = (b*b) + (c*c);

    if(a >= b+c) {
        cout << "NAO FORMA TRIANGULO\n";
        return 0;
    }

    if(a2 == bc2) cout << "TRIANGULO RETANGULO\n";
    if (a2 > bc2) cout << "TRIANGULO OBTUSANGULO\n";
    if (a2  < bc2) cout << "TRIANGULO ACUTANGULO\n";
    if(a == b && b ==c) cout << "TRIANGULO EQUILATERO\n";
    if(a == b && b !=c || a == c && c != b || c == b && a != c) cout << "TRIANGULO ISOSCELES\n";
    
    
    return 0;
}