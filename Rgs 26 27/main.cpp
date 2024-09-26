#include <iostream>

using namespace std;
void vardas_Studijos(){
    cout << "Mano vardas Tadas, pasirinkau programu sistemas nes megstu kompiuterius" << endl;
}
void kolegija(){
    cout << "Vilniaus Kolegija ";
}
void fakultetas(){
    cout << "Elektronikos ir informatikos fakultetas" << endl;
}
void random(){
    int x;
    x = rand();
    cout << x << endl;
}
void suma(int a,int b){
    cout <<"Suma "<< a+b << endl;
}
void skirtumas(int a,int b){
    cout <<"Skirtumas "<< a-b << endl;
}

void dalyba(int a,int b){
    cout <<"Dalyba "<< a/b << endl;
}

void daugyba(int a,int b){
    cout <<"Daugyba "<< a*b << endl;
}
void palyginimas(int a,int b){
    cout <<"Skaiciai: "<< a <<" ir "<< b << endl;
    if(a>b) {
        cout <<"Skaicius a didesnis "<< endl;
    } else if(b>a) {
        cout <<"Skaicius b didesnis "<< endl;
    } else if(b==a) {
        cout <<"Skaiciai lygus "<< endl;
    }

}





int main() {
    // pirma uzduotis
    cout << "Pirma uzduotis----------------------------------------" << endl;
    vardas_Studijos();
    vardas_Studijos();

    // antra uzduotis
    cout << "Antra uzduotis----------------------------------------" << endl;
    kolegija();
    fakultetas();

    // trecia uzduotis
    cout << "Trecia uzduotis----------------------------------------" << endl;
    for(int i = 1;i <= 10;i++) {
        random();
    }

    // ketvirta uzduotis
    cout << "Ketvirta uzduotis----------------------------------------" << endl;
    int x,y;
    cout << "Iveskite pirma skaiciu:" << endl;
    cin >>x;
    cout << "Iveskite antra skaiciu:" << endl;
    cin >>y;
    suma(x,y);
    skirtumas(x,y);
    dalyba(x,y);
    daugyba(x,y);

    // penkta uzduotis
    cout << "Penkta uzduotis----------------------------------------" << endl;
    int a,b;
    a = 5;
    b = 6;
    palyginimas(a,b);
    a = 11;
    b = 3;
    palyginimas(a,b);
    a = 4;
    b = 4;
    palyginimas(a,b);

    return 0;
}
