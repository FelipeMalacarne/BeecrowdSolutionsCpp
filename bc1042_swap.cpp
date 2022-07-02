#include <iostream>

using namespace std;

int main(){

        int a, b, c, d, e, f;

        cin >> a >> b >> c ;

        d = a;
        e = b;
        f = c;

        if (a > b) {
            swap(a,b);

            if (b>c){
                swap(b,c);

                if(a>b){
                    swap(a,b);
                }

            }

            }
        else if(a < b){
            if(b > c){
                swap(b, c);
                if(a > b){
                    swap(a,b);
                }
            }
        }

        cout << a << endl;
        cout << b << endl;
        cout << c << endl << endl;

        cout << d << endl;
        cout << e << endl;
        cout << f << endl;






        }



        



