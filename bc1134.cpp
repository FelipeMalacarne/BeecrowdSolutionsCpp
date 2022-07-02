#include <iostream>
 
using namespace std;
 
int main() {

    int alcool=0, gasolina=0, diesel=0;
    int n;
    bool active = true;
    
    while(active == true){

        cin >> n;

        if(n == 4){
            active = false;
            break;
        }

        if( n == 1){
            alcool++;
        }

        if( n == 2){
            gasolina++;
        }

        if( n == 3){
            diesel++;
        }

    }
    cout <<"MUITO OBRIGADO\n"
    << "Alcool: " << alcool << endl
    << "Gasolina: " << gasolina << endl
    << "Diesel: " << diesel << endl;



    return 0;
}