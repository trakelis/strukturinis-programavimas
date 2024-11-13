#include <iostream>
#include <string.h>
using namespace std;

const char ABECELE[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };


string Uzsifravimas(char tekstas[],char raktas[]) {
    int indeksasRezultato;
    int tekstoIlgis = strlen(tekstas);
    char rezultatas[50];
    for(int i = 0; i < tekstoIlgis; i++) {
        int indeksasTeksto=-1;
        int indeksasRakto=-1;
        for(int j = 0; j < sizeof(ABECELE); j++) {
            if(toupper(tekstas[i]) == ABECELE[j]) {
                indeksasTeksto=ABECELE[j];
            }
            if(toupper(raktas[i]) == ABECELE[j]) {
                indeksasRakto=ABECELE[j];
            }
            if(indeksasTeksto && indeksasRakto > 0) {
                indeksasRezultato = (indeksasTeksto + indeksasRakto) % sizeof(ABECELE);
                rezultatas[i] = indeksasRezultato;
                break;
            }

        }

    }
    return rezultatas;
}
int main() {


    int pasirinkimas;
    char tekstas[50];
    char raktas[50];

    char uzsifruotasTekstas[50];
    char uzsifruotoRaktas[50];


    cin >> tekstas;
    cin >> raktas;
    string rezultatas;
    rezultatas = Uzsifravimas(tekstas, raktas);
    cout << rezultatas;
  /*  while (pasirinkimas != 3) {
        cout <<"Pasirinkite operacija kuria norite atlikti su valiuta:"<<endl;
        cout <<"1. Sifravimas/Desifravimas naudojant abecele"<<endl;
        cout <<"2. Sifravimas/Desifravimas naudojant ASCII koduote"<<endl;
        cout <<"3. Iseiti"<<endl;
        cout <<"Jusu pasirinkimas:"<<endl;
        cin >> pasirinkimas;

        if (pasirinkimas==1) {
            int pasirinkti;
            cout <<"Pasirinkite operacija kuria norite atlikti:"<<endl;
            cout <<"1. Sifravimas naudojant abecele"<<endl;
            cout <<"2. Desifravimas naudojant abecele"<<endl;
            cin>>pasirinkti;
            if(pasirinkti==1) {
                cout <<"Irasykite teksta kuri norite uzsifruoti:"<<endl;
                cin>>tekstas;
                cout <<"Irasykite rakta kuri norite naudoti:"<<endl;
                cin>>raktas;

            }else if (pasirinkti==2) {
                cin>>tekstas;
                cout <<"Irasykite rakta kuri norite naudoti:"<<endl;
                cin>>raktas;
            }
        } else if (pasirinkimas==2){
            int pasirinkti;
            cout <<"Pasirinkite operacija kuria norite atlikti:"<<endl;
            cout <<"1. Sifravimas naudojant ASCII koduote"<<endl;
            cout <<"2. Desifravimas naudojant ASCII koduote"<<endl;
            cin>>pasirinkti;
            if(pasirinkti==1) {
                string tekstas,raktas;
                cin>>tekstas;
                cout <<"Irasykite rakta kuri norite naudoti:"<<endl;
                cin>>raktas;
            }else if (pasirinkti==2) {
                string tekstas,raktas;
                cin>>tekstas;
                cout <<"Irasykite rakta kuri norite naudoti:"<<endl;
                cin>>raktas;
            }

        }
    }


*/
    return 0;
}
