#include <iostream>
 
using namespace std;
 
int main() {
    int m, n, soma = 0;
    int i;

    while(m > 0 && n > 0){
        
        cin >> n >> m;
        
        if (n <= 0 || m <= 0){
            break;
        }

        if (n > m){
            swap(m,n);
        }
        
        for(i=n;i<=m;i++) {
	    soma += i;
        cout << i << " ";
        }
        cout << "Sum=" << soma << endl;
        soma = 0;
    }


    return 0;
}