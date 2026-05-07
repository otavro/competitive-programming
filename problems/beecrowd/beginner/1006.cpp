#include <iostream>
#include <iomanip>
 
int main() {

    double numberA, numberB, numberC;
    double result;
    
    std::cin >> numberA >> numberB >> numberC;

    result = ((numberA * 2) + (numberB * 3) + (numberC * 5)) / 10;

    std::cout << std::fixed << std::setprecision(1);
    std::cout <<  "MEDIA = " << result << std::endl;
    

    return 0;
}