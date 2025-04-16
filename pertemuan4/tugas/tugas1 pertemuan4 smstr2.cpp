#include <iostream>
using namespace std;

class Contoh {
	private:
		int nilai; // Variabel private

	public: 
		// Constructor: dipanggil saat objek dibuat
		Contoh(int n) {
			nilai = n; 
			cout << "Constructor dipanggil!" << endl;
		}

		// Destructor: dipanggil saat objek dihancurkan
		~Contoh() {
			cout << "Destructor dipanggil!" << endl;
		}

		// Method untuk mengambil nilai
		int ambilNilai() {
			return nilai; 
		}
};

int main() {
	Contoh obj(20); // Membuat objek
	cout << "Nilai yang dimasukkan: " << obj.ambilNilai() << endl;
    return 0;
}
