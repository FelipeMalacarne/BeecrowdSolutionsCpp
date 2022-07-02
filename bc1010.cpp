#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    int cod_peca1, qntd_peca1, cod_peca2, qntd_peca2;
    double valor_peca1, valor_peca2, total;

    cin >> cod_peca1 >> qntd_peca1 >> valor_peca1;
    cin >> cod_peca2 >> qntd_peca2 >> valor_peca2;

    total = qntd_peca1 * valor_peca1 + qntd_peca2 * valor_peca2;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;


    return 0;
}