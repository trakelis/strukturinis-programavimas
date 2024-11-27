#include <iostream>
#include <cstring>
#include <regex>
#include <fstream>



using namespace std;

struct menuItemType{
string menuItem;
int menuPrice;
};


void TeksoAtskyrimas(string line, string tekstas, double skaicius) {
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
    while (getline(duomenys,line)) {
        TeksoAtskyrimas(line,menu->menuItem,menu->menuPrice);
    }
    duomenys.close();
}

int main() {
menuItemType menuList[100];
int pasirinkimas;
 while (pasirinkimas != 9) {

 }


    return 0;
}
