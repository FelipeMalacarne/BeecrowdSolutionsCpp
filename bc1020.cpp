#include <iostream>

using namespace std;

int main() {

    int n, ano, mes, dia, aux;

    cin >> n;

    ano = n/365;
        aux = n % 365;

    mes = aux / 30;
        aux = aux % 30;

    dia = aux;

    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia <<" dia(s)" << endl;
    return 0;
}
