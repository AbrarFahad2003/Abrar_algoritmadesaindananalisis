#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char choice, lanjut;

    do {
        cout << "Masukkan angka pertama = ";
        cin >> num1;

        cout << "Masukkan angka kedua = ";
        cin >> num2;

        Kalkulator k(num1, num2);

        cout << "Pilih operasi (+, -, *, /): ";
        cin >> choice;

        switch (choice) {
            case '+': cout << "Hasil pertambahan = " << k.tambah(); break;
            case '-': cout << "Hasil pengurangan = " << k.kurang(); break;
            case '*': cout << "Hasil perkalian = " << k.kali(); break;
            case '/': cout << "Hasil pembagian = " << k.bagi(); break;
            default: cout << "Pilihan tidak valid!\n";
        }

        cout << "\nHitung lagi? (y/n): ";
        cin >> lanjut;

    } while (toupper(lanjut) == 'Y');

    return 0;
}
