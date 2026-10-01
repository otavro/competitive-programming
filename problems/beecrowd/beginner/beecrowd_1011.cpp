#include <iostream>
#include <iomanip> 


int main() {

    int radius;
    double sphereVolume;

    std::cin >> radius;

    sphereVolume = (4/3.0) * 3.14159 * radius * radius * radius; 
 
    std::cout << std::fixed << std::setprecision(3); 
    std::cout << "VOLUME = " << sphereVolume << std::endl;
    

    return 0;
}