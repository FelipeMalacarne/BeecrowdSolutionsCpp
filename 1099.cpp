#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, x, y, j;
    int soma = 0;
    cin >> n;
    
    for(int i = 0; i < n ; i++){
        cin >> x >> y; 
        }
        

     for(j = x; j <= y; j ++){
            if(j % 2 != 0){
                soma += j;
            }
            cout << soma << endl;
     }

    return 0;
}   