#include <iostream>
#include <cmath>
using namespace std;

bool ArBalsis(char balsis) {
    char balsiai[]={'a','e','i','o','u','y'};
    for(int i=0;i<6;i++) {
        if(balsis==balsiai[i]) {
            return true;
        }
    }
        return false;
}


int DidziausioDaliklioRadimas(int skaicius1,int skaicius2) {
    while (abs(skaicius1) && abs(skaicius2)) {
        if (abs(skaicius1) > abs(skaicius2)) {
            skaicius1 %= skaicius2;
        } else {
            skaicius2 %= skaicius1;
        }
    }
   int dbd = skaicius1 + skaicius2;
    return dbd;
}
void random(int &sk) {
    srand(time(nullptr));
    sk = rand() % 101;
}


void Zaidimas() {
    srand(time(nullptr));
    int spejimas;
    int sk;
    random(sk);

    cout<<sk<<endl;

    cout<<"Parasykite savo spejima:"<<endl;
    cin>>spejimas;
    while (spejimas != sk) {
        if(spejimas > sk) {
            cout<<"Skaicius yra mazesnis nei spejimas"<<endl;
        } else if(spejimas < sk) {
            cout<<"Skaicius yra didesnis nei spejimas"<<endl;
        }
        cout<<"Parasykite kita spejima:"<<endl;
        cin>>spejimas;
    }
    cout<<"Skaicius yra teisingas"<<endl;


}

int main() {
    int choice = 0;
    while (choice != 5) {
        cout <<"Pasirinkite funkcija kuria norite atlikti:"<<endl;
        cout <<"1. Patikrinimas ar raide yra balse"<<endl;
        cout <<"2. Dvieju skaitmenu didziausio bendro daliklio radimas"<<endl;
        cout <<"3. Zaidimas atspeti skaiciu nuo 1 ik 100"<<endl;
        cout <<"4. Funkcija atspaudinanti visu skaiciu nuo vieno iki pasirinkto skaiciaus su papildoma informacija jeigu skaiciai dalinasi is 3,5 arba abieju"<<endl;
        cout <<"5. Iseiti"<<endl;
        cout <<"Jusu pasirinkimas:"<<endl;
        cin >> choice;
//switch(choice)
Zaidimas();


}

    return 0;
}
