#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Lithuanian");

wchar_t abecele[32] = {'A', L'Ą', 'B', 'C', L'Č', 'D', 'E', L'Ę', L'Ė', 'F', 'G', 'H', 'I', L'Į', 'Y', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'R','S', L'Š', 'T', 'U', L'Ų', L'Ū', 'V', 'Z', L'Ž'};

    int pasirinkimas;
    while (pasirinkimas != 3) {
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
                string tekstas,raktas;
                cout <<"Irasykite teksta kuri norite uzsifruoti:"<<endl;
                cin>>tekstas;
                cout <<"Irasykite rakta kuri norite naudoti:"<<endl;
                cin>>raktas;

                char arr[tekstas.length() + 1];
                strcpy(arr, tekstas.c_str());
                for (int i = 0; i < tekstas.length(); i++)
                    cout << arr[i]<<endl;

            }else if (pasirinkti==2) {
                string tekstas,raktas;
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



    return 0;
}
