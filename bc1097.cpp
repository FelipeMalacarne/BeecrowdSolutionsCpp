#include <iostream>
 
using namespace std;
 
int main() {
 
    int max = 7;
    for (int i = 1; i <= 9; i+=2)
    {
        for (int j = max; j >= max-2; j--)
        {
           cout << "I=" << i << " J=" << j << endl;
        }
        max+=2;
    }
 
    return 0;
}