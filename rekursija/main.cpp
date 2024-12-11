#include <iostream>
using namespace std;

void atspausdintiAtvirksciai(int skaicius,galinis) {
    if (skaicius == 0) {
        return;
    }
    cout<<skaicius%2;
    atspausdintiAtvirksciai(skaicius/2);
}
void atspausdintiAtvirksciai(int skaicius) {
    if (skaicius == 0) {
        return;
    }
    cout<<skaicius%2;
    atspausdintiAtvirksciai(skaicius/10);
}
int main() {
    int skaicius = 12;

        atspausdintiAtvirksciai(skaicius);

    return 0;
}
