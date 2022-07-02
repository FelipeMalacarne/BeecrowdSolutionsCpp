#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    int n, i;
    
    double media, nota1, nota2, nota3;
    
    cin >> n;
    cout << fixed << setprecision(1);

    for (i=0; i<n; i++){
        cin >> nota1 >> nota2 >> nota3;
       
        media = (nota1*2 + nota2*3 + nota3*5)/10;
        cout << media << endl;
    }

    return 0;
}