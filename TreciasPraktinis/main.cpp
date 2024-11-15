#include <iostream>
#include <cstring>
using namespace std;

const char ABECELE[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

string Uzsifravimas(char tekstas[],char raktas[]) {
    int indeksasTeksto=-1;
    int indeksasRakto=-1;
    int indeksasRezultato;
    int tekstoIlgis = strlen(tekstas);
    string raktasString = raktas;
    while (raktasString.length() < strlen(tekstas)) {
        raktasString.append(raktasString.begin(), raktasString.end());
    }
    strcpy(raktas, raktasString.c_str());
    char rezultatas[100];
    for(int i = 0; i < tekstoIlgis; i++) {

        for(int j = 0; j < sizeof(ABECELE); j++) {
            if(toupper(tekstas[i]) == ABECELE[j]) {
                indeksasTeksto=j;
            }
            if(toupper(raktas[i]) == ABECELE[j]) {
                indeksasRakto=j;
            }
            if(indeksasTeksto != -1 && indeksasRakto != -1) {
                indeksasRezultato = (indeksasTeksto + indeksasRakto) % sizeof(ABECELE);
                rezultatas[i] = ABECELE[indeksasRezultato];
                indeksasTeksto=-1;
                indeksasRakto=-1;
            }

        }

    }
    string rezultatasString="";
    for (int i = 0; i < tekstoIlgis; i++) {
        rezultatasString=rezultatasString + rezultatas[i];
    }

    return rezultatasString;
}
string Desifravimas(char tekstas[],char raktas[]) {
    int indeksasTeksto=-1;
    int indeksasRakto=-1;
    int indeksasRezultato;
    int tekstoIlgis = strlen(tekstas);
    string raktasString = raktas;
    while (raktasString.length() < strlen(tekstas)) {
        raktasString.append(raktasString.begin(), raktasString.end());
    }
    strcpy(raktas, raktasString.c_str());
    char rezultatas[100];
    for(int i = 0; i < tekstoIlgis; i++) {

        for(int j = 0; j < sizeof(ABECELE); j++) {
            if(toupper(tekstas[i]) == ABECELE[j]) {
                indeksasTeksto=j;
            }
            if(toupper(raktas[i]) == ABECELE[j]) {
                indeksasRakto=j;
            }
            if(indeksasTeksto != -1 && indeksasRakto != -1) {
                indeksasRezultato = (indeksasTeksto - indeksasRakto + sizeof(ABECELE)) % sizeof(ABECELE);
                rezultatas[i] = ABECELE[indeksasRezultato];
                indeksasTeksto=-1;
                indeksasRakto=-1;
            }

        }

    }
    string rezultatasString="";
    for (int i = 0; i < tekstoIlgis; i++) {
        rezultatasString=rezultatasString + rezultatas[i];
    }

    return rezultatasString;
}
string UzsifravimasASCII(char tekstas[],char raktas[]) {
    int asciiPradzia=33,asciiPabaiga=126;
    int asciiIlgis= asciiPabaiga-asciiPradzia+1;
    int indeksasTeksto=-1;
    int indeksasRakto=-1;
    int tekstoIlgis = strlen(tekstas);
    string raktasString = raktas;
    while (raktasString.length() < strlen(tekstas)) {
        raktasString.append(raktasString.begin(), raktasString.end());
    }
    strcpy(raktas, raktasString.c_str());
    char rezultatas[100];
    for(int i = 0; i < tekstoIlgis; i++) {

        for(int j = asciiPradzia; j < asciiPabaiga; j++) {
            if(tekstas[i] == static_cast<unsigned char>(j)) {
                indeksasTeksto=j;
            }
            if(raktas[i] == static_cast<unsigned char>(j)) {
                indeksasRakto=j;
            }
            if(indeksasTeksto != -1 && indeksasRakto != -1) {
                int indeksasRezultato = ((indeksasTeksto - asciiPradzia) + (indeksasRakto - asciiPradzia)) % asciiIlgis +
                                        asciiPradzia;

                rezultatas[i] = (unsigned char)indeksasRezultato;
                indeksasTeksto=-1;
                indeksasRakto=-1;
            }

        }

    }
    string rezultatasString="";
    for (int i = 0; i < tekstoIlgis; i++) {
        rezultatasString=rezultatasString + rezultatas[i];
    }

    return rezultatasString;
}
string DesifravimasASCII(char tekstas[],char raktas[]) {
    int asciiPradzia=33,asciiPabaiga=126;
    int asciiIlgis= asciiPabaiga-asciiPradzia+1;
    int indeksasTeksto=-1;
    int indeksasRakto=-1;
    int tekstoIlgis = strlen(tekstas);
    string raktasString = raktas;
    while (raktasString.length() < strlen(tekstas)) {
        raktasString.append(raktasString.begin(), raktasString.end());
    }
    strcpy(raktas, raktasString.c_str());
    char rezultatas[100];
    for(int i = 0; i < tekstoIlgis; i++) {

        for(int j = asciiPradzia; j < asciiPabaiga; j++) {
            if(tekstas[i] == static_cast<unsigned char>(j)) {
                indeksasTeksto=j;
            }
            if(raktas[i] == static_cast<unsigned char>(j)) {
                indeksasRakto=j;
            }
            if(indeksasTeksto != -1 && indeksasRakto != -1) {
               int indeksasRezultato = ((indeksasTeksto - asciiPradzia) - (indeksasRakto - asciiPradzia) + asciiIlgis) % asciiIlgis
                                       + asciiPradzia;


                rezultatas[i] = (unsigned char)indeksasRezultato;
                indeksasTeksto=-1;
                indeksasRakto=-1;
            }

        }

    }
    string rezultatasString="";
    for (int i = 0; i < tekstoIlgis; i++) {
        rezultatasString=rezultatasString + rezultatas[i];
    }

    return rezultatasString;
}



int main() {
    int pasirinkimas;
    char tekstas[100];
    char raktas[100];
    string rezultatas;
    char uzsifruotasTekstas[100];
    char uzsifruotoRaktas[100];

    while (pasirinkimas != 3) {
        cout <<"Pasirinkite operacija kuria norite atlikti su tekstu"<<endl;
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
                rezultatas = Uzsifravimas(tekstas, raktas);
                cout << "Uzsifruotas tekstas: "<< rezultatas << endl;
            }else if (pasirinkti==2) {
                cout <<"Irasykite teksta kuri norite desifruoti:"<<endl;
                cin>>tekstas;
                cout <<"Irasykite rakta kuri norite naudoti:"<<endl;
                cin>>raktas;
                rezultatas = Desifravimas(tekstas, raktas);
                cout << "Desifruotas tekstas: "<< rezultatas << endl;
            }
        } else if (pasirinkimas==2){
            int pasirinkti;
            cout <<"Pasirinkite operacija kuria norite atlikti:"<<endl;
            cout <<"1. Sifravimas naudojant ASCII koduote"<<endl;
            cout <<"2. Desifravimas naudojant ASCII koduote"<<endl;
            cin>>pasirinkti;
            if(pasirinkti==1) {
                cout <<"Irasykite teksta kuri norite uzsifruoti:"<<endl;
                cin>>uzsifruotasTekstas;
                cout <<"Irasykite rakta kuri norite naudoti:"<<endl;
                cin>>uzsifruotoRaktas;
                rezultatas = UzsifravimasASCII(uzsifruotasTekstas, uzsifruotoRaktas);
                cout << "Uzsifruotas tekstas: "<< rezultatas << endl;
            }else if (pasirinkti==2) {
                cout <<"Irasykite teksta kuri norite desifruoti:"<<endl;
                cin>>uzsifruotasTekstas;
                cout <<"Irasykite rakta kuri norite naudoti:"<<endl;
                cin>>uzsifruotoRaktas;
                rezultatas = DesifravimasASCII(uzsifruotasTekstas, uzsifruotoRaktas);
                cout << "Desifruotas tekstas: "<< rezultatas << endl;
            }

        } else if(pasirinkimas != 3){
            cout << "Pasirinkimas neteisingas, bandykite dar karta"<<endl;
        }
    }
    return 0;
}
