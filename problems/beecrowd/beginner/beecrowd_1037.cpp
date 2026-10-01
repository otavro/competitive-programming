#include <iostream>

using namespace std;

int main() {

    float number;

    cin >> number;

    if(number < 0 || number > 100){
        std::cout << "Fora de intervalo"  << std::endl;
    }
    else if(number <= 25.00 && number>=0){
        std::cout << "Intervalo [0,25]"  << std::endl;
    }
    else if(number <= 50.00){
        std::cout << "Intervalo (25,50]"  << std::endl;
    }
    else if(number <= 75.00){
        std::cout << "Intervalo (50,75]"  << std::endl;
    }
    else if(number <= 100.00){
        std::cout << "Intervalo (75,100]"  << std::endl;
    }


    return 0;
}