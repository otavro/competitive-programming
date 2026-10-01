#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    int n, x,y, sum;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        sum = 0;
        if(x > y)
            swap(x, y);
            
        for(int j = x+1; j < y; j++){
            if(j % 2 != 0)
                sum += j;
        }
        cout << sum << "\n";
    }

    return 0;
}