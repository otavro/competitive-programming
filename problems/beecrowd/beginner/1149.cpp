#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {

    int a, n = 0, sum = 0;

    cin >> a;


    while (n <=0)
        cin >> n;
    
    for(int i = a; i < a+n; i++)
        sum +=i;

    cout << sum << "\n";

    return 0;
}