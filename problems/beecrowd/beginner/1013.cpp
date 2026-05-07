#include <iostream>

using namespace std;

int main() {

    int a, b, c, result; 

    std::cin >> a >> b >> c;

    if(a > b) result = a; 
    else result = b;
    if(c > result) result = c; 

    std::cout << result << " eh o maior" << std::endl;
    

    return 0;
}