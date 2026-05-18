#include <iostream>
#include <iterator>

using namespace std;
// If ord = 0 Asc || ord = 1 Desc
void bubbleSort(int list[3], int ord){
    int length = 3;
    for(int i = 0; i < length; i++){
        for(int j = 0; length - i - 1; j++){
            if(list[j] > list[j+1]){
                swap(list[j], list[j+1]);
            }
        }
    }

}

int main() {

    
    int list[3];

    cin >> list[0] >> list[1] >> list[2];

    bubbleSort(list, 0);

    for(int i =0; i < 3; i++){
        cout << list[i] << "\n";
    }
    

    return 0;
}