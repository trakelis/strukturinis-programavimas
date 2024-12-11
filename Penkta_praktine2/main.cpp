#include <iostream>

using namespace std;

struct student{
    int student_id{};
    string student_name;
    string student_last_name;
    int student_age{};
};

int main() {
    int dydis;
    cout << "Pasirinkite kiek studentu norite sarase:";
    cin >> dydis;
    student *masyvas = new student[dydis];
    int kiekis=-1;
    int pasirinkimas;
    int id_trinti,trinimo_index,id_atnaujinti,atnaujinti_index;

    while(pasirinkimas != 5) {
        cout << "Pasirinkite ka norite atlikti su masyvu" << endl;
        cout << "1.Prideti studenta ir jo duomenis" << endl;
        cout << "2.Atspausdinti visa masyva" << endl;
        cout << "3.Istrinti studenta pagal ID" << endl;
        cout << "4.Atnaujinti studento duomenis pagal ID" << endl;
        cout << "5.Iseiti" << endl;
        cout << "Pasirinkimas: " << endl;
        cin>>pasirinkimas;

        switch (pasirinkimas) {
            case 1:
                cout<<"Iveskite studento ID"<<endl;
            cin>>masyvas[kiekis+1].student_id;
            cout<<"Iveskite studento varda"<<endl;
            cin>>masyvas[kiekis+1].student_name;
            cout<<"Iveskite studento pavarde"<<endl;
            cin>>masyvas[kiekis+1].student_last_name;
            cout<<"Iveskite studento amziu"<<endl;
            cin>>masyvas[kiekis+1].student_age;
            kiekis++;
            break;

            case 2:
                for(int i=0;i<kiekis+1;i++) {
                    cout << i+1 << ". " << masyvas[i].student_id << " " << masyvas[i].student_name << " " << masyvas[i].student_last_name << " " << masyvas[i].student_age << endl;
                }
            break;
            case 3:
                cout<<"Pasirinkite studento ID kuri norite istrinti is saraso: "<<endl;
                cin>>id_trinti;
            for(int i=0;i<kiekis+1;i++) {
              if (masyvas[i].student_id==id_trinti) {
                  trinimo_index = i;
              }
            }
            for(int i = trinimo_index;i<kiekis;i++) {
                masyvas[i].student_id = masyvas[i+1].student_id;
                masyvas[i].student_name = masyvas[i+1].student_name;
                masyvas[i].student_last_name = masyvas[i+1].student_last_name;
                masyvas[i].student_age = masyvas[i+1].student_age;
            }
            kiekis-=1;
            break;
            case 4:
                cout<<"Pasirinkite studento ID kuri norite atnaujinti: "<<endl;
            cin>>id_atnaujinti;
            for(int i=0;i<kiekis+1;i++) {
                if (masyvas[i].student_id==id_atnaujinti) {
                    atnaujinti_index = i;
                }
            }

            cout<<"Iveskite nauja studento ID:"<<endl;
            cout<<"Senas: "<<masyvas[atnaujinti_index].student_id<<endl;
            cin>>masyvas[atnaujinti_index].student_id;
            cout<<"Iveskite nauja studento varda:"<<endl;
            cout<<"Senas: "<<masyvas[atnaujinti_index].student_name<<endl;
            cin>>masyvas[atnaujinti_index].student_name;
            cout<<"Iveskite nauja studento pavarde:"<<endl;
            cout<<"Senas: "<<masyvas[atnaujinti_index].student_last_name<<endl;
            cin>>masyvas[atnaujinti_index].student_last_name;
            cout<<"Iveskite nauja studento amziu:"<<endl;
            cout<<"Senas: "<<masyvas[atnaujinti_index].student_age<<endl;
            cin>>masyvas[atnaujinti_index].student_age;

        }


    }
    delete [] masyvas;

    return 0;
}
