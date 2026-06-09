#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    long long int a, b;

    while (cin >> a >> b)
    {
        a = a ^ b;
        cout << a << "\n";
    }
    

    return 0;
}