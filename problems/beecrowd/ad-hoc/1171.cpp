#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    int n, x;

    map<int, int> numbers;

    cin >> n; 

    for(int i = 0; i < n; i++){
        cin >> x;
        numbers[x]++;
    }

    for(const auto& [key, value] : numbers){
        cout << key << " aparece " << value << " vez(es)\n";
    }



    

    return 0;
}