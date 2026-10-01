#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {

    int n, force;
    string name;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> name >> force;
        if(!name.compare("Thor"))
            cout << "Y\n";
        else
            cout << "N\n";
    }

    return 0;
}