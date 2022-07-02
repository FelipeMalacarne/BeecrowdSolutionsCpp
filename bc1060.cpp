#include <iostream>

using namespace std;

int main(){

    double valores[6];
    int i;
    int positivos = 0;

    for(i=0; i<6; i++){
        cin >> valores[i];
    }

    for(i=0; i<6; i++){
        if(valores[i] > 0){
            positivos++;
        }
    }

    cout << positivos << " valores positivos\n";



    return 0;
}
