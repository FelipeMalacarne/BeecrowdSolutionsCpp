#include <iostream>
using namespace std;

int main(){

  int i;
  int min,max;
  int soma =0;

  
  cin >> min;
  cin >> max;
  
  if(min>max){swap(min,max);}

  for(i = min+1; i < max; i++)
    if(i % 2 !=0)
      soma = soma + i;

  cout << soma << endl;

  return 0;
}