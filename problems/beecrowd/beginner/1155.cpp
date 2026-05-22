#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    double s = 1;

    for(int i = 2; i<=100; i++){
        s+= 1.0/i;
    }

    cout << fixed << setprecision(2); 
    cout << s << endl;


    return 0;
}