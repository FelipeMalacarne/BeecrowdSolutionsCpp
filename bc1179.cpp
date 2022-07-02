#include <iostream>

using namespace std;

int main() {


    int n, i,j, k=0, l=0;
    int pares[5], impares[5];

    for(i = 0; i < 15; i++){

        cin >> n;

        if(n % 2 !=0){ ///impar
            impares[k] = n;
            k++;
            if(k == 5){

                for(j = 0; j < k; j++){
                    cout << "impar[" << j << "] = " << impares[j] << endl;
                }

                 k = 0;
            }
        }

        else if(n % 2 ==0){ ///par
            pares[l] = n;
            l++;
            if(l == 5){

                for(j = 0; j < l; j++){
                    cout << "par["<< j << "] = " << pares[j] << endl;
                }

                 l = 0;
            }


        }


    }


     //impar
     if(k !=0){
        for(j = 0; j < k; j++){
            cout << "impar["<< j << "] = " << impares[j] << endl;
        }
}
        //par
        if(l !=0 ){
        for(j = 0; j < l; j++){
            cout << "par["<< j << "] = " << pares[j] << endl;
        }
        }





    return 0;
}
