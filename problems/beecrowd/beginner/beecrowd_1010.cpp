#include <iostream>
#include <iomanip> 

int main() {

    int idProduct, unitsOfProducts;
    double productPrice;
    double totalPrice = 0.0;
    

    for(int i = 0; i <= 1; i ++){
        std::cin >> idProduct >> unitsOfProducts >> productPrice;
        totalPrice += unitsOfProducts * productPrice;
    }
 
    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "VALOR A PAGAR: R$ " << totalPrice << std::endl;
    

    return 0;
}