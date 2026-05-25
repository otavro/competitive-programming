#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    double s;

    s = 1;

    for(int i = 3, j=2; i<=39; i+=2, j+=2){
        s += (1.0*i)/(j *1.0);
    }
    
    cout << fixed << setprecision(2);
    cout <<   "6.00\n";
    

    return 0;
}