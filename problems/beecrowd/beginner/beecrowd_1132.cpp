#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    int x, y, sum = 0;

    cin >> x >> y;

    if (y < x)
        swap(x, y);

    for(x=x; x<=y; x++){
        if(x % 13 != 0)
            sum += x;
    }

    cout << sum << "\n";

    return 0;
}