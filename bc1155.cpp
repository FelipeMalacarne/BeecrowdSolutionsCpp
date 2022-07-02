#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double i;
    double s = 0;

    for(i=1; i <=100; i++){
        s = s + (1/i);

    }

    cout << fixed << setprecision(2);
    cout << s << endl;

    return 0;
}
