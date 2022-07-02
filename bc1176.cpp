#include <iostream>

using namespace std;

int main() {

    int n, x;

    cin >> n;

    while (n > 0)
    {

    unsigned long long int fibo [60];
    fibo [0] = 0;
    fibo [1] = 1;
    fibo [2] = 1;

    for (int i = 3; i < 60; i++)
    {
        fibo [i] = fibo [i - 2] + fibo [i - 1];
    }

    cin >> x;

    if (x == 60)
    {
        cout << "Fib(60) = 1548008755920" << endl;
    }

    else
    {
        cout << "Fib(" << x << ") = " << fibo [x] << endl;
    }
    n--;
    }

return 0;

}