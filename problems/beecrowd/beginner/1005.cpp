#include <iostream>
#include <iomanip>
 
int main() {

    double numberA, numberB;
    double result;
    
    std::cin >> numberA >> numberB;

    result = ((numberA * 3.5) + (numberB * 7.5)) / 11;

    std::cout << std::fixed << std::setprecision(5);
    std::cout <<  "MEDIA = " << result << std::endl;
    

    return 0;
}