#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {

    double salario, acresc, new_salary;
    string percent;
    
    cin >> salario;

   if(salario > 0 && salario <= 400.00){
       acresc = salario * 0.15;
       percent = "15 %";
   }
    else if(salario > 400.00 && salario <= 800.00){
       acresc = salario * 0.12;
       percent = "12 %";
   }
    else if(salario > 800.00 && salario <= 1200.00){
       acresc = salario * 0.10;
       percent = "10 %";
   }
    else if( salario > 1200.00 && salario <= 2000.00){
       acresc = salario * 0.07;
       percent = "7 %";
   }
    else if(salario > 2000){
       acresc = salario * 0.04;
       percent = "4 %";
   }

    
     new_salary = salario + acresc;
    
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << new_salary << endl << "Reajuste ganho: " << acresc << endl 
    << "Em percentual: " << percent << endl;


    return 0;
}