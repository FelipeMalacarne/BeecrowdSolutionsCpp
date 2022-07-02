#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int a, b, c, aux;
    
    cin >> a >> b >> c;
    
    if (a>b && a>c && c>b) {
        aux = b;
        b = c;
        c = aux;
    }
    if (b>a && b>c) {
        aux = a;
        a = b;
        b = aux;
        if (c>b) {
            aux = c;
            c = b;
            b = aux;
        }
    }
    if (c>a && c>b) {
        aux = a;
        a = c;
        c = aux;
        if (c>b) {
            aux = c;
            c = b;
            b = aux;
        }
    }
    if (a >= b+c) {
        cout << "Invalido" << endl;
    }
    else {
        cout << "Valido-";
        
        if (a == b && b == c)
            cout << "Equilatero" << endl;

        else if (a == b || a == c || b == c)
            cout << "Isoceles" << endl;
        
        else
            cout << "Escaleno" << endl;
        
        cout << "Retangulo: ";
        if (pow(a,2) == pow(b,2)+pow(c,2))
            cout << "S" << endl;
        
        else
            cout << "N" << endl;
    }
    return 0;
}