#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int pa, pb,n, anos;
    double ga, gb;

    cin >> n;

    for(int i = 0; i < n; i++){

    cin >> pa >> pb >> ga >> gb;
    ga = ga/100;
    gb = gb/100;
    anos = 0;

    while(!(pa > pb)){

        pa = floor(pa*(1 + ga));
        pb = floor(pb * (1 + gb));

        anos++;

        if(anos > 100){
            cout << "Mais de 1 seculo.\n";
            break;
        }
    }

    if(anos <= 100){
        cout << anos << " anos.\n";
    }

 }

    return 0;
}