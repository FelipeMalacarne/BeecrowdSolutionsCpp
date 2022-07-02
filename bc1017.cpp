#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
  int t, vm;
  double comb, dist;
  
  cin >> t;
  cin >> vm;
  
  dist = vm * t ;
  comb = dist / 12;

  
  cout << fixed << setprecision(3);
  cout << comb << endl;
  
    return 0;
}