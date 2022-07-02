#include <iostream>

using namespace std;

int main (){

    int x, y;

    while (x != y){
        
        cin >> x >> y;

        if(x == y){
            break;
        }
        if(x < y){
           cout << "Crescente\n";
        }

        else if(x > y){
            cout << "Decrescente\n";
        }

    }

    return 0;
}