#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;


int main() {

    int n, totalLeds;
    string panel;
    // Maps each digit to its number of Leds.
    // Example: leds[1] returns 2 because the digit '1' uses 2 Leds.
    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    
    cin >> n;

    for(int i = 0; i <n; i++){
        totalLeds = 0;
        cin >> panel;

        for(int j = 0; j < panel.size(); j++){
            int number = panel[j] - '0'; //
            totalLeds += leds[number];
        }
        cout << totalLeds << " leds\n";
    }

    return 0;
}
