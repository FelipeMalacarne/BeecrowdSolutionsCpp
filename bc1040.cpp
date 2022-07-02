#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double n1, n2, n3, n4, recup, media, mediafinal;
    cin >> setprecision(1);
    cin >> n1 >> n2 >> n3 >> n4;

    media = ((n1 * 2) + (n2 * 3) + (n3 * 4 ) + (n4 * 1))/10;

    cout << fixed << setprecision(1);
    if (media >= 7.0){
        cout << "Media: " << media << endl;
        cout << "Aluno aprovado." << endl;
    }

    else if (media >=5 && media < 6.9){
        cin >> recup;

        mediafinal = (media + recup)/2;

        cout << "Media: " << media << endl;
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame: " << recup << endl;

        if(mediafinal > 5){
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << mediafinal << endl;
            }

            else{
                cout << "Aluno reprovado." << endl;
                cout << "Media final: " << mediafinal << endl;
            }
        }


    else if(media < 5.0){
        cout << "Media: " << media << endl;
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}
