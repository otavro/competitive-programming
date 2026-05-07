#include <iostream>
#include <iomanip> 

int main() {

    int distance;
    double spentFuelTotal, averageConsumption;
    
    std::cin >> distance >> spentFuelTotal;
 
    averageConsumption = distance / spentFuelTotal;

    std::cout << std::fixed << std::setprecision(3); 
    std::cout << averageConsumption << " km/l" << std::endl;
    

    return 0;
}