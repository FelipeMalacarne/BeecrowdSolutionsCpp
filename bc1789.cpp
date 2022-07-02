#include <iostream>

using namespace std;

int main() {

    int n, maior, vel, tier;

    while(cin >> n){
        maior = 0;
        for(int i = 0; i < n; i++){
            cin >> vel;
            if(vel > maior){
                maior = vel;
            }
        }
        if(maior < 10){
            tier = 1;
        }
        else if(maior >= 10 && maior < 20){
            tier = 2;
        }
        else if(maior >= 20){
            tier = 3;
        }
        cout << tier << endl;
    }






    return 0;
}

