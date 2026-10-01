#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {

   
    string month[13];
    int monthNumber;

    cin >> monthNumber;

    month[0] = "N/A"; 
    month[1] = "January";
    month[2] = "February";
    month[3] = "March";
    month[4] = "April";
    month[5] = "May";
    month[6] = "June";
    month[7] = "July";
    month[8] = "August";
    month[9] = "September";
    month[10] = "October";
    month[11] = "November";
    month[12] = "December";


    cout << month[monthNumber] << endl;

    return 0;
}