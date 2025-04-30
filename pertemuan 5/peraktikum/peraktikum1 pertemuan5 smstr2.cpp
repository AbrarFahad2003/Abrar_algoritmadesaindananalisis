#include <iostream>
using namespace std;

class Kalkulator {
public:
    float a, b;

    Kalkulator(float x, float y) {
        a = x;
        b = y;
    }

    float tambah() { return a + b; }
    float kurang() { return a - b; }
    float kali() { return a * b; }
    float bagi() {
        if (b == 0) {
            cout << "ERROR! Pembagian dengan nol tidak bisa.\n";
            return 0;
        } else {
            return a / b;
        }
    }
};
