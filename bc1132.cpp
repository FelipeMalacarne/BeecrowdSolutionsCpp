#include <iostream>

using namespace std;

int main(){

    int i, f, x, sum = 0 ;

    cin >> i >> f;

    if (f < i){
        swap (i,f);
    }

    for (x = i; x <= f; x++ ){
        if (!(x % 13 == 0)){
            sum+=x;
        }
    }


    cout << sum << endl;


    return 0;
}