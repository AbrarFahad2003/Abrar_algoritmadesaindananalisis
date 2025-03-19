#include <iostream> 
using namespace std;

// Fungsi untuk mencetak array
void cetakArray(int arr[], int n) {
    cout << "[ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Cetak setiap elemen array
    }
    cout << "]\n";
}

// Fungsi untuk membagi array (Partition) dalam QuickSort (sorting dari besar ke kecil)
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Ambil elemen terakhir sebagai pivot
    int i = low - 1; // Indeks untuk elemen yang lebih besar dari pivot

    // Iterasi melalui elemen array
    for (int j = low; j < high; j++) {
        if (arr[j] > pivot) { // Jika elemen lebih besar dari pivot, tukar posisinya
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // Pindahkan pivot ke posisi yang benar
    return i + 1; // Kembalikan posisi pivot
}

// Fungsi utama QuickSort
void quicksort(int arr[], int low, int high, int n) {
    if (low < high) {
        int pos = partition(arr, low, high); // Tentukan posisi pivot

        cetakArray(arr, n); // Cetak array untuk melihat perubahan setelah setiap iterasi

        quicksort(arr, low, pos - 1, n); // Rekursi untuk bagian kiri dari pivot
        quicksort(arr, pos + 1, high, n); // Rekursi untuk bagian kanan dari pivot
    }
}

int main() {
    int n;
    cout << "Tentukan panjang array: ";
    cin >> n; // Input jumlah elemen array

    int arr[n];
    cout << "Masukkan elemen array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input elemen array
    }
    
    cout << "Proses sorting: " << endl;
    quicksort(arr, 0, n - 1, n); // Panggil fungsi QuickSort untuk mengurutkan array
    
    cout << "Array yang telah diurutkan (dari besar ke kecil): ";
    cetakArray(arr, n); // Cetak hasil akhir array yang sudah terurut
    return 0;
}
