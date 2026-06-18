#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <math.h>
#include <map>

using namespace std;

int main() {

    int n, numberOfItems, itemsToBuy;
    string item;
    double amount, totalPrice;
    map<string, double> products;

    cin >> n;

    for(int i = 0; i < n; i++){
        totalPrice = 0;
        cin >> numberOfItems;
        
        for(int j = 0; j < numberOfItems; j++){
            cin >> item >> amount;
            products.insert({item, amount});
        }
        
        cin >> itemsToBuy;

        for(int j = 0; j < itemsToBuy; j++){
            cin >> item >> amount;
            totalPrice += products[item] * amount;
        }

        cout << fixed << setprecision(2);
        cout << "R$ " << totalPrice << "\n";
        
        products.clear();
    }

    return 0;
}