#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Tabungan dalam Dollar dan Euro
    double tabungan_usd = 12000;
    double tabungan_euro = 20000;

    // Kurs mata uang
    double kurs_usd_to_idr = 15000;  // 1 US Dollar ke Rupiah
    double kurs_euro_to_usd = 0.997;  // 1 Euro ke US Dollar

    // Harga mobil baru dalam Rupiah
    double harga_mobil = 425000000;

    // Mengkonversi tabungan dalam Euro ke Dollar
    tabungan_usd += tabungan_euro * kurs_euro_to_usd;

    // Menghitung total tabungan dalam Rupiah
    double total_tabungan_idr = tabungan_usd * kurs_usd_to_idr;

    // Menghitung sisa uang setelah membeli mobil
    double sisa_uang_idr = total_tabungan_idr - harga_mobil;

    // Menampilkan hasil perhitungan
    cout << fixed << setprecision(2);
    cout << "Total dana Pak Anto dalam Rupiah: " << total_tabungan_idr << endl;
    cout << "Sisa dana Pak Anto setelah membeli mobil: " << sisa_uang_idr << endl;

    return 0;
}