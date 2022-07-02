#include <iostream>

using namespace std;

int main(){
    int i, par=0, impar=0, positivo=0, negativo=0;
    int entrada[5];
   
    ////entrada
    for(i=0; i<5; i++){
        cin >> entrada[i];
    }

    //// par
    for(i=0; i<5; i++){
        if(entrada[i] % 2 == 0){
            par++;
        }
    }

     //// impar
    for(i=0; i<5; i++){
        if(entrada[i] % 2 != 0){
            impar++;
        }
    }

     //// positivo
    for(i=0; i<5; i++){
        if(entrada[i] > 0){
            positivo++;
        }
    }

     //// negativo
    for(i=0; i<5; i++){
        if(entrada[i] < 0 ){
            negativo++;
        }
    }


    cout << par << " valor(es) par(es)\n" << impar <<" valor(es) impar(es)\n"
    << positivo << " valor(es) positivo(s)\n" << negativo << " valor(es) negativo(s)\n";

    
    return 0;
}
