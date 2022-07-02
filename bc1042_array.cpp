#include <iostream>
 
using namespace std;
 
int main() {
    
    int a, b ,c ;

    int array[3], array2[3];

    int n, i, j;
    int aux;
    
     //// ler os 3 numeros e colocar no array
   
     for(i=0;i<3;i++) {
	    cin>>array[i];
        }
	
    //// armazenar os valores iniciais do array em um outro array

    for (i=0 ; i < 3; i++)
    {
        array2[i] = array[i];
    }

    //// organizando ordem crescente
    for(i=0;i<3;i++)
	{		
		for(j=i+1;j<3;j++) // j = proximo valor do array depois do i
		{
			if(array[i]>array[j]) // se i for maior que j
			{
				aux  = array[i];  // pega o valor de i e joga pra j 
				array[i]=array[j]; // 
				array[j]=aux;
			}
		}
	}

    //print array ordem crescente

    for(i = 0; i<3; i++){
        cout << array[i] <<endl;

    }




    

    

    return 0;
}