#include <iostream>
using namespace std;

int main() {
    const double DISCOUNT_10 = 0.10;
    const double DISCOUNT_20 = 0.20;
    const double DISCOUNT_30 = 0.30;
    const double DISCOUNT_3_DAYS = 0.05;

    double roomCost, salesTaxRate;
    int numRooms, numDays;

    cout << "Masukkan biaya sewa satu kamar: $";
    cin >> roomCost;

    cout << "Masukkan jumlah kamar yang dipesan: ";
    cin >> numRooms;

    cout << "Masukkan jumlah hari pemesanan kamar: ";
    cin >> numDays;

    cout << "Masukkan tarif pajak penjualan (dalam persen): ";
    cin >> salesTaxRate;

    double discount;
    if (numRooms >= 30) {
        discount = DISCOUNT_30;
    } else if (numRooms >= 20) {
        discount = DISCOUNT_20;
    } else if (numRooms >= 10) {
        discount = DISCOUNT_10;
    } else {
        discount = 0.0;
    }

    if (numDays >= 3) {
        discount += DISCOUNT_3_DAYS;
    }

    double totalRoomCost = roomCost * numRooms * numDays * (1.0 - discount);

    double salesTaxAmount = (salesTaxRate / 100) * totalRoomCost;

    double totalBillingAmount = totalRoomCost + salesTaxAmount;

    cout << "\nBiaya sewa satu kamar: $" << roomCost << endl;
    cout << "Diskon pada setiap kamar dalam persen: " << discount * 100 << "%" << endl;
    cout << "Jumlah kamar yang dipesan: " << numRooms << endl;
    cout << "Jumlah hari pemesanan kamar: " << numDays << endl;
    cout << "Total biaya kamar: $" << totalRoomCost << endl;
    cout << "Pajak penjualan: $" << salesTaxAmount << endl;
    cout << "Total jumlah tagihan: $" << totalBillingAmount << endl;

    return 0;
      }