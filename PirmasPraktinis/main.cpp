#include <iostream>

    using namespace std;

    int main() {
        int choice = 0;
        while (choice != 4) {
            cout <<"Pasirinkite operacija kuria norite atlikti su valiuta:"<<endl;
            cout <<"1. Valiutios palyginimas"<<endl;
            cout <<"2. Valiutos pirkimas"<<endl;
            cout <<"3. Valiutos pardavimas"<<endl;
            cout <<"4. Iseiti"<<endl;
            cout <<"Jusu pasirinkimas:"<<endl;
            cin >> choice;
            switch (choice) {
                case 1:
                    cout <<"Jus pasirinkote Valiutos palyginima"<<endl;
                int choice2;
                cout <<"Pasirinkite kokia valiuta norite lyginti"<<endl;
                cout <<"1. Svaras(GBP)"<<endl;
                cout <<"2. Doleris(USD)"<<endl;
                cout <<"3. Rupija(INR)"<<endl;
                cout <<"4. Iseiti"<<endl;
                cin >> choice2;
                switch(choice2) {
                    case 1:
                    break;
                    case 2:
                    break;
                    case 3:
                    break;
                    case 4:
                        cout <<"Jus isejote is programos"<<endl;
                    break;
                    default:
                        cout <<"Tokio pasirinkimo nera. Bandykite dar karta."<<endl;
                }
                break;
                case 2:
                    cout <<"Jus pasirinkote Valiutos pirkima"<<endl;
                int choice2;
                cout <<"Pasirinkite kokia valiuta norite pirkti"<<endl;
                cout <<"1. Svaras(GBP)"<<endl;
                cout <<"2. Doleris(USD)"<<endl;
                cout <<"3. Rupija(INR)"<<endl;
                cout <<"4. Iseiti"<<endl;
                cin >> choice2;
                switch(choice2) {
                    case 1:
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    case 4:
                        cout <<"Jus isejote is programos"<<endl;
                        break;
                    default:
                        cout <<"Tokio pasirinkimo nera. Bandykite dar karta."<<endl;
                break;
                case 3:
                    cout <<"Jus pasirinkote Valiutos pardavima"<<endl;
                    int choice2;
                    cout <<"Pasirinkite kokia valiuta norite parduoti"<<endl;
                    cout <<"1. Svaras(GBP)"<<endl;
                    cout <<"2. Doleris(USD)"<<endl;
                    cout <<"3. Rupija(INR)"<<endl;
                    cout <<"4. Iseiti"<<endl;
                    cin >> choice2;
                    switch(choice2) {
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        case 4:
                            cout <<"Jus isejote is programos"<<endl;
                            break;
                        default:
                            cout <<"Tokio pasirinkimo nera. Bandykite dar karta."<<endl;
                break;
                case 4:
                    cout <<"Jus isejote is programos"<<endl;
                break;
                default:
                    cout <<"Tokio pasirinkimo nera. Bandykite dar karta."<<endl;
            }
        }

        return 0;
    }

