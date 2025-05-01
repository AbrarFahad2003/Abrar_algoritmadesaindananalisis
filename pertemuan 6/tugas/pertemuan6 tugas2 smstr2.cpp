#include <iostream>
using namespace std;

class Siswa {
public:
    string nama;
    int nilai;

    void input() {
        cout << "Nama: ";
        getline(cin, nama);
        cout << "Nilai: ";
        cin >> nilai;
        cin.ignore();
    }

    void tampil() {
        cout << nama << " - " << nilai << endl;
    }
};

void urutkan(Siswa s[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (s[j].nilai < s[j + 1].nilai)
                swap(s[j], s[j + 1]);
}

int main() {
    int n;
    cout << "Jumlah siswa: ";
    cin >> n;
    cin.ignore();

    Siswa s[n];
    for (int i = 0; i < n; i++) {
        cout << "\nData siswa ke-" << i + 1 << ":\n";
        s[i].input();
    }

    urutkan(s, n);

    cout << "\nData setelah diurutkan (nilai tertinggi dulu):\n";
    for (int i = 0; i < n; i++) {
        s[i].tampil();
    }

    return 0;
}

