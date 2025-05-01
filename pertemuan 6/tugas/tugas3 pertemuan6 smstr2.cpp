#include <iostream>
#include <string>
using namespace std;

// Struktur data untuk menyimpan informasi buku
struct Buku {
    string judul;
    int rak;
};

// Fungsi binary search
int binarySearch(Buku daftar[], int jumlah, string target) {
    int kiri = 0, kanan = jumlah - 1;
    while (kiri <= kanan) {
        int tengah = (kiri + kanan) / 2;
        if (daftar[tengah].judul == target) {
            return tengah;
        } else if (daftar[tengah].judul < target) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }
    return -1; // Buku tidak ditemukan
}

int main() {
    // Daftar buku yang sudah diurutkan berdasarkan judul
    Buku daftarBuku[] = {
        {"Algoritma Dasar", 2},
        {"Basis Data", 1},
        {"Matematika", 2},
        {"Kalkulus", 4},
        {"Pemrograman C++", 2},
        {"Struktur Data", 3}
    };

    int jumlahBuku = sizeof(daftarBuku) / sizeof(daftarBuku[0]);

    string judulCari;
    cout << "Masukkan judul buku yang ingin dicari: ";
    getline(cin, judulCari);

    int hasil = binarySearch(daftarBuku, jumlahBuku, judulCari);

    if (hasil != -1) {
        cout << "Buku ditemukan! Letak: Rak " << daftarBuku[hasil].rak << endl;
    } else {
        cout << "Buku tidak ditemukan di perpustakaan." << endl;
    }

    return 0;
}

