#include <iostream>
#include <string>

using namespace std;

int main() {

    int entrada;
    string saida = "";

    int divisores[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romano[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    cin >> entrada;
    for(int i = 0; i < 13; i++){
        while(entrada >= divisores[i]){
            saida += romano[i];
            entrada -= divisores[i];
            }
    }

    cout << saida << endl;


    return 0;
}
