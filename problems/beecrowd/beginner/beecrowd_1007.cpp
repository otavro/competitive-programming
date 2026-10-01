#include <iostream>
 
int main() {

    int A, B, C, D;
    int result;

    std::cin >> A >> B >> C >> D;

    result = (A * B - C * D); 

    std::cout << "DIFERENCA = " << result << std::endl;
    

    return 0;
}