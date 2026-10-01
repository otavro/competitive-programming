#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    int n, c = 0;

    cin >> n;

    for(int i = 0; i <1000; i++){
        cout << "N[" <<i << "] = " << c << "\n";
        c++;
        if(c == n){
            c = 0;
        }
    }


    return 0;
}