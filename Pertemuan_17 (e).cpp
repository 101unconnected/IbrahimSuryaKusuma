#include <iostream>
using namespace std;

float luas(int r) {
    return 3.14f * r * r;
}

float kel(int r) {
    return 2 * 3.14f * r;
}

int main() {
    int j;

    system("cls"); 
    
    cout << "Masukkan Jari-jari = ";
    cin >> j;

    cout << "Luas lingkaran = " << luas(j) << endl;
    cout << "Keliling lingkaran = " << kel(j) << endl;

    cin.get(); 
    cin.get(); 
    return 0;
}
