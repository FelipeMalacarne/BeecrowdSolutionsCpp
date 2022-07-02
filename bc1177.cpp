#include <iostream>

using namespace std;

int main() {


    int n[1000];
    int t, i, a = 0;

    cin >> t ;


    for(i = 0; i < 1000; i++){
        n[i] = a;
        a++;

        if(a == t){
            a = 0;
        }


    }

    for(i = 0; i < 1000; i++){
        cout <<"N[" << i << "] = " <<n[i] << endl;
    }



    return 0;
}
