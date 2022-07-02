#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int i, n=0;
    double media, total = 0;

    while(true){

        cin >> i;

        if(i < 0){break;}

        total += i;

        n++;

    }

    media = total/n;

    cout << fixed << setprecision(2);
    cout << media << endl;




    return 0;
}

