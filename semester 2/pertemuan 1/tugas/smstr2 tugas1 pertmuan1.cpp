#include <iostream>
using namespace std;

void bubbleSortDescending(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { // Ubah tanda < menjadi >
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; // Jika tidak ada swap, hentikan loop lebih awal
    }
}

int main() {
    int array[100], n;

    cout << "Masukkan banyak elemen: ";
    cin >> n;
    cout << "Masukkan nilai: \n";

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    bubbleSortDescending(array, n);

    cout << "Hasil pengurutan dengan algoritma bubble sort (descending): \n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}
