#include <iostream>

using namespace std;

int main() {

    int vet[10], x, i;

    for(i = 0; i < 10; i++){
        cin >> x;

        if (x > 0){
            vet[i] = x;

        }
        else{
            vet[i] = 1;
        }
    }

    for(i = 0 ; i < 10; i++){
        cout << "X[" << i << "] = " << vet[i] << endl;
    }



    return 0;
}
