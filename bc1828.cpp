#include <iostream>

using namespace std;

int main() {

    int n, i;
    string a, b;

    cin >> n;

    for (i = 1; i <=n; i++){
        cin >> a >> b;
        if (a == b){
           cout << "Caso #"<< i << ":" << " De novo!\n";
        }
        //1
        else if(a == "tesoura" && b == "papel"){
            cout << "Caso #"<< i << ":" << " Bazinga!\n";
        }
        //2
        else if(a == "papel" && b == "pedra" ){
            cout << "Caso #"<< i << ":" << " Bazinga!\n";
        }
        //3
        else if(a == "pedra" && b == "lagarto"){
            cout << "Caso #"<< i << ":" << " Bazinga!\n";
        }
        //4
        else if(a == "lagarto" && b == "Spock" ){
            cout << "Caso #"<< i << ":" << " Bazinga!\n";
        }
        //5
        else if(a == "Spock" && b == "tesoura"){
            cout << "Caso #"<< i << ":" << " Bazinga!\n";
        }
        //6
        else if(a == "tesoura" && b == "lagarto"){
            cout << "Caso #"<< i << ":" << " Bazinga!\n";
        }
        //7
        else if(a == "lagarto" && b == "papel"){
            cout << "Caso #"<< i << ":" << " Bazinga!\n";
        }
        //8
        else if(a == "papel" && b == "Spock"){
            cout << "Caso #"<< i << ":" << " Bazinga!\n";
        }
        //9
        else if(a == "Spock" && b == "pedra"){
            cout << "Caso #"<< i << ":" << " Bazinga!\n";
        }
        //10
        else if(a == "pedra" && b == "tesoura"){
            cout << "Caso #"<< i << ":" << " Bazinga!\n";
        }

        else{
            cout << "Caso #"<< i << ":" << " Raj trapaceou!\n";
        }
    }


    return 0;
}
    