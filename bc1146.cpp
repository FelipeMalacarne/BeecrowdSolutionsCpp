#include <iostream>

using namespace std;

int main() {

    int i, j, x=1;

    while(x!=0){
        cin >> x;

        if(x == 0){
        break;
    }
        for(i=1; i<=x; i++){
            if(i == x){
                cout << i << endl;
                break;
            }
            cout << i << " ";
        }
    }


    return 0;
}
