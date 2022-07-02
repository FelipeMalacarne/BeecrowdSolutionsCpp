#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double a[100];
    int i, x, n;

    cout << fixed << setprecision(1);

    for(i = 0; i < 100; i++){
        cin >> a[i];
    }

    for(i = 0; i < 100; i++){
        if(a[i] <= 10){
            cout << "A["<< i << "] = " << a[i] << endl;
        }
    }
    return 0;
}
