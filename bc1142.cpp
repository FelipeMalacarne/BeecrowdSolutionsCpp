#include <iostream>
 
using namespace std;
 
int main() {
    
    int n, i, j = 1, rep = 0;

    cin >> n;

    while(rep < n){
        for(i=j; i <j+3; i++){
            cout << i << " ";
        }
        j = i+1;
        cout << "PUM" <<endl;
        rep ++;
    }

    return 0;
}