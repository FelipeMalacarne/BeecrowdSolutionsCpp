#include <iostream>

using namespace std;

int main() {
    string lixo;

    int dia_i,dia_f,  hr_i,hr_f,  min_i, min_f,  seg_i, seg_f;
    int dia = 0, hr = 0, min = 0, seg = 0;

    cin >> lixo >> dia_i;
    cin >> hr_i >> lixo >> min_i >> lixo >> seg_i;

    cin >> lixo >> dia_f;
    cin >> hr_f >> lixo >> min_f >> lixo >> seg_f;


    dia = dia_f - dia_i;

    //////HORAS

    if(hr_f > hr_i){
        hr = hr_f - hr_i;
    }

    else if(hr_f < hr_i){
        dia--;
        hr = (hr_f + 24) - hr_i;
    }

     ///////MINUTOS

     if(min_f > min_i){
        min = min_f - min_i;
    }

    else if(min_f < min_i){
        if(hr>0){
            hr--;
        }
        else if(hr == 0){
            dia --;
            hr = hr + 23;
        }
        min = (min_f + 60) - min_i;
    }

    /////SEGUNDOS

     if(seg_f > seg_i){
        seg = seg_f - seg_i;
    }

    else if(seg_f < seg_i){
        if(min>0){
            min--;
        }
        else if(min<0){
            if(hr > 0) {
                hr --;
                min = min + 59;
        }
            else if (hr == 0){
                dia --;
                hr = hr + 23;
                min = min + 59;
            }
        }

        seg = (seg_f + 60) - seg_i;
    }


    cout << dia << " dia(s)\n" << hr << " hora(s)\n" << min << " minuto(s)\n" << seg << " segundo(s)\n";

    return 0;
}
