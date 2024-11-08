// NAMA  : CHRISTIAN VALENTINO
// NIM   : 2308561081
// KELAS : C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char Nama[20];
    int beratBadan;
    int tinggiBadan;
} pasien;

int main() {
    system("cls");
    int n;
    int beratTerendah = 999;
    int tinggiTerendah = 999;
    int indexBeratTerendah = 0; 
    int indexTinggiTerendah = 0; 

    printf("Ketik Jumlah Pasien : ");
    scanf("%d", &n);
    getchar(); 

    pasien pasien[n];

    for (int i = 0; i < n; i++) {
        printf("\nData %d\n", i + 1);
        printf("Nama : ");
        fgets(pasien[i].Nama, sizeof(pasien[i].Nama), stdin);
        strtok(pasien[i].Nama, "\n");
        printf("Berat Badan : ");
        scanf("%d", &pasien[i].beratBadan);
        printf("Tinggi Badan : ");
        scanf("%d", &pasien[i].tinggiBadan);
        getchar(); 

        if (pasien[i].beratBadan < beratTerendah) {
            beratTerendah = pasien[i].beratBadan;
            indexBeratTerendah = i; 
        }
        if (pasien[i].tinggiBadan < tinggiTerendah) {
            tinggiTerendah = pasien[i].tinggiBadan;
            indexTinggiTerendah = i; 
        }
    }

    printf("\nBerat Terendah : %d (%s)\n", beratTerendah, pasien[indexBeratTerendah].Nama);
    printf("Tinggi Terendah : %d (%s)\n", tinggiTerendah, pasien[indexTinggiTerendah].Nama);

    return 0;
}