    #include <iostream>
    #include <iomanip>

    using namespace std;

    int main(){

        string nome;
        double sal_fix, M, bonus, total;

        cin >> nome;
        cin >> sal_fix;
        cin >> M;

        bonus = M * 0.15;
        total = sal_fix + bonus;

        cout << fixed << setprecision(2);
        cout << "TOTAL = R$ " << total <<endl;

        return 0;
    }
