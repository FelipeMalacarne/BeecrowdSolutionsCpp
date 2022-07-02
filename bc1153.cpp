#include <iostream>

using namespace std;

int main(){

    int n, i, fatorial;

    cin >> n;

    fatorial = n;

    for(i=1; i<n; i++){
        fatorial *= (n-i);
    }

    cout << fatorial << endl;


    return 0;
}
