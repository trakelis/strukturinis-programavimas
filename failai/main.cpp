#include <iostream>
#include <fstream>

using namespace std;
int main() {
    ifstream fin;
    ofstream fout;
    fin.open("duomenys.txt");
    fout.open("rezultatai.txt");
    int x=0;
    while(!fin.eof()) {
      fin>>x;
        if (x%2==0) {
            fout<<x<<endl;
        }
    }
    fin.close();
    fout.close();
    return 0;
}
