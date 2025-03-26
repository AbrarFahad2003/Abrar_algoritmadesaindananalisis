#include <iostream>
#include <vector>
using namespace std;

class Perpustakaan {
private:
    string nama, npm;
    vector<string> bukuDipinjam;

public:
    // Konstruktor untuk menyimpan data mahasiswa
    Perpustakaan(string n, string np) : nama(n), npm(np) {}

    // Metode untuk menambahkan buku ke daftar pinjaman
    void pinjamBuku(string buku) {
        bukuDipinjam.push_back(buku);
    }

    // Menampilkan data peminjam dan daftar buku
    void tampilkanData() {
        cout << "\n??========== DATA PEMINJAMAN =========??\n";
        cout << "?? Nama: " << nama << "\n?? NPM : " << npm << "\n";
        
        if (bukuDipinjam.empty()) {
            cout << "\n? Belum ada buku yang dipinjam.\n";
        } else {
            cout << "\n?? Buku yang Dipinjam:\n";
            for (size_t i = 0; i < bukuDipinjam.size(); i++)
                cout << "  ?? " << bukuDipinjam[i] << "\n";
            cout << "\n?? Harap dikembalikan dalam 2 minggu!\n";
        }
        cout << "====================================\n";
    }
};

int main() {
    string nama, npm, buku;
    int jumlahBuku;

    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan NPM : ";
    getline(cin, npm);

    Perpustakaan peminjam(nama, npm);

    cout << "\nBerapa buku yang ingin dipinjam? ";
    cin >> jumlahBuku;
    cin.ignore();

    for (int i = 0; i < jumlahBuku; i++) {
        cout << "\n?? Masukkan judul buku ke-" << i + 1 << ": ";
        getline(cin, buku);
        peminjam.pinjamBuku(buku);
    }

    peminjam.tampilkanData();
    return 0;
}
