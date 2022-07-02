#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int n, i;
    double resultado, x, y;
    
    cout << fixed << setprecision(1);
   
    cin >> n;

    for(i = 0; i <n; i++){
        cin >> x >> y;

        if(y==0){
            cout << "divisao impossivel\n";
        }

        else{
            resultado = x/y;
            cout << resultado<<endl;
        }

    }
 
    return 0;
}