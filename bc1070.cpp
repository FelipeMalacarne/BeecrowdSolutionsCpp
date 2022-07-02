#include <iostream>
 
using namespace std;
 
int main() {
    int start;
    int i;

    cin >> start;

    //// garantir que start == impar;
    if(start%2 == 0){
        start++;
    }

    for(i=0; i < 6; i++){
        cout << start << endl;
        start += 2;
    }

   
 
    return 0;
}