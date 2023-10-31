#include <iostream>

// Function untuk menampilkan star1
void star1(int tinggi) {
    for (int i = 0; i < tinggi; i++) {
        for (int j = 0; j < tinggi - i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Function untuk menampilkan star2
void star2(int tinggi) {
    for (int i = 0; i < tinggi; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        for (int k = 0; k < tinggi - i; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Function untuk menampilkan star3
void star3(int tinggi) {
    for (int i = 0; i < tinggi; i++) {
        for (int j = 0; j < tinggi - i; j++) {
            std::cout << "*";
        }
        for (int k = 0; k < 2 * i; k++) {
            std::cout << " ";
        }
        for (int l = 0; l < tinggi - i; l++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int tinggi;
    
    // Input tinggi dari pengguna
    std::cout << "Masukkan tinggi star: ";
    std::cin >> tinggi;

    // Menampilkan star1
    std::cout << "Star1:" << std::endl;
    star1(tinggi);

    // Menampilkan star2
    std::cout << "Star2:" << std::endl;
    star2(tinggi);

    // Menampilkan star3
    std::cout << "Star3:" << std::endl;
    star3(tinggi);

    return 0;
}