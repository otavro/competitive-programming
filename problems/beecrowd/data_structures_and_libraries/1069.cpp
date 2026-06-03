#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    int count = 0, stack=0, n;
    string diamonds;

    cin >> n;

    for(int i = 0; i < n; i++){
        count = 0;
        stack = 0;
        cin >> diamonds;
        for(int j = 0; j < diamonds.size(); j++){
            if(diamonds[j] == '<'){
                stack++;
            } 
            else if(diamonds[j] == '>' && stack > 0){
                stack--;
                count++;
            }
        }
        cout << count << "\n";
    }
    

    return 0;
}