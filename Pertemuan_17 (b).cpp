#include <iostream>
#include <string>
using namespace std;


string coment(int n);

int main() {
    char lagi;
    int i;

    do {
        system("cls"); 
        cout << "Masukkan nilai = ";
        cin >> i;

        string c = coment(i); 
        cout << c;

        cout << "\n\nIngin input lagi [Y/T]: ";
        cin >> lagi;

    } while (lagi == 'Y' || lagi == 'y');

    return 0;
}


string coment(int n) {
    if (n % 2 == 1)
        return "---Bilangan Ganjil---";
    else
        return "---Bilangan Genap---";
}
