#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    int a[100] = {};
    int n;
    int count = 0;


    for(int i = 0; i < 6; i++){
        cin >> n;
        a[n] = 1;
    }
    for(int i = 0; i < 6; i++){
        cin >> n;
        if(a[n] != 0){
            count++;
        }
    }

    switch (count)
    {
    case 3:
        cout << "terno\n";
        break;
    case 4:
        cout << "quadra\n";
        break;
    case 5:
        cout << "quina\n";
        break;
    case 6:
        cout << "sena\n";
        break;
    default:
        cout << "azar\n";
        break;
    }



    

    return 0;
}