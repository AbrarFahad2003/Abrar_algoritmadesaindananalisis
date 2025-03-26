#include <iostream>
using namespace std;

class Mahasiswa {
public:
    virtual void tampilkanData() {
        cout << "Data Mahasiswa:" << endl;
    }
};

class MahasiswaAktif : public Mahasiswa {
private:
    string nama, jurusan, fakultas;
    int umur;
public:
    MahasiswaAktif(string n, int u, string j, string f)
        : nama(n), umur(u), jurusan(j), fakultas(f) {}

    void tampilkanData() override {
        cout << "Status  : Mahasiswa Aktif" << endl;
        cout << "Nama    : " << nama << endl;
        cout << "Umur    : " << umur << endl;
        cout << "Jurusan : " << jurusan << endl;
        cout << "Fakultas: " << fakultas << endl << endl;
    }
};

class Alumni : public Mahasiswa {
private:
    string nama, jurusan, fakultas;
    int umur;
public:
    Alumni(string n, int u, string j, string f)
        : nama(n), umur(u), jurusan(j), fakultas(f) {}

    void tampilkanData() override {
        cout << "Status  : Alumni" << endl;
        cout << "Nama    : " << nama << endl;
        cout << "Umur    : " << umur << endl;
        cout << "Jurusan : " << jurusan << endl;
        cout << "Fakultas: " << fakultas << endl << endl;
    }
};

int main() {
    Mahasiswa* m1 = new MahasiswaAktif("Abrar", 22, "Teknologi Informasi", "FTI");
    Mahasiswa* m2 = new Alumni("Fanar", 21, "Sistem Informasi", "FTI");

    m1->tampilkanData();
    m2->tampilkanData();

    delete m1;
    delete m2;

    return 0;
}
