#include <iostream>
#include <string>
 using namespace std;
int main() {
    // pirma uzduotis
    cout <<"pirma uzduotis-------------------------------"<<endl;
    string vardas,pavarde,grupe,studiju_programa;
    int amzius,kursas;

    vardas = "Tadas";
    pavarde = "Seibutis";
    grupe = "PI24";
    studiju_programa = "Programu sistemos";
    amzius = 20;
    kursas = 1;

    cout <<"Vardas: "<< vardas <<" Pavarde: "<< pavarde <<" Amzius: "<< amzius <<" Grupe: "<< grupe <<" Kursas: "<< kursas <<" Studiju programa: "<< studiju_programa <<" "<< endl;

    // antra uzduotis
    cout <<"antra uzduotis-------------------------------"<<endl;
    string pavadinimas,savininkas,arena;
    int ikurimo_metai,vietu_skaicius;

    pavadinimas = "Londono Arsenal";
    savininkas = "E. Stanley Kroenke";
    arena = "Emirates Stadium";
    ikurimo_metai = 1886;
    vietu_skaicius = 60704;

    cout <<"Pavadinimas: "<< pavadinimas <<" Ikurimo metai: "<< ikurimo_metai <<" Savininkas: "<< savininkas <<" Arena: "<< arena <<" Vietu skaicius "<< vietu_skaicius <<endl;

    // trecia uzduotis
    cout <<"trecia uzduotis-------------------------------"<<endl;
    string marke,motoras,spalva,modelis;
    int metai;

    marke = "VOLKSWAGEN PASSAT";
    modelis = "PASSAT";
    motoras = "2.0";
    spalva = "juodos";
    metai = 2016;

    cout  <<"Automobilis "<<marke<<" yra pagamintas "<< metai <<" metais. Jo motoras "<< motoras <<" litrazo. Automobilis yra "<< spalva <<" spalvos."<<endl;

    // ketvirta uzduotis
    cout <<"ketvirta uzduotis-------------------------------"<<endl;
    int a,b;
    double c;
    a = 13;
    b = 5;
    c = 17.5;

    cout <<"a + b - c = "<< a + b - c << endl;
    cout <<"15 / 2 + c = "<< 15 / 2 + c << endl;
    cout <<"a / b + 2 * c = "<< a / static_cast<double>(b) + 2 * c << endl;
    cout <<"14 % 3 + 6.3 + b / a = "<< 14 % 3 + 6.3 + b / a << endl;
    cout <<"c % 5 + a - b = "<< static_cast<int>(c) % 5 + a - b << endl;
    cout <<"13.5 / 2 + 4.0 * 3.5 + 18 = "<< 13.5 / 2 + 4.0 * 3.5 + 18 << endl;

    // penkta uzduotis
    cout <<"penkta uzduotis-------------------------------"<<endl;
    double q,w,e,r,t,vidurkis;

    cout<<"Iveskite skaicius:"<<endl;
    cin>>q>>w>>e>>r>>t;
    vidurkis = (q+w+e+r+t)/5;
    cout<<"Skaiciu vidurkis yra "<<vidurkis<<endl;

    // sesta uzduotis
    cout <<"sesta uzduotis-------------------------------"<<endl;
    int skaicius,pirmas_skaitmuo,antras_skaitmuo,suma;
    cout<<"Iveskite dvizenkli skaiciu:"<<endl;
    cin>>skaicius;
    pirmas_skaitmuo = skaicius/10;
    antras_skaitmuo = skaicius%10;
    suma = pirmas_skaitmuo + antras_skaitmuo;
    cout<<"Skaiciaus skaitmenu suma: "<<suma<<endl;



    return 0;
}
