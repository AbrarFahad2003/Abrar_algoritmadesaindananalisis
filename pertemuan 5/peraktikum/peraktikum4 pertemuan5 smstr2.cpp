#include <iostream>
#include <string>
using namespace std;

class hitung {
private:
    float a, b;

public:
    void setno1(float num1) {
        a = num1;
    }

    void setno2(float num2) {
        b = num2;
    }

    float tambah() {
        return a + b;
    }

    float kurang() {
        return a - b;
    }
};
