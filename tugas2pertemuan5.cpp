#include <iostream>
using namespace std;

int main() {
    int jumlah_baris = 5; // Anda dapat mengubah nilai ini untuk mengatur jumlah baris

    for(int i = 1; i <= jumlah_baris; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}