#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main() {
 
double raio, n = 3.14159, area;

cin >> raio; // input do raio

area = n*(pow(raio,2)); //formula

cout<<fixed<<setprecision(4);
cout <<"A="<< area << endl; //declaração

return 0;
}