#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {

    int x, z, sum = 0, count=1;

    cin >> x;
    cin >> z;

    while(x >= z)
        cin >> z;
    
    sum = 0;

    while (sum < z)
    {
        sum += x;
        x++;
        count++;
    }

    cout << count << '\n';
    

    return 0;
}