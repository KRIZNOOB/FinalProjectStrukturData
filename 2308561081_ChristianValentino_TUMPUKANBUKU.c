// NAMA  : CHRISTIAN VALENTINO
// NIM   : 2308561081
// KELAS : C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char judul[100];
    int halaman;
    char penerbit[100];
} buku;

int main() {
    system("cls");
    int maks;
    char konfirmasi = 'T';
    int top = -1;
    int pilihan;

    printf("Program tumpukan buku :\n");
    printf("Ketik jumlah maksimum tumpukan : ");
    scanf("%d", &maks);
    getchar();

    buku tumpukan[maks];

    do {
        printf("\nMenu : \n");
        printf("1. Tambah Buku \n");
        printf("2. Ambil Buku \n");
        printf("3. Keluar \n");
        printf("Pilihan : ");
        scanf("%d", &pilihan);
        getchar();

        switch (pilihan) {
            case 1:
                if (top < maks - 1) {
                    top++;
                    printf("\nKetik Judul Buku : ");
                    fgets(tumpukan[top].judul, sizeof(tumpukan[top].judul), stdin);
                    tumpukan[top].judul[strcspn(tumpukan[top].judul, "\n")] = 0;
                    printf("Jumlah Halaman : ");
                    scanf("%d", &tumpukan[top].halaman);
                    getchar();
                    printf("Penerbit : ");
                    fgets(tumpukan[top].penerbit, sizeof(tumpukan[top].penerbit), stdin);
                    tumpukan[top].penerbit[strcspn(tumpukan[top].penerbit, "\n")] = 0;
                } else {
                    printf("\nTumpukan penuh\n");
                }
                break;

            case 2:
                if (top > -1) {
                    printf("\nAnda yakin (Y/T) : ");
                    scanf(" %c", &konfirmasi);
                    getchar();
                    if (konfirmasi == 'Y') {
                        printf("\nBuku dengan judul %s sudah diambil.", tumpukan[top].judul);
                        printf("\n");
                        top--;
                    }
                } else {
                    printf("\nTumpukan kosong\n");
                }
                break;

            case 3:
                printf("\nAnda yakin (Y/T) : ");
                scanf(" %c", &konfirmasi);
                getchar();
                if(konfirmasi == 'Y'){
                    printf("Terimakasih");
                }
                break;

            default:
                printf("\nPilihan tidak tersedia\n");
                break;
        }
    } while (!(pilihan == 3 && konfirmasi == 'Y' ));

    return 0;
}
