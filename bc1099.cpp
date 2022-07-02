#include <iostream>
 
using namespace std;
 
int main() {
    
    int n, i, j;
    int x, y;
    int soma = 0;
    int resultados[10000];

    cin >> n;

    for (i = 0; i < n; i++){

        cin >> x >> y;
        if(y < x){
            swap(x,y);
        }
        for(j = x+1; j < y; j++ ){
            if(j % 2 != 0){
                soma += j;
                resultados[i] = soma;
            }
        }
         soma = 0;        
    }

    for(i=0; i <n; i++){
       cout << resultados[i] << endl;
  }
 
    return 0;
}