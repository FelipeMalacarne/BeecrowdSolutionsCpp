#include <iostream>

using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}



int main() {

   int n, a, b, lcm;

   cin >> n;

   for(int i = 0; i < n; i++){

   cin >> a >> b;

    cout << gcd(b, a % b) << endl;


   }
   return 0;
}
