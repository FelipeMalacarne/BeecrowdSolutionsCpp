#include <iostream>

using namespace std;

int main() {

    int n, i, num1, num2;
    string p1, p2, e1, e2;

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> p1 >> e1 >> p2 >> e2;
        cin >> num1 >> num2;

        int sum = num1 + num2;
        int aux = sum % 2;

        if(aux == 1){
            if(e1 == "IMPAR"){
                cout << p1 <<endl;
            }
            if(e2 == "IMPAR"){
                cout << p2 <<endl;
            }
        }
        else{
            if(e1 == "PAR"){
                cout << p1 << endl;
            }
            if(e2 == "PAR"){
                cout << p2 << endl;
            }
        }
    }

    return 0;
}
