#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double m[12][12];
    int i, j, n;
    double soma = 0.0, media = 0.0;
    char operacao;
    int linha;

    cout << fixed << setprecision(1);

    cin >> linha;
    cin >> operacao;

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin >> m[i][j];
        }
    }

    if(operacao == 'S'){
        for(j = 0; j < 12; j++){
            soma += m[linha][j];
        }
        cout << soma << endl;
    }

    else if(operacao == 'M'){
         for(j = 0; j < 12; j++){
            soma += m[linha][j];
            media = soma/12;
        }
        cout << media << endl;
    }









    return 0;
}
