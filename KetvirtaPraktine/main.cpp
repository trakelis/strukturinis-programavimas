#include <iostream>
#include <cstring>
#include <regex>
#include <fstream>



using namespace std;

struct menuItemType{
string menuItem;
double menuPrice;
};


void TeksoAtskyrimas(string line, string& tekstas, double& skaicius) {
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
        TeksoAtskyrimas(line,menu[x].menuItem,menu[x].menuPrice);
        x++;
    }
    duomenys.close();
}

int main() {
menuItemType menuList[8];
int pasirinkimas;
 //while (pasirinkimas != 9) {

// }
 GetData(menuList);
    for (int i = 0; i < sizeof(menuList); i++) {
        cout << menuList[i].menuItem << endl;
        cout << menuList[i].menuPrice << endl;
        cout << " " << endl;
    }

    return 0;
}
