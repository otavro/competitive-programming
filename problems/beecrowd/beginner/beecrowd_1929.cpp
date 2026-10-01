#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {

    int arr[4];

    for(int i = 0; i < 4; i++)
        cin >> arr[i];
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr, arr + n);

    int a = arr[0] + arr[1];
    int b = arr[1] + arr[2];

    if(arr[2] < a || arr[3] < b)
        cout << "S\n";
    else
        cout << "N\n";
    

    return 0;
}