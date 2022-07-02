#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c, x;

    cin >> a >> b >> c;

    x = (a + b + abs(a-b))/2;

    if (x > c) {
        cout << x << " eh o maior" << endl;
    }
        else cout << c << " eh o maior" << endl ;

    return 0;
}