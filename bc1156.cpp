#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double impar, par = 2, i, soma = 1;

    cout << fixed << setprecision(2);

    for(impar = 3; impar <=39; impar+=2 ){

        soma += (impar/par);
        par *= 2;
    }

    cout << soma << endl;





    return 0;
}
