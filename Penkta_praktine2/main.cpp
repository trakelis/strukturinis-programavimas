#include <iostream>

using namespace std;

struct student{
    int student_id;
    string student_name;
    string student_last_name;
    int student_age;
};

int main() {
    student *masyvas;
    int x;
    cout << "Pasirinkite kiek studentu norite sarase:";
    cin >> x;
    masyvas = new student[x];
    int kiekis=-1;
    int pasirinkimas;
    int id_trinti,trinimo_index;

    while(pasirinkimas != 4) {
        cout << "Pasirinkite ka norite atlikti su masyvu" << endl;
        cout << "1.Prideti studenta ir jo duomenis" << endl;
        cout << "2.Atspausdinti visa masyva" << endl;
        cout << "3.Istrinti studenta pagal ID" << endl;
        cout << "4.Iseiti" << endl;
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
                cout<<sizeof(masyvas)<<endl;
                for(int i=0;i<sizeof(masyvas);i++) {
                    cout << i+1 << ". " << masyvas[i].student_id << " " << masyvas[i].student_name << " " << masyvas[i].student_last_name << " " << masyvas[i].student_age << endl;
                }
            break;
            case 3:
                student *temp = masyvas;
                cout<<"Pasirinkite studento ID kuri norite istrinti is saraso: "<<endl;
                cin>>id_trinti;
            for(int i=0;i<sizeof(temp);i++) {
              if (temp[i].student_id==id_trinti) {
                  trinimo_index = i;
              }
            }
            for(int i = trinimo_index;i<sizeof(temp);i++) {
                temp[i].student_id = temp[i+1].student_id;
                temp[i].student_name = temp[i+1].student_name;
                temp[i].student_last_name = temp[i+1].student_last_name;
                temp[i].student_age = temp[i+1].student_age;
            }
            int s=sizeof(masyvas);
            masyvas = new student[s-1];
            for (int i=0;i<sizeof(masyvas);i++) {
                masyvas[i].student_id=temp[i].student_id;
                masyvas[i].student_name=temp[i].student_name;
                masyvas[i].student_last_name=temp[i].student_last_name;
                masyvas[i].student_age=temp[i].student_age;
            }
            delete [] temp;



        }


    }

delete [] masyvas;
    return 0;
}
