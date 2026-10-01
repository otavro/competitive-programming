#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

/*
    Euclidean Division Theorem

    a = b * q + r

    Given a dividend 'a' and a divisor 'b', the remainder 'r'
    must satisfy:

        0 <= r < |b|

    Since 'r' is the remainder of the division of 'a' by 'b',
    we can brute-force all possible values of 'r' in this range
    and check whether:

        (a - r) % b == 0

    Once a valid remainder is found, the quotient 'q' can be
    computed directly as:

        q = (a - r) / b

*/

int main() {

    int a, b, r, q;


    cin >> a >> b;

    for(int i = 0; i <=abs(b); i++){
        if(((a-i) % b )== 0){
            r = i;
            q = (a - r) / b;
            break;
        }
    }

    cout << q << " " << r << "\n"; 

    return 0;
}