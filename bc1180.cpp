#include <iostream>

using namespace std;

int main() {

    int n, i, j;

    cin >> n;

    int x[n];

    int menor = 10001, posicao = -1;

    for(i = 0; i < n; i++){
        cin >> x[i];
        if(x[i] < menor){
            menor = x[i];
            posicao = i;
        }
    }

    cout << "Menor valor: " << menor << endl << "Posicao: " << posicao << endl;



    return 0;
}
