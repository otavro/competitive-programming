
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

   int n, factorial = 1;

   cin >> n;

   if(n == 0){
       cout << 0 << "\n";
        return 0;
    }

   for(int i =1; i <=n ; i++){
        factorial *= i;
   }

   cout << factorial << "\n";

    return 0;
}