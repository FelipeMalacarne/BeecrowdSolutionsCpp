#include <iostream>
#include <cmath>
using namespace std;

int main(){

    unsigned long long int graos, n, i, casas, peso;
    cin >> n;


    for(i =0; i < n; i++){
        cin >> casas;
           if(casas == 64){
            cout << "1537228672809129" << " kg\n";
            }else{
                graos = 1 * pow(2, casas);
                peso = graos/12000;
                cout << peso << " kg\n";
        }
    }

    return 0;
}
