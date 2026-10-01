#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    int x, y;

    cin >> x >> y;

    if (y < x)
        swap(x, y);

    for(x=x+1; x<y; x++){
        if(x % 5 == 2 || x % 5 == 3)
            cout << x << "\n";
    }

    return 0;
}