#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    int x, y, sum;

    while(true){

        cin >> x >> y;
        if(x <=0 || y<=0)
            break;
        sum = 0;

        if(x > y)
            swap(x, y);

        for(; x<y; x++){
            cout << x << ' ';
            sum+=x;
        }
        sum+=y;
        cout << y << " Sum=" << sum << "\n";

    }
    return 0;
}