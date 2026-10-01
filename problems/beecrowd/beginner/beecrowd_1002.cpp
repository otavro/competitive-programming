#include <iostream>
#include <iomanip>
 
int main() {

    double radius;
    double pi = 3.14159;

    
    std::cin >> radius;

    std::cout << std::fixed << std::setprecision(4) << "A=" << pi * radius * radius  << std::endl;
    

    return 0;
}