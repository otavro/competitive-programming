#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {

    int x[10];

    for(int i = 0; i < 10; i++){
        cin >> x[i];
        if(x[i] <= 0)
            x[i] = 1;
    }

    for(int i = 0; i < 10; i++){
        cout << "x[" << i << "] = " << x << "\n";
    }

    return 0;
}