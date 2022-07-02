#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){

    int n, i;
   
    cin >> n;

    cout << fixed << setprecision(0);
    for(i= 1; i <= n; i++){     
        cout << i << " " << pow(i,2) << " " << pow(i,3) << endl
        << i << " " << pow(i,2) + 1 << " " << pow(i,3) + 1 << endl;

    }

    return 0;
}   