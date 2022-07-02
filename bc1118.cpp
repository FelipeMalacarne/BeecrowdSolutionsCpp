#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double n, notas[2];
    int x, i = 0;
    bool active = true, confirmation = true;
    

    while(active == true){
   
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
        
        i = 0;

        while(confirmation == true){
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> x;
            if(x == 2){
                active = false;
                break;
            }
            else if (x == 1){
                break;
            }
        }
  }
 
    return 0;
}