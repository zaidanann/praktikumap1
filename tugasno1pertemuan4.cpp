#include <iostream>
using namespace std;

string KonversiAngkaKeRomawi(int angka) {
    string hasil = "";
    int daftarAngkaArab[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string daftarAngkaRomawi[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++) {
        while (angka >= daftarAngkaArab[i]) {
            hasil += daftarAngkaRomawi[i];
            angka -= daftarAngkaArab[i];
        }
    }

    return hasil;
}

int main() {
    int angka;
    cout << "Masukkan angka Arab: ";
    cin >> angka;

    if (angka >= 1 && angka <= 3999) {
        string romawi = KonversiAngkaKeRomawi(angka);
        cout << "Angka Romawi: " << romawi << endl;
    } else {
        cout << "Masukkan angka antara 1 dan 3999." << endl;
    }

    return 0;
}