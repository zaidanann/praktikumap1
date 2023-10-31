#include <iostream>

int main() {
    int a, b, c;

    // Membaca tiga bilangan bulat a, b, dan c
    std::cout << "Masukkan nilai a: ";
    std::cin >> a;

    std::cout << "Masukkan nilai b: ";
    std::cin >> b;

    std::cout << "Masukkan nilai c: ";
    std::cin >> c;

    // Menghitung hasil ekspresi 6 * (ax^2 + bx + c) saat x = 1
    int x = 1;
    int hasil = 6 * (a * x * x + b * x + c);

    // Menampilkan hasil
    std::cout << "Hasil ekspresi 6 * (ax^2 + bx + c) saat x = 1 adalah: " << hasil << std::endl;

    return 0;
}