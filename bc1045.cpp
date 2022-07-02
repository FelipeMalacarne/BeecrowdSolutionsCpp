#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {

    double array[3];
    int i, j;
    
    for(i=0;i<3;i++) {
	    cin>>array[i];
        }
    for(i=0;i<3;i++)
	{		
		for(j=i+1;j<3;j++) 
		{
			if(array[i]<array[j]) 
			{
				swap(array[i], array[j]);
			}
		}
	}

    double a = array[0], b = array[1] , c = array[2];
    double a2 = a*a, b2 = b*b , c2 = c*c;
        
    if(a>=b+c){
        cout << "NAO FORMA TRIANGULO" << endl;
    }

    else {
        if (a2 == b2 + c2 ){
        cout << "TRIANGULO RETANGULO" << endl;
    }
        if(a2 > b2 + c2){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
        if (a2 < b2 + c2){
            cout << "TRIANGULO ACUTANGULO" << endl;
    }
        if (a == b && b==c){
            cout << "TRIANGULO EQUILATERO" << endl;
    }
        if (((a == b) && a !=c ) || (( a==c) && a!=b) || ((b == c) && b!=a)){
            cout << "TRIANGULO ISOSCELES" << endl;
         }
        
}

    return 0;
}