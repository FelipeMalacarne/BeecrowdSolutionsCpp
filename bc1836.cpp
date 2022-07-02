#include <bits/stdc++.h>

using namespace std;

int main() {

    int t, lvl, hp, atk, def, sp, i;
    double evhp, evatk, evdef, evsp, ivhp, ivatk, ivdef, ivsp, bshp, bsatk, bsdef, bssp;
    string pokemon;

    cin >> t;

    for (i = 1; i <= t; i++)
    {
        cin >> pokemon >> lvl;
        cin >> bshp >> ivhp >> evhp;
        cin >> bsatk >> ivatk >> evatk;
        cin >> bsdef >> ivdef >> evdef;
        cin >> bssp >> ivsp >> evsp;

        hp = (((ivhp + bshp + sqrt(evhp) / 8 + 50) * lvl) / 50) + 10;
        atk = (((ivatk + bsatk + sqrt(evatk) / 8) * lvl) / 50) + 5;
        def = (((ivdef + bsdef + sqrt(evdef) / 8) * lvl) / 50) + 5;
        sp = (((ivsp + bssp + sqrt(evsp) / 8) * lvl) / 50) + 5;

        cout<< "Caso #" << i << ": " << pokemon << " nivel " << lvl << endl;
        cout << "HP: " << hp << endl;
        cout << "AT: " << atk << endl;
        cout << "DF: " << def << endl;
        cout << "SP: " << sp << endl;

    }

    return 0;
}