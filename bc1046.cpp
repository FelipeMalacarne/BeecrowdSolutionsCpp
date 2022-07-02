#include <iostream>
 
using namespace std;
 
int main() {
 
   int hora_inicial, hora_final, duracao;

    cin >> hora_inicial >> hora_final;

    if (hora_final > hora_inicial){
        duracao = hora_final - hora_inicial;
        cout << "O JOGO DUROU "<< duracao <<" HORA(S)" << endl;
    }
    else if (hora_final < hora_inicial){
        duracao = (24-hora_inicial)+(hora_final);
        cout << "O JOGO DUROU "<< duracao <<" HORA(S)" << endl;
    }

    else if (hora_final == hora_inicial){
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }

    return 0;
}