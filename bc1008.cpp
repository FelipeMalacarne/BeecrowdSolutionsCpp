#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int hrs, numero;
    double sal_hora, salario;

    cin >> numero;
    cin >> hrs;
    cin >> sal_hora;

    salario = hrs * sal_hora;

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << numero << endl;
    cout << "SALARY = U$ " << salario << endl;

    return 0;
}