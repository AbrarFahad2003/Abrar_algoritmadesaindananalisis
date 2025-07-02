#include <iostream>
using namespace std;

int main() {
    int table[10];
    for (int i = 0; i < 10; i++) {
        table[i] = -1; 
    }

    int data[] = {12, 23, 34, 45};
    int n = 4;

    for (int i = 0; i < n; i++) {
        int index = data[i] % 10;
        if (table[index] == -1) {
            table[index] = data[i];
        } else {
            cout << data[i] << " di indeks " << index << endl;
        }
    }

    cout << "\nIsi Hashtable:\n";
    for (int i = 0; i < 10; i++) {
        cout << "[" << i << "] = ";
        if (table[i] != -1)
            cout << table[i] << endl;
        else
            cout << "kosong" << endl;
    }

    return 0;
}
