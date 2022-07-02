#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double x1, y1, x2, y2, dis;
    
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    
    dis = sqrt(pow((x2 - x1),2 ) + pow((y2 -y1),2));
    
    cout << fixed << setprecision(4);
    cout << dis << endl;
    
 
    return 0;
}