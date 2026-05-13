#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() {

    int answers = 0;
    int tea, contestantAnswer;
   

    cin >> tea;

    for(int i = 0; i < 5; i++){
        cin >> contestantAnswer;
        if(tea == contestantAnswer)
            answers++;
    }
    cout << answers << endl;
    return 0;
}