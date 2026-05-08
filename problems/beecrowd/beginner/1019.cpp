#include <iostream>
#include <iomanip> 

int main() {

    int hour, minute, second;
    int valueInSeconds;

    std::cin >> valueInSeconds;

    second = valueInSeconds % 60;
    valueInSeconds = valueInSeconds / 60;
    minute = valueInSeconds % 60;
    valueInSeconds = valueInSeconds / 60;
    hour = valueInSeconds % 60;

    std::cout << hour << ":" << minute << ":" << second << std::endl;
    

    return 0;
}