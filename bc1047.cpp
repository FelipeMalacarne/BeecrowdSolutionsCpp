#include <iostream>
 
using namespace std;
 
int main(){

int horaIni, minIni, convHora, horaFin, minFin;

cin >> horaIni >> minIni >> horaFin >> minFin;

convHora = ((horaFin*60)+minFin) - ((horaIni*60)+minIni);

if(convHora==0){
    cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
}else if((convHora>0) && (convHora<60)){
    cout << "O JOGO DUROU 0 HORA(S) E " << convHora << " MINUTO(S)" << endl;
}else if(convHora>59){
    cout << "O JOGO DUROU " << convHora/60 << " HORA(S) E " << convHora%60 << " MINUTO(S)" << endl;
}else if(convHora<0){
    cout << "O JOGO DUROU " << ((1440+convHora)/60) << " HORA(S) E " << ((1440+convHora)%60) << " MINUTO(S)" << endl;
}

return 0;
}
