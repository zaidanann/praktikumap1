#include <iostream>
using namespace std;

int main() {
    double panjang_kertas_inci, lebar_kertas_inci;
    double margin_atas_inci, margin_bawah_inci, margin_kiri_inci, margin_kanan_inci;
    double ukuran_titik_garis;
    char spasi_ganda;

    cout << "Masukkan panjang kertas (dalam inci): ";
    cin >> panjang_kertas_inci;
    cout << "Masukkan lebar kertas (dalam inci): ";
    cin >> lebar_kertas_inci;
    cout << "Masukkan margin atas (dalam inci): ";
    cin >> margin_atas_inci;
    cout << "Masukkan margin bawah (dalam inci): ";
    cin >> margin_bawah_inci;
    cout << "Masukkan margin kiri (dalam inci): ";
    cin >> margin_kiri_inci;
    cout << "Masukkan margin kanan (dalam inci): ";
    cin >> margin_kanan_inci;
    cout << "Masukkan ukuran titik suatu garis: ";
    cin >> ukuran_titik_garis;
    cout << "Apakah garisnya diberi spasi ganda? (Y/N): ";
    cin >> spasi_ganda;

    double panjang_kertas_poin = panjang_kertas_inci * 72;
    double lebar_kertas_poin = lebar_kertas_inci * 72;

    double lebar_tersedia_poin = lebar_kertas_poin - margin_kiri_inci * 72 - margin_kanan_inci * 72;
    double tinggi_tersedia_poin = panjang_kertas_poin - margin_atas_inci * 72 - margin_bawah_inci * 72;

    if (spasi_ganda == 'Y' || spasi_ganda == 'y') {
        ukuran_titik_garis *= 2; 
    }

    double jumlah_karakter_dalam_satu_baris = lebar_tersedia_poin / ukuran_titik_garis;

    double jumlah_baris = tinggi_tersedia_poin / ukuran_titik_garis;

    cout << "\nJumlah karakter dalam satu baris: " << int(jumlah_karakter_dalam_satu_baris) << endl;
    cout << "Jumlah baris yang dapat dicetak: " << int(jumlah_baris) << endl;

    return 0;
}