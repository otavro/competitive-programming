#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    double n1, n2, n3,  average;
    int c;

    cin >> c;
    
    cout << fixed << setprecision(1); 
    for(int i = 0; i < c ; i++){
        cin >> n1 >> n2 >> n3;
        cout << ((n1 * 2)+ (n2 * 3) + (n3 * 5)) / 10  << endl;

    }



    return 0;
}