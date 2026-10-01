#include <iostream>

using namespace std;

int main() {

    int startHour, endHour, startMinute, endMinute, totalHour, totalMinutes;

    cin >> startHour >> startMinute >> endHour >> endMinute;
    
    
    if(startHour == endHour && startMinute >= endMinute){
        totalHour = 24;
    }
    else if(startHour < endHour){
        totalHour = (endHour - startHour);
    }
    else if (startHour > endHour){
        totalHour =  (24 - startHour) + endHour; 
    } else{
        totalHour = 0;
    }

    if( startMinute == endMinute){
        totalMinutes = 0;
    }
    else if(startMinute < endMinute){
        totalMinutes = endMinute - startMinute;
    }
    else {
        totalMinutes = (60 - startMinute) + endMinute;
        if(totalHour >= 1)
            totalHour -= 1;
    }

        
    cout << "O JOGO DUROU " << totalHour <<" HORA(S) E " << totalMinutes << " MINUTO(S)\n";

    return 0;
}