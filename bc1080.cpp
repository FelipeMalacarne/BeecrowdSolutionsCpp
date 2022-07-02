#include <iostream>
 
using namespace std;
 
int main() {
    int i, valor, maior = 0, posicao = 0;

  for(i = 1 ; i <=100; i++ ){
      cin >> valor;
      if (valor > maior){
            maior = valor;
            posicao = i;
      }
  }
    
    cout << maior << endl << posicao << endl;
    return 0;
}