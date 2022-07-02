#include <iostream>

using namespace std;

int main() {

   int n=0, a, soma = 0, i;

   cin >> a ;

   while(n <= 0){
        cin >> n;
   }
        for(i=0; i<n; i++){
        soma += a+i;
        }

        cout << soma << endl;

    return 0;
}
