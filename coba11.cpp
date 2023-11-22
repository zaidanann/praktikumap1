#include <iostream>

using namespace std;

struct kontraka{
    string nama, kontak, prodi;

    void print(){
      cout << "Nama: " << nama << endl;
      cout << "Kontak: " << kontak << endl;
      cout << "Prodi: " << prodi << endl;
    }
};

  void pakestruct() {
    kontraka zaidan,aldi;

    cout << "zaidan: ";
    zaidan.nama = "Zaidan";
    zaidan.kontak = "08123456789";
    zaidan.prodi = "Teknik Informatika";

    zaidan.print();

    cout << "aldi: ";
    aldi.nama = "Aldi";
    aldi.kontak = "08123456789";
    aldi.prodi = "Teknik Informatika";

    aldi.print();
}  

int main() {
  pakestruct();
}
  
