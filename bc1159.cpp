#include <iostream>

using namespace std;

int main() {

    int i, x, soma = 0;

    while (cin >> x)
    {
        if (x == 0)
        {
            return 0;
        }
        for (i = x; i < x + 10; i++)
        {
            if (i % 2 == 0)
            {
                soma += i;
            }
        }
        cout << soma << endl;
        soma = 0;
    }
}