#include <iostream>
#include <string>

/*
    Binary Search Algorithm Implementation on a Sorted Array

*/


using namespace std;

int binarySearch(int arr[], int size, int number){
    int left = 0;
    int right = size - 1;
    int mid;

    while(left <= right){
        mid = (left + right) / 2;
        if(number == arr[mid])
            return mid;
        if(number < arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main(){

    int list[5] = {1, 3, 5, 7, 9};

    cout << binarySearch(list, 5, 3) << endl;
    cout << binarySearch(list, 5, -1) << endl;

    return 1;
}