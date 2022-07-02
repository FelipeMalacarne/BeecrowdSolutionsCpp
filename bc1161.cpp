#include <iostream>

using namespace std;

long long int fatorial(int n){
    long long int res = 1, i;
    for(i = n; i > 0; i--){
        res *= i;
    }
    return res;
}

int main (){
    long long int m, n;

    while(cin >> m >> n){
        cout << fatorial(m) + fatorial(n)<< endl;
   }
    return 0;
}
