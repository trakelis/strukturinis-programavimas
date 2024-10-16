#include <iostream>
#include <cmath>
using namespace std;

string ArBalsis(char balsis) {
    char balsiai[]={'a','e','i','o','u','y'};
    for(int i=0;i<6;i++) {
        if(balsis==balsiai[i]) {
            return "true";
        }
    }
        return "false";
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
    cout<<"Spejimas yra teisingas"<<endl;


}
void void_fizzbuzz(int n) {
    for (int i = 1; i <= n; i++) {

        if(i % 3 == 0 && i % 5 == 0) {
            cout<<"FizzBuzz"<<endl;
        } else if(i%3==0) {
            cout<<"Fizz"<<endl;
        } else if(i%5==0) {
            cout<<"Buzz"<<endl;
        }  else {
            cout<<i<<endl;
        }
    }
}

    int main() {
        int choice = 0;

        while (choice != 5) {
            cout <<"Pasirinkite funkcija kuria norite atlikti:"<<endl;
            cout <<"1. Patikrinimas ar raide yra balse"<<endl;
            cout <<"2. Dvieju skaitmenu didziausio bendro daliklio radimas"<<endl;
            cout <<"3. Zaidimas atspeti skaiciu nuo 1 ik 100"<<endl;
            cout <<"4. Funkcija atspaudinanti visu skaiciu nuo vieno iki pasirinkto skaiciaus su papildoma informacija"<<endl;
            cout <<"5. Iseiti"<<endl;

            cout <<"Jusu pasirinkimas:"<<endl;
            cin >> choice;

            switch(choice) {
                case 1:
                    char x;
                cout <<"Iveskite raide:"<<endl;
                cin>>x;
                cout <<ArBalsis(x)<<endl;
                break;

                case 2:
                    cout <<"Iveskite skaicius"<<endl;
                int sk1,sk2,dbd;
                cin>>sk1>>sk2;
                dbd = DidziausioDaliklioRadimas(sk1,sk2);
                cout<<"Skaiciu didziausias bendras daliklis: "<<dbd<<endl;
                break;

                case 3:
                    Zaidimas();
                break;

                case 4:
                    int sk;
                    cout <<"Iveskite skaiciu"<<endl;
                cin>>sk;
                void_fizzbuzz(sk);
                break;

                case 5:
                    return 0;

                default:
                    cout <<"Pasirinkimas neegzistuoja, pasirinkite dar karta"<<endl;
                break;

            }



        }

        return 0;
    }


