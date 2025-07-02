#include <iostream>
using namespace std;

int binarySearch(int data[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (data[mid] == target) {
            return mid;
        } else if (data[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int data[] = {11, 22, 33, 44, 55, 66, 77};
    int size = sizeof(data) / sizeof(data[0]);
    int target;

    cout << "Masukkan angka yang ingin dicari: ";
    cin >> target;

    int result = binarySearch(data, size, target);

    if (result != -1) {
        cout << "Angka ditemukan di indeks ke-" << result << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}

