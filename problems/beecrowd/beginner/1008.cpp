#include <iostream>
#include <iomanip> 

int main() {

    int employerNumber, workedHours; 
    double amountReceivePerHour, employerSalary;
    
    std::cin >> employerNumber >> workedHours >> amountReceivePerHour;

    employerSalary = amountReceivePerHour * workedHours; 

    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "NUMBER = " << employerNumber << std::endl;
    std::cout << "SALARY = U$ " << employerSalary << std::endl;
    

    return 0;
}