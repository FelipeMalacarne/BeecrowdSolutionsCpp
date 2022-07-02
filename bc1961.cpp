#include <iostream>

using namespace std;

int main() {

    int ultimo, penultimo, altura, pulos;
    string gameresult;
    cin >> altura >> pulos;

    gameresult = "YOU WIN";
    cin >> penultimo;
    for(int i = 0; i < pulos - 1; i++){
        cin >> ultimo;

        if(abs(ultimo - penultimo) > altura ){
            gameresult = "GAME OVER";
        }

        penultimo = ultimo;
    }

    cout << gameresult << endl;


    return 0;
}
