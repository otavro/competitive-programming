#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
    Bubble Sort 
    - Compare pairs of adjacent elements  swap their posiitons if they are in the wrong order.
    - This process repeats until there are no more elements that needs to be changed (the elements are sorted)

    Performace:
    - Best Case: O(N)
    - Worst Case: O(N^2)
    - Not recommended for large amounts of data

*/

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

int main(){

    vector<int> list = {5, 4, 3, 2, 1, 10 , 8 , 7};

    bubbleSort(list);

    for(int i = 0; i < list.size(); i++){
        cout << list[i] << endl;
    }

    return 0;
}