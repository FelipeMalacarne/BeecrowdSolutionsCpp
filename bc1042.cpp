#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c ;

   if (a < b && b < c ){ // a < b < c
       cout << a << endl;
       cout << b << endl;
       cout << c << endl << endl;

       cout << a << endl;
        cout << b << endl;
        cout << c << endl;
   }

    else if (a < c && c < b) // a < c < b
    {
        cout << a << endl;
        cout << c << endl;
        cout << b << endl << endl;

        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
    
    else if (b < a && a < c) // b < a < c
    {
        cout << b << endl;
        cout << a << endl;
        cout << c << endl << endl;

        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
    

    else if (b < c && c << a) // b < c < a
    {
        cout << b << endl;
        cout << c << endl;
        cout << a << endl << endl;

       cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
    
    else if (c < b && b < a) // c < b < a
    {
        cout << c << endl;
        cout << b << endl;
        cout << a << endl << endl;

        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
    
    else if (c < a && a < b) // c < a < b
    {
        cout << c << endl;
        cout << a << endl;
        cout << b << endl << endl;

        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
    





    
    
    return 0;
}
