#include <iostream>

using namespace std;

int main() {
    int sum;
    int p,j1,j2,r,a;
    cin>>p>>j1>>j2>>r>>a;

     if(r){
         if(a){
         cout<<"Jogador 2 ganha!\n";
         }
         else{
         cout<<"Jogador 1 ganha!\n";
         }
     }
     else{
         if(a){
         cout<<"Jogador 1 ganha!\n";
         }
        
        else{
         sum=j2+j1;
         int r;
            if(sum%2){
                r=0;
                }
            else
         r=1;
         if(r==p)
         cout<<"Jogador 1 ganha!\n";
         else
         cout<<"Jogador 2 ganha!\n";

     }
 }

    return 0;
}
