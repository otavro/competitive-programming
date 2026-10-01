#include <iostream>
#include <iomanip> 


int main() {

    double a, b, c;
    double triangleArea, circleArea, trapeziumArea, squareArea, rectangleArea;
    double pi = 3.14159;

    std::cin >> a >> b >> c;

    triangleArea    = 0.5 * a * c;
    circleArea      = pi * c * c;
    trapeziumArea   = 0.5 * (a + b) * c;
    squareArea      = b * b;
    rectangleArea   = a * b;


 
    std::cout << std::fixed << std::setprecision(3); 
    std::cout << "TRIANGULO: "  << triangleArea << std::endl;
    std::cout << "CIRCULO: "    << circleArea << std::endl;
    std::cout << "TRAPEZIO: "   << trapeziumArea << std::endl;
    std::cout << "QUADRADO: "   << squareArea << std::endl;
    std::cout << "RETANGULO: "  << rectangleArea << std::endl;
    

    return 0;
}