#include <iostream>
#include <iomanip>
using namespace std;

int main() {

     double salario, taxa;

    cin >> salario;
    cout << fixed << setprecision(2);

    if (salario <= 2000.00){
       cout << "Isento" << endl;
       return 0;
    }

     if (salario > 2000.00 && salario <= 3000.00){
        taxa = (salario - 2000.00 ) * 0.08;
    }

    else if (salario > 3000.00 && salario <= 4500.00){
        taxa = (salario - 3000.00 ) * 0.18 + 80;
    }

     else if (salario > 4500.00 ){
        taxa = (salario - 4500.00 ) * 0.28 + 350;
    }

        cout << "R$ " << taxa <<endl;

    return 0;
}
