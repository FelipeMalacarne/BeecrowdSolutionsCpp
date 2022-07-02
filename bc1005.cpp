#include <iostream>
#include <iomanip>
using namespace std;

main(){

    double a, b, media;

    cin >> a;
    cin >> b;

    media = (a * 3.5 + b * 7.5)/11.0;

    cout << fixed << setprecision(5);
    cout << "MEDIA = "<< media << endl;  


    return 0;
}
