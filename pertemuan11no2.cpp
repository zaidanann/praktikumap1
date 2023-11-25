#include <iostream>
#include <cmath>

struct Titik {
    double x;
    double y;
};

double hitungJarak(Titik titik1, Titik titik2) {
    double jarak = sqrt(pow(titik2.x - titik1.x, 2) + pow(titik2.y - titik1.y, 2));
    return jarak;
}

int main() {
    Titik titikA, titikB;
  
    std::cout << "Masukkan koordinat titik A (x y): ";
    std::cin >> titikA.x >> titikA.y;

    std::cout << "Masukkan koordinat titik B (x y): ";
    std::cin >> titikB.x >> titikB.y;

    double jarak = hitungJarak(titikA, titikB);
    std::cout << "Jarak antara titik A dan B adalah: " << jarak << std::endl;
  return 0;
}