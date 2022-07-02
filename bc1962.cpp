#include <iostream>

using namespace std;

int main() {

    int n, entrada, saida;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> entrada;

        if(entrada >= 2015){
            cout << entrada - 2014 << " A.C.\n";
        }
        else{
            cout << 2015 - entrada << " D.C.\n";
        }

    }

    return 0;
}
