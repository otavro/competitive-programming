#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    int a, b, sum = 0;

    cin >> a >> b;

    if(b < a)
        swap(a, b);
    a++;
    while(a < b){
        
        if(abs(a) % 2 == 1)
            sum+=a;
        a++;
    }

    cout << sum << "\n";


    return 0;
}