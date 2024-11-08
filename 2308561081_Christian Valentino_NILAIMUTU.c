// NAMA  : CHRISTIAN VALENTINO
// NIM   : 2308561081
// KELAS : C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char Nama[30];
    char NIM[11];
    float Tugas, Kuis, UTS, UAS;
    float nilaiMutu;
}mahasiswa;

int main()
{
    system("cls");
    int n;

    printf("Nilai Mata Kuliah Komputer\n");
    printf("Ketik Jumlah Mahasiswa : ");
    scanf("%d", &n);
    getchar();

    mahasiswa mahasiswa[n];

    for(int i = 0; i < n ; i++)
    {
        printf("\nMahasiswa ke- %d\n", i + 1);
        printf("Nama : ");
        fgets(mahasiswa[i].Nama, sizeof(mahasiswa[i].Nama),stdin);
        mahasiswa[i].Nama[strcspn(mahasiswa[i].Nama, "\n")] = 0;
        printf("NIM : ");
        fgets(mahasiswa[i].NIM, sizeof(mahasiswa[i].NIM),stdin);
        mahasiswa[i].NIM[strcspn(mahasiswa[i].NIM, "\n")] = 0;
        printf("Tugas : ");
        scanf("%f", &mahasiswa[i].Tugas);
        printf("Kuis : ");
        scanf("%f", &mahasiswa[i].Kuis);
        printf("UTS : ");
        scanf("%f", &mahasiswa[i].UTS);
        printf("UAS : ");
        scanf("%f", &mahasiswa[i].UAS);
        getchar();
        mahasiswa[i].nilaiMutu = (mahasiswa[i].Tugas * 0.2)+(mahasiswa[i].Kuis * 0.2)+(mahasiswa[i].UTS * 0.3)+(mahasiswa[i].UAS * 0.3);
        printf("Nilai Total : %.2f\n", mahasiswa[i].nilaiMutu);
    }
    printf("\n");

    printf("Hasil : \n");
    for(int i = 0; i<n; i++)
    {
        printf("\nNama : %s \n", mahasiswa[i].Nama);
        printf("NIM : %s \n", mahasiswa[i].NIM);
        printf("Nilai Mutu : ");
        if(mahasiswa[i].nilaiMutu >= 80 && mahasiswa[i].nilaiMutu <= 100){
            printf("A \n");
        }
            else if(mahasiswa[i].nilaiMutu >= 65 && mahasiswa[i].nilaiMutu < 80){
            printf("B \n");
        }
            else if(mahasiswa[i].nilaiMutu >= 50 && mahasiswa[i].nilaiMutu < 65){
            printf("C \n");    
        }
            else if(mahasiswa[i].nilaiMutu >= 30 && mahasiswa[i].nilaiMutu < 50){
            printf("D \n");
        }
            else if(mahasiswa[i].nilaiMutu >= 0 && mahasiswa[i].nilaiMutu < 30){
            printf("E \n");
        }
    }
return 0;
}