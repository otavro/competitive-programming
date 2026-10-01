#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {

    int arr[20];

    for(int i = 0; i < 20; i++){
        cin >> arr[i];
    }

    int i = 0, j=19;
    while(i <= j){
        swap(arr[i], arr[j]);
        
        i++;
        j--;
    }

    for(i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << arr[i] << "\n";
    }

    return 0;
}