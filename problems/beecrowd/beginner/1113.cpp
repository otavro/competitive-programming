#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    int a, b;

    while(true){
        cin >> a >> b;

        if(a == b){
            break;
        }
        else if(a>b){
            cout << "Decrescente\n";
        }
        else{
            cout << "Crescente\n";
        }
        
    }


    return 0;
}