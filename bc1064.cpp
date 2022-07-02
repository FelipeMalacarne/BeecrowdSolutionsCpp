#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n_int = 0;
    int i;
    double valor, media, soma=0;

     for(i=0; i<6; i++){
        cin >> valor;
        if (valor > 0){
            n_int++;
            soma += valor;
        }
    }

    media = soma/n_int;

    cout << fixed << setprecision(1);
    cout << n_int << " valores positivos\n"<< media << endl;

    return 0;
}
