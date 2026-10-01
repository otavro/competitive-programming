#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<int> &list){
    int length = list.size();
    bool swapped;

    for(int i = 0; i < length; i++){  
        swapped = false;
        for(int j = 0;  j < length - i - 1; j++){
            if(list[j] > list[j+1]){
                swap(list[j], list[j+1]);
                swapped = true;
            } 
        }
        if(!swapped){
            break;
        }
    }

}


int main() {

    
    vector<int> list;
    vector<int> orig;
    int n;

    for(int i = 0; i <3; i++){
        cin >> n;
        list.push_back(n);
        orig.push_back(n);
    }
    

    bubbleSort(list);

    for(int i =0; i < 3; i++){
        cout << list[i] << "\n";
    }
    cout << "\n";

    for(int i =0; i < 3; i++){
        cout << orig[i] << "\n";
    }
    

    return 0;
}