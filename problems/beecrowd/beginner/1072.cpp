#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

int main() {

    int n, in = 0, out = 0, a;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        if(a>= 10 && a <= 20) 
            in++;
        else
            out++;
    }

    cout << in << " in\n";
    cout << out << " out\n";



    return 0;
}