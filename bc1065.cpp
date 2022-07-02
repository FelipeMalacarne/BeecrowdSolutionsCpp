#include <iostream>

using namespace std;

int main() {

    int i, pares = 0;

    int entrada[5];

    for(i=0; i<5; i++){
        cin >> entrada[i];
        if(entrada[i] % 2 == 0){
            pares++;
        }
    }
    cout << pares << " valores pares\n";


    return 0;
}
