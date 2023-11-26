#include<iostream>
#include<string>

using namespace std;

struct Penjualan {
    string Kode_brg;
    string Nama_brg;
    int Jumlah;
    int Harga_satuan;
};

int main() {
    const int num_records = 20;
    Penjualan data_penjualan[num_records];

    for (int i = 0; i < num_records; ++i) {
        cout << "Masukkan data penjualan ke-" << i+1 << endl;
        cout << "Kode Barang: ";
        cin >> data_penjualan[i].Kode_brg;
        cout << "Nama Barang: ";
        cin >> data_penjualan[i].Nama_brg;
        cout << "Jumlah: ";
        cin >> data_penjualan[i].Jumlah;
        cout << "Harga Satuan: Rp.";
        cin >> data_penjualan[i].Harga_satuan;
    }

    int total_penjualan = 0;
    for (int i = 0; i < num_records; ++i) {
        total_penjualan += data_penjualan[i].Jumlah * data_penjualan[i].Harga_satuan;
    }

    float keuntungan = 0.1 * total_penjualan;

    cout << "\nTotal Harga Penjualan: Rp." << total_penjualan << endl;
    cout << "Keuntungan (10%): Rp." << keuntungan << endl;

    return 0;
}