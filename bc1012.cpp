#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){

    double a, b, c;

    cin >> a >> b >> c;
    
    cout << fixed << setprecision(3);

        cout << "TRIANGULO: "<< (a*c)/2 << endl;
        
        cout << "CIRCULO: "<< 3.14159 * pow(c,2) << endl;
        
        cout << "TRAPEZIO: "<< ((a + b) * c)/2 << endl;
        
        cout << "QUADRADO: "<< pow(b,2) << endl;
       
        cout << "RETANGULO: "<< a * b << endl;
        
    


    return 0;
}