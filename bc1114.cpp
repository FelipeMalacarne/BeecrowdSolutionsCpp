#include <iostream>
 
using namespace std;
 
int main() {
    
    string senha = "2002",tentativa; 
    bool senhacorreta =false;
    
    while (senhacorreta != true){
        cin >> tentativa;

        if(tentativa == senha){
            cout << "Acesso Permitido\n";
            senhacorreta = true;
        }
        else{
            cout <<"Senha Invalida\n";
        }

    }

    return 0;
}
