#include <iostream>

using namespace std;

int main() {

    int start, end, totalTime;

    cin >> start >> end;

    if(start == end){
        totalTime = 24;
    }
    else if(start < end){
        totalTime = (end - start);
    }
    else{
        totalTime =  (24 - start) + end; 
    }
    
    
    cout << "O JOGO DUROU " << totalTime <<" HORA(S)\n";

    return 0;
}