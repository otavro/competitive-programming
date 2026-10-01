#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    double average;
    int n = 0, ages = 0, x;

    while (true)
    {
        cin >> x;
        if(x < 0) break;
        n++;
        ages += x;
    }
    cout << fixed << setprecision(2);
    cout << (ages * 1.0) / (n * 1.0) << "\n";
    

    return 0;
}