#include <iostream>
using namespace std;

int main() {
    int data[] = {6, 12, 18, 24};
    int jumlah = sizeof(data) / sizeof(data[0]);
    int dicari, L = 0, R = jumlah - 1, mid;
    bool ditemukan = false;

    cout << "Masukkan data yang dicari: ";
    cin >> dicari;

    while (L <= R) {
        mid = (L + R) / 2;

        if (data[mid] == dicari) {
            cout << "Bilangan ditemukan di indeks " << mid << endl;
            ditemukan = true;
            break;
        } else if (data[mid] < dicari) {
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }

    if (!ditemukan) {
        cout << "Bilangan tidak ditemukan." << endl;
    }

    return 0;
}

