#include <iostream>
 
using namespace std;
 
int main() {
 
    int saida, tempo, fuso, hora_destino;

    cin >> saida >> tempo >> fuso;

    hora_destino = saida + tempo + fuso;

    if (hora_destino > 24){
        hora_destino -= 24;
    }

    if (hora_destino < 0){
        hora_destino += 24;
    }

    cout << hora_destino << endl;

    return 0;
}