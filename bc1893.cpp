#include <iostream>
 
using namespace std;
 
int main() {
 
   int anteontem, ontem;

    cin >> anteontem >> ontem;
    
    if (ontem >= 0 && ontem <=2 ){
       cout << "nova\n";
   }
    
    else if(ontem >= 97 && ontem <=100 ){
        cout << "cheia\n";

    }

    else{
        if(anteontem > ontem){
            cout << "minguante\n";
        }
        else if (anteontem < ontem){
            cout << "crescente\n";
        }
    }

    return 0;
}