#include <iostream>

using namespace std;

int main() {

    int n, i, j, sum;
    int x;

    cin >> n;

    for(int i = 0; i < n; i++){

        sum = 0;

        cin >> x;

        for(j = 1; j < x; j++){
            if(x % j == 0){
               sum += j;

            }
        }

        if(sum == x){
            cout << x << " eh perfeito\n";

        }

        else{
            cout << x << " nao eh perfeito\n";
        }
    }



    return 0;
}