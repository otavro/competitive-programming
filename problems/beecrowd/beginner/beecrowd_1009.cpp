#include <iostream>
#include <iomanip> 

int main() {

    std::string employerName;
    double employerSalary, totalSales;
    
    std::cin >> employerName >> employerSalary >> totalSales;

    employerSalary = employerSalary + (totalSales * 0.15); 

    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "TOTAL = R$ " << employerSalary << std::endl;
    

    return 0;
}