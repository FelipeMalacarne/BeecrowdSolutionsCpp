#include <iostream>

using namespace std;

int main() {
    int qnt, matricula, res;
    double nota, maiorNota = -1;
    
    cin >> qnt;
    
    while (qnt--) {
        cin >> matricula >> nota;
        
        if (nota > maiorNota) {
            res = matricula;
            maiorNota = nota;
        }
    }
    
    if (maiorNota < 8.0){
        cout << "Minimum note not reached" << endl;
        }
    else{
        cout << res << endl;
    }

    return 0;
}