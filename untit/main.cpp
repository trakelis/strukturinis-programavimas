
#include <iostream>

using namespace std;

int main() {
    int *array; // rodykle, kurio nukreipsime i atminties srities pradzia int size; // masyvo ilgis - kintamasis
    cout<<"Nurodykite, kiek kubu skaiciuosime\n";
    int size;
    cin >> size;
    cout<<"Skaiciuosime" << size <<" kubus"<<endl;
    array = new int[size]; // skiriama dinamine atmintis
    for (int i = 0; i < size; i++) {
        array[i]= (i+1)*(i+1)*(i+1);
    }// 1 adresavimo budas //* (array+i) = (i+1)*(i+1)*(i+1); //2 budas //array++=(i+1)*(i+1)*(i+ 1); // 3 budas - klaida!
    for(int i = 1; i <= size; i++)
        cout<<"Skaiciaus "<<i<<" kubas yra "<<array[i-1]<<endl;
    delete [] array; //atmintis islaisvima
    return 0;
}
