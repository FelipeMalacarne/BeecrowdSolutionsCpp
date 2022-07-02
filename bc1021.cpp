#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double a;
    int n, aux;

    cin >> a;

    n = a * 100;

cout << fixed << setprecision(2);
    cout << "NOTAS:" <<endl;
    cout << n/10000 << " nota(s) de R$ 100.00" << endl;
    aux = n%10000;
    cout << aux/5000 << " nota(s) de R$ 50.00" << endl;
    aux = aux%5000;
    cout << aux/2000 << " nota(s) de R$ 20.00" << endl;
    aux = aux%2000;
    cout << aux/1000 << " nota(s) de R$ 10.00" << endl;
    aux = aux%1000;
    cout << aux/500 << " nota(s) de R$ 5.00" << endl;
    aux = aux%500;
    cout << aux/200 << " nota(s) de R$ 2.00" << endl;
    aux = aux%200;


    cout << "MOEDAS:" << endl;
     cout << aux/100 << " moeda(s) de R$ 1.00" << endl;
    aux = aux%100;
    cout << aux/50 << " moeda(s) de R$ 0.50" << endl;
    aux = aux%50;
    cout << aux/25 << " moeda(s) de R$ 0.25" << endl;
    aux = aux%25;
    cout << aux/10 << " moeda(s) de R$ 0.10" << endl;
    aux = aux%10;
    cout << aux/5 << " moeda(s) de R$ 0.05" << endl;
    aux = aux%5;
    cout << aux/1 << " moeda(s) de R$ 0.01" << endl;



    return 0;
}
