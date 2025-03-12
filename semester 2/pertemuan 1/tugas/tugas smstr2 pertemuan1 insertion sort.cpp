#include <iostream>
using namespace std;

int main() {
    int y;
    cout << "Masukkan banyak array: ";
    cin >> y;
    
    int x[y];
    
    // Input elemen array
    for (int i = 0; i < y; i++) {
        cout << "Masukkan angka ke-" << i << " : ";
        cin >> x[i];
        cout << endl;
    }

    // Insertion Sort untuk descending order
    for (int i = 1; i < y; i++) {
        int key = x[i];
        int j = i - 1;
        
        // Mengubah tanda perbandingan menjadi (x[j] < key) untuk descending order
        while (j >= 0 && x[j] < key) {
            x[j + 1] = x[j];
            j--;
        }
        x[j + 1] = key;

        // Menampilkan proses sorting setiap iterasi
        cout << "Proses sorting" << endl;
        for (int m = 0; m < y; m++) {
            cout << x[m] << " ";
        }
        cout << endl;
    }

    // Menampilkan hasil akhir setelah sorting
    cout << "Hasil akhir" << endl;
    for (int m = 0; m < y; m++) {
        cout << x[m] << " ";
    }
    cout << endl;

    return 0;
}
