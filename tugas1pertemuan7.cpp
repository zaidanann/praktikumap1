#include <iostream>

// Fungsi untuk mengonversi meter ke centimeter
double meterToCentimeter(double meter) {
    return meter * 100;
}

// Fungsi untuk menghitung jumlah ikatan bunga rangkai dan sisa pita
void hitungIkatanDanSisa(double panjangPitaMeter, double panjangPerIkatanCm) {
    double panjangPitaCm = meterToCentimeter(panjangPitaMeter);
    int jumlahIkatan = panjangPitaCm / panjangPerIkatanCm;
    double sisaPitaCm = panjangPitaCm - (jumlahIkatan * panjangPerIkatanCm);

    std::cout << "Jumlah ikatan bunga rangkai yang dapat dibuat: " << jumlahIkatan << std::endl;
    std::cout << "Panjang sisa pita yang belum dipakai (dalam cm): " << sisaPitaCm << std::endl;
}

int main() {
    double panjangPitaMeter = 12.0; // Panjang pita dalam meter
    double panjangPerIkatanCm = 45.0; // Panjang per ikatan bunga rangkai dalam cm

    hitungIkatanDanSisa(panjangPitaMeter, panjangPerIkatanCm);

    return 0;
}