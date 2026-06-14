#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {

    int n, x;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x; 

        if(x % 2 == 0)
            cout << "0\n";
        else
            cout << "1\n";
    }

    return 0;
}