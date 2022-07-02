#include <iostream>

using namespace std;

int main() {

    int i, x, z, contador=1;

    cin >> x;
    cin >> z;

    while(z <= x){
        cin >> z;
    }

    i = x;
    while(z >= x){
        x += i;
        i++;
        contador++;
    }

    cout << contador << endl;

    return 0;
}
