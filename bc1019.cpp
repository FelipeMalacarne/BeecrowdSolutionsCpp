#include <iostream>

using namespace std;

int main() {

    int n, hr, min, seg, aux;

    cin >> n;

    hr = n/3600;
        aux = n % 3600;

    min = aux / 60;
        aux = aux % 60;

    seg = aux;

    cout << hr << ":" << min << ":" << seg << endl;
    return 0;
}
