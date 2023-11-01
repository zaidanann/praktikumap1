#include <iostream>
#include <string>

using namespace std;

string convertPassword(const string& password) {
    if (password.length() > 8) {
        return "Passwordnya kepanjangan";
    }

    string convertedPassword = "";
    char prevChar = '\0';

    for (char c : password) {
        if (isalnum(c)) {
            if (c == prevChar) {
                return "Passwordnya ada karakter berulang";
            }

            if (isalpha(c)) {
                convertedPassword += static_cast<char>(c + 2);
            } else if (isdigit(c)) {
                int digit = c - '0';
                int convertedDigit = digit * 2;
                convertedPassword += to_string(convertedDigit);
            }

            prevChar = c;
        } else {
            return "Passwordnya ada karakter yang tidak valid";
        }
    }

    return convertedPassword;
}

int main() {
    string password;
    cout << "Masukkan password: ";
    cin >> password;

    string result = convertPassword(password);

    if (result != "Password terlalu panjang" &&
        result != "Password terlalu karakter yang tidak valid" &&
        result != "Password terlalu karakter berulang") {
        cout << "Password yang dimasukkan: " << password << endl;
        cout << "Password yang tersimpan (setelah konversi): " << result << endl;
    } else {
        cout << "Password tidak valid: " << result << endl;
    }

    return 0;
}