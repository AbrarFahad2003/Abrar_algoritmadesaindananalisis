#include <iostream>
#include <string>

using namespace std;

class Mobil {
private:
    string merek;
    int harga;

public:
    // Constructor
    Mobil(string a, int b) {
        merek = a;
        harga = b;
        cout << "Mobil " << merek << " dengan harga " << harga << " telah dibuat." << endl;
    }

    // Destructor
    ~Mobil() {
        cout << "Mobil " << merek << " telah dihapus." << endl;
    }

    // Method untuk menampilkan informasi
    void tampilkanInfo() {
        cout << "Merek: " << merek << " Harga: " << harga << endl;
    }
};

int main() {
    Mobil a1("Range Rover", 1000000000);
    a1.tampilkanInfo();

    return 0;
}
