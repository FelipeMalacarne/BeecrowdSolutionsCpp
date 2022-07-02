#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    double a, b, c, media;

    cin >> a;
    cin >> b;
    cin >> c;

    media = (a*2 + b*3 + c*5)/10.0;

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << endl;


    return 0;
}