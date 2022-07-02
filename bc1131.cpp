#include <iostream>

using namespace std;

int main (){

    string vencedor;
    int gol_inter, gol_gremio, v_inter=0, v_gremio=0, empates=0, total=0;
    int x;   
    bool active = true, confirmation = true;

    while(active == true){

        cin >> gol_inter >> gol_gremio;

        if (gol_gremio == gol_inter){
            empates++;
        }
        if(gol_inter > gol_gremio){
            v_inter++;
        }
        if(gol_gremio > gol_inter){
            v_gremio++;
        }

        total++;
      
       while(confirmation == true){
        
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> x;
       
        if(x == 1){
            break;
        }
        if (x == 2){
            active = false;
            break;
        }
      }

    }


    if(v_gremio > v_inter){
        vencedor = "Gremio venceu mais\n" ;
    }
    if(v_gremio < v_inter){
        vencedor = "Inter venceu mais\n" ;
    }
    if(v_gremio == v_inter){
        vencedor = "Nao houve vencedor\n" ;
    } 
   

    cout << total << " grenais\n" 
    << "Inter:" << v_inter << endl
    << "Gremio:" << v_gremio << endl
    << "Empates:" << empates << endl
    << vencedor;


    return 0;
}