 #include <stdio.h>
#include <string.h>

#define MAX_KONTAK 10

typedef struct {
    char nama[100];
    char nomor[20];
} Kontak;

int main() {
    Kontak kontak[MAX_KONTAK];
    int jumlahKontak = 0;
    char pilihan;

    printf("Masukkan kontak (maksimal 10 kontak)\n");

    do {
        printf("\nMasukkan nama kontak ke - %d : ", jumlahKontak + 1);
        fgets(kontak[jumlahKontak].nama, sizeof(kontak[jumlahKontak].nama), stdin);
        kontak[jumlahKontak].nama[strcspn(kontak[jumlahKontak].nama, "\n")] = 0; // hapus newline

        printf("Masukkan nomor telepon kontak ke - %d : ", jumlahKontak + 1);
        fgets(kontak[jumlahKontak].nomor, sizeof(kontak[jumlahKontak].nomor), stdin);
        kontak[jumlahKontak].nomor[strcspn(kontak[jumlahKontak].nomor, "\n")] = 0;

        printf("Kontak berhasil ditambahkan\n");

        jumlahKontak++;

        if (jumlahKontak >= MAX_KONTAK) {
            break;
        }

        printf("Tambahkan kontak lagi? (y/n): ");
        scanf(" %c", &pilihan);
        getchar(); // bersihkan newline

    } while (pilihan == 'y' || pilihan == 'Y');

    printf("\nDaftar Kontak:\n");

    for (int i = 0; i < jumlahKontak; i++) {
        printf("Kontak ke - %d\n", i + 1);
        printf("Nama : %s\n", kontak[i].nama);
        printf("Nomor Telepon : %s\n", kontak[i].nomor);
        printf("--------------------------------------------------\n");
    }

    return 0;
}
