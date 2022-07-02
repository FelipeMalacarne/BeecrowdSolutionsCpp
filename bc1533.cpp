#include <iostream>

using namespace std;

int main() {

    int n, i, num[1000], maior, segMaior, res, maiorIndex;

    cin >> n;
    while(n != 0){
        cin >> maior;
        maiorIndex = 1;
        segMaior = 0;

        for(i = 1; i < n; i++){
            cin >> num[i];
            if(num[i] > maior){
                segMaior = maior;
                res = maiorIndex;
                maior = num[i];
                maiorIndex = i+1;

            }else if(num[i] > segMaior){
                segMaior = num[i];
                res = i+1;
            }
        }

        cout << res << endl;
        cin >> n;
}


    return 0;
}
