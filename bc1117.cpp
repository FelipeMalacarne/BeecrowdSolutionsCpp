#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double n, notas[2];
    int i = 0;
    
    while(i <2){      
        cin >> n; 

        if(!(n > 0 && n <= 10)){
            cout << "nota invalida\n";
        }
        else{
            notas[i] = n;
            i++;
        }
            n = 0;
    }

    cout << fixed << setprecision(2);
    cout <<"media = " << (notas[0] + notas[1])/2 << endl;

 
    return 0;
}