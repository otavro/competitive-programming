#include <iostream>
#include <iomanip> 

int main() {

    int hour, velocity;
    double fuel;
    
    std::cin >> hour >> velocity;

    fuel = (hour * velocity) / 12.0;    

    std::cout << std::fixed << std::setprecision(3); 
    std::cout << fuel << std::endl;
    

    return 0;
}