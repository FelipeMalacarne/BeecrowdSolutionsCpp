#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int i, j, n, k = 1;
    int m[101][101];
    int linhas, colunas;

    cin >> n;

    while(n != 0){

    linhas = n;
    colunas = n;

    for(i = 0; i < linhas; i++){

        for(j = 0; j < colunas; j++){

            if(i == 0 || i == n-1 || j == 0 || j == n-1 ){
                m[i][j] = 1;
               }

            else{
               if (j < m[i][j]){
                        m[i][j]=j;}
            }
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << "   " << m[i][j];
        }

        cout << endl;
    }

    cin >> n;
   }


    return 0;
}



         // m[i][j] = min(n-i, min(i+1, min(n-j, j+1)));
