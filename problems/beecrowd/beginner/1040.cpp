#include <iostream>

using namespace std;

int main() {

    int i, j=7, count;

    for(i = 1; i <=9; i+=2){
        for(count=0; count<3; count++){
            cout << "I=" << i << " J=" << j << endl;
            j--;
        }
        j += 5;
    }

    return 0;
}