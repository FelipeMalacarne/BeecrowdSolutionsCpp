#include <iostream>

using namespace std;

int main() {

       int n, i, j, x, y, soma = 0;

       cin >> n;

       for(i = 0; i < n; i++){
        cin >> x >> y;

        for(j = x; j <= x+y; j++){
            if(j%2 != 0 ){
                 soma += j;
            }

        }
        cout << soma << endl;
       }







    return 0;
}
