#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double m[12][12];
    int i, j, n = 0, diag = 11;
    double soma = 0.0, media = 0.0;
    char operacao;

    cout << fixed << setprecision(1);

    cin >> operacao;

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin >> m[i][j];
        }
    }

      for(i = 0; i < 12; i++){
           for(j = 0; j < diag; j++){

            soma += m[i][j];
            n++;
        }
        diag--;
    }

    if(operacao == 'S'){
        cout << soma << endl;
    }

    else if(operacao == 'M'){
            media = soma/n;
            cout << media << endl;
    }









    return 0;
}

