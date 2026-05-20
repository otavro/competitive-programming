#include <iostream>
 
#define INT_LOW -2147483648

using namespace std;

int main() {

    int n, c=0, highest = INT_LOW;

    for(int i = 0; i <100; i++){
        cin >> n;
        if (n > highest){
            highest = n;
            c = i+1;
        }
    }
    cout << highest << endl;
    cout << c << endl;

    return 0;
}