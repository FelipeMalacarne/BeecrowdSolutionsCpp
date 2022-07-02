#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double coelhos = 0, ratos = 0, sapos = 0;
    int i, testes, qntd, total = 0;
    string animal;

    cin >> testes;

    for(i=0; i<testes; i++){
        cin >> qntd >> animal;
        if( animal == "C"){
            coelhos += qntd;
        }

        else if( animal == "R"){
            ratos += qntd;
        }

        else if( animal == "S"){
            sapos += qntd;
        }
        
        total += qntd;
    }

    cout << fixed << setprecision(0);

    cout << "Total: " << total << " cobaias\n";
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;

    cout << fixed << setprecision(2);

    double porcent = coelhos*100/total;
    cout <<"Percentual de coelhos: " << porcent << " %\n";
    porcent = ratos*100/total;
    cout <<"Percentual de ratos: " << porcent << " %\n";
    porcent = sapos*100/total;
    cout <<"Percentual de sapos: " << porcent << " %\n";


    return 0;
}
 