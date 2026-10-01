#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int count2 = 0, count3 = 0, count4 = 0, count5 = 0;

    for (int i = 0; i < n; ++i) {
        int number;
        cin >> number;

        if (number % 2 == 0) count2++;
        if (number % 3 == 0) count3++;
        if (number % 4 == 0) count4++;
        if (number % 5 == 0) count5++;
    }

    cout << count2 << " Multiplo(s) de 2\n";
    cout << count3 << " Multiplo(s) de 3\n";
    cout << count4 << " Multiplo(s) de 4\n";
    cout << count5 << " Multiplo(s) de 5\n";

    return 0;
}