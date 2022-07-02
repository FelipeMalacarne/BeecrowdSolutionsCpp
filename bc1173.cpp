#include <iostream>

using namespace std;

int main() {

    int vet[10];
    int i, x;

    cin >> x;

    vet[0] = x;

    for(i = 1; i < 10; i++){
            vet[i] = vet[i-1] * 2;
    }

    for(i = 0; i < 10; i++){
        cout << "N[" << i << "] = " << vet[i] << endl;
     }


    return 0;
}
