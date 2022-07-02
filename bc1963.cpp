#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double n, entrada1, entrada2, saida;

    cin >> entrada1 >> entrada2;

    saida = (entrada2/entrada1 -1) * 100;

    cout << fixed << setprecision(2);
    cout << saida << "%\n";

    return 0;
}
