#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    int n;

    while (1)
    {
        cin >> n;

        if(n == 0) break;

        for(int i = 1; i<n; i++){
            cout << i << " ";
        }
        cout << n << "\n";
    }
    
    

    return 0;
}