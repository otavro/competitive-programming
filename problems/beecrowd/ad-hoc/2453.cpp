#include <iostream>
#include <string>

using namespace std;

int main() {

   
    string input;

    getline(cin, input);

    for(int i = 0; i < input.size(); i++){
        if(input[i] != 'p')
            cout << input[i];

        else if(i + 1 < input.size() && input[i+1] == 'p'){
                cout << input[i];
                i++;
        }   
    }
    cout <<"\n";

    return 0;
}