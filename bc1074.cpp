#include <iostream>

using namespace std;

int main() {

    int n, i, aux;
    cin >> n;
    string OUTPUT[n];

    for(i=0; i<n; i++){

        cin >> aux;

        if ( aux == 0){
           OUTPUT[i] = "NULL";
        }
        ////EVEN
        else if(aux % 2 == 0){
             ////POSITIVE
            if(aux > 0){
                OUTPUT[i]= "EVEN POSITIVE";
            }
            //// NEGATIVE
            else if(aux < 0){
               OUTPUT[i]= "EVEN NEGATIVE";;
            }
        }

        ////ODD
        else if(aux % 2 != 0){
            ////POSITIVE
            if(aux > 0){
               OUTPUT[i]= "ODD POSITIVE";
            }
            ////NEGATIVE
            else if(aux < 0){
                OUTPUT[i]= "ODD NEGATIVE";
            }
        }

    }

     for(i=0; i < n; i++){
            cout << OUTPUT[i] << endl;
        }

    return 0;
}
