#include <iostream>

using namespace std;

int main() {

    int x, n, i, soma = 0;

    cin >> n;

    while (n > 0)
    {
        cin >> x;

        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                soma++;
            }
        }
        if (soma == 0)
            {
                cout << x << " eh primo\n";
            }

            else
            {
                cout << x << " nao eh primo\n";
            }
        soma = 0;
        n--;
    }

return 0;
}   