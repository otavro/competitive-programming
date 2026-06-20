#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>
#include <map>

using namespace std;

int isFalseSignature(string a, string b){
    int count = 0;
    int sizeOfa = a.size();
    int sizeOfb = b.size();

    if(sizeOfa != sizeOfb)
        return 1;

    for(int i = 0; i < sizeOfa; i++){
        if(a[i] != b[i])
            count++;
        if(count == 2)
            return 1;
    }

    return 0;
}

int main() {

    string name, signature;
    int n = -1, falseSignature;
    map<string, string> attendanceList;

    while (true)
    {
        cin >> n;
        falseSignature = 0;

        if(n == 0) break;
        
        for(int i = 0; i < n; i++){
            cin >> name >> signature;
            attendanceList.insert({name, signature});
        }
        
        cin >> n;
        
        for(int i = 0; i < n; i++){
            cin >> name >> signature;
            if(isFalseSignature(attendanceList[name], signature))
                falseSignature++;
    
        }

        cout << falseSignature << "\n";
        
        
        attendanceList.clear();
    }
    
   
    return 0;
}