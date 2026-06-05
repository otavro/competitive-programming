
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

   double m[12][12], result = 0;
   char type;
   int line;

   cin >> line >> type;

   for(int i = 0; i<12; i++){
    for(int j = 0; j<12; j++){
        cin >> m[i][j];
    }
   }

    for(int i= 0; i < 12; i++){
        result += m[line][i];
    }
    
    if(type == 'M') result/=12;

    cout << fixed << setprecision(1);
    cout << result << "\n";

    return 0;
}