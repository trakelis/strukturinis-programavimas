#include <iostream>
#include <iomanip>

    using namespace std;

    int main() {
        int choice = 0,choice2;
        double kiekis,kiekisPo;
        double GBP_Bendras = 0.8593;
        double GBP_Pirkti = 0.8450;
        double GBP_Parduoti = 0.9060;
        double USD_Bendras = 1.0713;
        double USD_Pirkti = 1.0547;
        double USD_Parduoti = 1.1309;
        double INR_Bendras = 88.8260;
        double INR_Pirkti = 85.2614;
        double INR_Parduoti = 92.8334;

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
                cout <<"Pasirinkite kokia valiuta norite lyginti:"<<endl;
                cout <<"1. Svaras(GBP)"<<endl;
                cout <<"2. Doleris(USD)"<<endl;
                cout <<"3. Rupija(INR)"<<endl;
                cout <<"4. Iseiti"<<endl;
                cin >> choice2;
                switch(choice2) {
                    case 1:
                        cout <<fixed<<setprecision(2)<<"1 euras atitinka "<<GBP_Bendras<<" svaru."<<endl;
                        break;
                    case 2:
                        cout <<fixed<<setprecision(2)<<"1 euras atitinka "<<USD_Bendras<<" doleriu."<<endl;
                        break;
                    case 3:
                        cout <<fixed<<setprecision(2)<<"1 euras atitinka "<<INR_Bendras<<" rupiju."<<endl;
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

                cout <<"Pasirinkite kokia valiuta norite pirkti"<<endl;
                cout <<"1. Svaras(GBP)"<<endl;
                cout <<"2. Doleris(USD)"<<endl;
                cout <<"3. Rupija(INR)"<<endl;
                cout <<"4. Iseiti"<<endl;
                cin >> choice2;
                switch(choice2) {
                    case 1:
                        cout <<"Uz kiek euru norite pirkti valiutos?"<<endl;
                    cin >> kiekis;
                    kiekisPo = kiekis * GBP_Pirkti;
                        cout <<fixed<<setprecision(2)<<"Jus gausite "<<kiekisPo<<" svaru."<<endl;
                        break;
                    case 2:
                        cout <<"Uz kiek euru norite pirkti valiutos?"<<endl;
                    cin >> kiekis;
                    kiekisPo = kiekis * USD_Pirkti;
                        cout <<fixed<<setprecision(2)<<"Jus gausite "<<kiekisPo<<" doleriu."<<endl;
                        break;
                    case 3:
                        cout <<"Uz kiek euru norite pirkti valiutos?"<<endl;
                    cin >> kiekis;
                    kiekisPo = kiekis * INR_Pirkti;
                        cout <<fixed<<setprecision(2)<<"Jus gausite "<<kiekisPo<<" rupiju."<<endl;
                        break;
                    case 4:
                        cout <<"Jus isejote is programos"<<endl;
                    break;
                    default:
                        cout <<"Tokio pasirinkimo nera. Bandykite dar karta."<<endl;
                    break;
                }
                break;
                case 3:
                    cout <<"Jus pasirinkote Valiutos pardavima"<<endl;
                cout <<"Pasirinkite kokia valiuta norite parduoti:"<<endl;
                cout <<"1. Svaras(GBP)"<<endl;
                cout <<"2. Doleris(USD)"<<endl;
                cout <<"3. Rupija(INR)"<<endl;
                cout <<"4. Iseiti"<<endl;
                cin >> choice2;
                switch(choice2) {
                    case 1:
                        cout <<"Kiek valiutos norite parduoti?"<<endl;
                    cin >> kiekis;
                    kiekisPo = kiekis / GBP_Parduoti;
                    cout <<fixed<<setprecision(2)<<"Jus gausite "<<kiekisPo<<" euru."<<endl;
                    break;
                    case 2:
                        cout <<"Kiek valiutos norite parduoti?"<<endl;
                    cin >> kiekis;
                    kiekisPo = kiekis / USD_Parduoti;
                    cout <<fixed<<setprecision(2)<<"Jus gausite "<<kiekisPo<<" euru."<<endl;
                    break;
                    case 3:
                        cout <<"Kiek valiutos norite parduoti?"<<endl;
                    cin >> kiekis;
                    kiekisPo = kiekis / INR_Parduoti;
                    cout <<fixed<<setprecision(2)<<"Jus gausite "<<kiekisPo<<" euru."<<endl;
                    break;
                    case 4:
                        cout <<"Jus isejote is programos"<<endl;
                    break;
                    default:
                        cout <<"Tokio pasirinkimo nera. Bandykite dar karta."<<endl;
                }
                default:
                    cout <<"Tokio pasirinkimo nera. Bandykite dar karta."<<endl;
            }
        }

        return 0;
    }

