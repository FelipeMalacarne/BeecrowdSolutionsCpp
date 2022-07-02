#include <iostream>
 
using namespace std;
 
int main() {
    
    int dentro=0, fora=0;
    int n=10000, i;
    int entrada[n];

    cin >> n;
 
    for(i=0; i<n; i++){

        cin >> entrada[i];
        if(entrada[i] >= 10 && entrada[i] <= 20){
            dentro++;
        }
        else{
            fora++;
        }
    }

    cout << dentro << " in\n" << fora << " out\n";
    

    return 0;
}