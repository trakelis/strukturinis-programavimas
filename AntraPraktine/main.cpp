#include <iostream>
using namespace std;

bool ArBalsis(char balsis) {
    char balsiai[]={'a','e','i','o','u','y'};
    for(int i=0;i<6;i++) {
        if(balsis==balsiai[i]) {
            return true;
        }
    } else {
        return false;
    }
}
int main() {
    int choice = 0;
    while (choice != 5) {
        cout <<"Pasirinkite funkcija kuria norite atlikti:"<<endl;
        cout <<"1. Patikrinimas ar raide yra balse"<<endl;
        cout <<"2. Dvieju skaitmenu maziausio bendro daliklio radimas"<<endl;
        cout <<"3. Zaidimas atspeti skaiciu nuo 1 ik 100"<<endl;
        cout <<"4. Funkcija atspaudinanti visu skaiciu nuo vieno iki pasirinkto skaiciaus su papildoma informacija jeigu skaiciai dalinasi is 3,5 arba abieju"<<endl;
        cout <<"5. Iseiti"<<endl;
        cout <<"Jusu pasirinkimas:"<<endl;
        cin >> choice;

    }
    return 0;
}
