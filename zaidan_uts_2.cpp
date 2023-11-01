#include <iostream>
using namespace std;

int main() {
    double tabungan_usd = 12000;
    double tabungan_euro = 20000;

    double kurs_usd_to_idr = 15000;  
    double kurs_euro_to_usd = 0.997;  

    double harga_mobil = 425000000;

    tabungan_usd += tabungan_euro * kurs_euro_to_usd;
   
    double total_tabungan_idr = tabungan_usd * kurs_usd_to_idr;
 
    double sisa_uang_idr = total_tabungan_idr - harga_mobil;

    
    cout << "Total dana Pak Anto dalam Rupiah: " << total_tabungan_idr << endl;
    cout << "Sisa dana Pak Anto setelah membeli mobil: " << sisa_uang_idr << endl;

    return 0;
}