#include <iostream>
#include <string>

using namespace std;

void bubbleSort(string arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { // Perbandingan alfabet (ascending)
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; // Jika tidak ada pertukaran, sorting selesai lebih awal
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah buku: ";
    cin >> n;
    cin.ignore(); // Menghindari masalah getline() setelah cin

    string buku[n];

    // Input judul buku
    for (int i = 0; i < n; i++) {
        cout << "Masukkan judul buku ke-" << i + 1 << ": ";
        getline(cin, buku[i]);
    }

    // Proses pengurutan
    bubbleSort(buku, n);

    // Menampilkan hasil setelah sorting
    cout << "\nJudul buku setelah diurutkan secara alfabetis (A-Z):\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << buku[i] << endl;
    }

    return 0;
}
