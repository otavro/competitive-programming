#include <iostream>
#include <iomanip> 
#include <math.h>

int main() {

    double x1, y1, x2, y2, distance;
    
    std::cin >> x1 >> y1 >> x2 >> y2;

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    std::cout << std::fixed << std::setprecision(4); 
    std::cout << distance << std::endl;
    

    return 0;
}