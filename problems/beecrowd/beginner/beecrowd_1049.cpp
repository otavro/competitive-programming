#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

int main() {
    string a, b, c;
    map <string, map<string, map<string, string>>> arvore;

    arvore["vertebrado"]["ave"]["carnivoro"]      = "aguia";
    arvore["vertebrado"]["ave"]["onivoro"]        = "pomba";
    arvore["vertebrado"]["mamifero"]["onivoro"]   =  "homem";
    arvore["vertebrado"]["mamifero"]["herbivoro"] =  "vaca";
    
    arvore["invertebrado"]["inseto"]["hematofago"]   =  "pulga";
    arvore["invertebrado"]["inseto"]["herbivoro"]    =  "lagarta";
    arvore["invertebrado"]["anelideo"]["hematofago"] =  "sanguessuga";
    arvore["invertebrado"]["anelideo"]["onivoro"]    =  "minhoca";
    

    cin >> a >> b >> c;

    cout << arvore[a][b][c] << "\n";

    return 0;
}