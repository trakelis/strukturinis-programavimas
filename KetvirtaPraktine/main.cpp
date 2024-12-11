#include <iostream>
#include <cstring>
#include <regex>
#include <fstream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

struct menuItemType{
string menuItem;
double menuPrice;
};

void Kiekiai(int kiekiai[]) {
    for (int i = 0; i < sizeof(kiekiai); i++) {
        kiekiai[i] = 0;
    }
}
void TekstoAtskyrimas(string line, string& tekstas, double& skaicius) {
    regex numberRegex(R"((.*?)(-?\d+(\.\d+)?))");
    smatch sutapimas;

    if (regex_search(line, sutapimas, numberRegex)) {
        tekstas = sutapimas[1].str();
        skaicius = stod(sutapimas[2].str());
    }

}

void GetData(menuItemType menu[]) {
    string line;
    ifstream duomenys("duomenys.txt");
    int x = 0;
    while (getline(duomenys,line)) {
        TekstoAtskyrimas(line,menu[x].menuItem,menu[x].menuPrice);
        x++;
    }
    duomenys.close();
}

int ilgiausiasString(menuItemType menu[]) {
    int ilgiausias = 0;
    for (int i = 0; i < sizeof(menu); i++) {

        if (menu[i].menuItem.length() > ilgiausias) {
            ilgiausias = menu[i].menuItem.length();
        }
    }
    return ilgiausias;
}
void showMenu (menuItemType menu[]) {
    cout << "Sveiki atvyke i restorana 'Simbarde'" << endl;
    cout << "Pasirinkite koki maista norite uzsisakyti pasirinkdami skaiciu prie jo pavadinimo" << endl;
    for (int i = 0; i < sizeof(menu); i++) {

        int tustiTarpai = ilgiausiasString(menu)-menu[i].menuItem.length();
        menu[i].menuItem.append(tustiTarpai,' ');
        cout<<fixed<<setprecision(2)<<i+1<<". "<<menu[i].menuItem<<" "<<menu[i].menuPrice<<" Eur"<<endl;
    }
    cout << "9." <<" Pereiti prie cekio."<< endl;
    cout << "Jusu pasirinkimas:" << endl;
}
void printCheck(menuItemType menu[],int kiekiai[]) {
    ofstream fout("rezultatai.txt");
    double sum=0,mokesciaiSk=0,galutine=0;
    fout << "Sveiki atvyke i restorana 'Simbarde'" << endl;
    for (int i = 0; i < sizeof(menu); i++) {

        if (kiekiai[i] > 0) {
            int tustiTarpai = ilgiausiasString(menu)-menu[i].menuItem.length();
            menu[i].menuItem.append(tustiTarpai,' ');
            fout <<fixed<<setprecision(2)<<kiekiai[i]<< " " << menu[i].menuItem << menu[i].menuPrice*kiekiai[i] <<"€"<< endl;
            sum+=menu[i].menuPrice*kiekiai[i];
        }
    }
    mokesciaiSk = sum*0.21;
    galutine = mokesciaiSk+sum;
    string mokesciai = "Mokesciai";
    string galutine_kaina = "Galutine suma";

    int tustiTarpai = ilgiausiasString(menu)-mokesciai.length()+2;
    mokesciai.append(tustiTarpai,' ');
    tustiTarpai = ilgiausiasString(menu)-galutine_kaina.length()+2;
    galutine_kaina.append(tustiTarpai,' ');

    fout<<fixed<<setprecision(2)<<mokesciai<<mokesciaiSk<<"€"<<endl;
    fout<<fixed<<setprecision(2)<<galutine_kaina<<galutine<<"€"<<endl;

fout.close();
}

int main() {
    menuItemType menuList[8];
    int kiekiai[8];
    Kiekiai(kiekiai);
    GetData(menuList);
    int pasirinkimas;
 while (pasirinkimas != 9) {
     showMenu(menuList);
     cin>>pasirinkimas;
     switch (pasirinkimas) {
         case 1:kiekiai[0]++;
         break;
         case 2:kiekiai[1]++;
         break;
         case 3:kiekiai[2]++;
         break;
         case 4:kiekiai[3]++;
         break;
         case 5:kiekiai[4]++;
         break;
         case 6:kiekiai[5]++;
         break;
         case 7:kiekiai[6]++;
         break;
         case 8:kiekiai[7]++;
         break;

     }
 }
printCheck(menuList,kiekiai);
    return 0;
}
