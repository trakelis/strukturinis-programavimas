#include <iostream>

using namespace std;
int main() {
    //pirma ir antra uzduotys
   cout << "Pirma ir Antra uzduotys----------------------------------------" << endl;
    int q,w,e,r,t;
    double vidurkis;
    q = 1;
    w = 2;
    e = 3;
    r = 4;
    t = 5;
    vidurkis = (q+w+e+r+t)/5;
    if(vidurkis >= 5) {
        cout << "Vidurkis teigiamas" << endl;
    } else if (vidurkis < 5) {
        cout << "Vidurkis yra neigiamas" << endl;
    }

    //trecia uzduotis
    cout << "Trecia uzduotis----------------------------------------" << endl;
    int egzamino_balas;
    egzamino_balas = 4;
    if (egzamino_balas == 10) {
        cout << "puiku" << endl;
    } else if (egzamino_balas >=9) {
        cout << "labai gerai" << endl;
    } else if (egzamino_balas >=7) {
        cout << "gerai" << endl;
    }else if (egzamino_balas >=5) {
        cout << "patenkinamai" << endl;
    }else if (egzamino_balas < 5) {
        cout << "egzaminas neislaikytas" << endl;
    }
    //Ketvirta uzduotis
    cout << "Ketvirta uzduotis----------------------------------------" << endl;
    switch(egzamino_balas) {
        case 10:
            cout << "puiku" << endl;
        break;
        case 9:
            cout << "labai gerai" << endl;
        break;
        case 8:
            cout << "gerai" << endl;
        break;
        case 7:
            cout << "gerai" << endl;
        break;
        case 6:
            cout << "patenkinamai" << endl;
        break;
        case 5:
            cout << "patenkinamai" << endl;
        break;
        default:
            cout << "egzaminas neislaikytas" << endl;
        break;
    }

    //penkta uzduotis
    cout << "Penkta uzduotis----------------------------------------" << endl;
    int suma = 0;
    for(int i=1;i <= 20; i++) {
        if(i%2!=0) {
            suma=suma+i;
        }
    }
    cout <<"Suma lygi: "<<suma<< endl;

    //sesta uzduotis
    cout << "Sesta uzduotis----------------------------------------" << endl;
    double indelis = 1000;
    double indelis_po10;
    for(int i=1;i <= 10; i++) {
      indelis_po10 = indelis_po10 + indelis * 1.05;
    }
    cout <<"Indelio verte po 10 metu bus: "<<indelis_po10<< endl;

    //septinta uzduotis
    cout << "Septinta uzduotis----------------------------------------" << endl;
    for(int i=1;i <= 20; i++) {
        if(i%4==0) {
            cout <<"Sis skaicius dalinasi is 4: "<< i << endl;
        }
    }
    return 0;
}
