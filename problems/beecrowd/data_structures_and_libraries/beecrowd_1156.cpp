#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main() {

    string input;

    while(cin >> input){
        int parenthesis = 0;

        for(int i = 0; i < input.size(); i++){
            if(parenthesis == -1) break;
            if(input[i] == '(') parenthesis++;
            if(input[i] == ')') parenthesis--;
        }

        if(parenthesis == 0)  cout << "correct\n";
        else  cout << "incorrect\n";
        
    }
    

    return 0;
}