#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

int main() {

    double a;

    cout << fixed << setprecision(1);

    for(int i = 0; i < 100; i++){
        cin >> a;
        if(a <= 10){
            cout << "A[" << i << "] = " << a << "\n";
        }
    }

    return 0;
}