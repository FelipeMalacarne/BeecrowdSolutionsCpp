#include <iostream>

using namespace std;

int main() {

    int n, i, T[100],indexmenor= 990, menor = 999999;

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> T[i];
        if (T[i] == menor && i < indexmenor){
            menor = T[i];
            indexmenor = i;
        }
       else if (T[i] < menor){
            menor = T[i];
            indexmenor = i;
        }
    }

        cout << indexmenor+1 << endl;

    return 0;
}
