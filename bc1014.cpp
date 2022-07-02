#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int x;
    double y,cons;
    
    cin >> x;
    cin >> y;
    cons = x/y;
    
    cout << fixed << setprecision(3);
    cout << cons << " km/l" << endl;
    
    
 
    return 0;
}