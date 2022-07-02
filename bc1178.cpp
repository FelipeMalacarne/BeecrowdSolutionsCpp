#include <iostream>
#include <iomanip>

using namespace std;

int main() {


   int i;
   double x, vet[100];


   cout << fixed << setprecision(4);

   cin >> x;

   vet[0] = x;

   for(i = 1; i < 100; i++){
        vet[i] = vet[i-1]/2;
   }

    for(i = 0; i < 100; i++){
        cout << "N[" << i << "] = " << vet[i] << endl;
   }


    return 0;
}
