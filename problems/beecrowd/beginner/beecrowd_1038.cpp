#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float price[6] = {0.0, 4.0, 4.5, 5.0, 2.0, 1.50};
    int amount, item;

    cin >> item >> amount;
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << amount * price[item] << "\n";
    

    return 0;
}