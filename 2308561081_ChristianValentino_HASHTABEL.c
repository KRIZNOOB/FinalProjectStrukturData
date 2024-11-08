// Nama  : Christian Valentino
// NIM   : 2308561081
// Kelas : C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void linearProbing(int n ,int lin[], int bil) {
    int i = 0;
    while(i < n) {
        int idx = (bil + i) % n;
        if(lin[idx] == -1) {
            lin[idx] = bil;
            break;
        }
        i++;
    }
}

void quadraticProbing(int n, int quad[n], int bil) {
    int i = 0;
    while (i < n) {
        int idx1 = (bil + i*i) % n;
        int idx2 = (bil - i*i) % n;
        if(quad[idx1] == -1) {
            quad[idx1] = bil;
            break;
        } else if(quad[idx2] == -1) {
            quad[idx2] = bil;
            break;
        }
        i++;
    }
}
int main() {
    int n;
    printf("Ketik Jumlah Bilangan : ");
    scanf("%d", &n);
    int bil[n], lin[n], quad[n];
    for(int i = 0; i < n; i++) {
        lin[i] = -1;
        quad[i] = -1;
    }
    for(int i = 0; i < n; i++) {
        printf("Bil- %d : ", i+1);
        scanf("%d", &bil[i]);
        linearProbing(n, lin, bil[i]);
        quadraticProbing(n, quad, bil[i]);
    }
    printf("\nLinear Probing\n");
    printf("=================\n");
    for(int i = 0; i < n; i++) {
        printf("Index %d : %d\n", i, lin[i]);
    }
    printf("\nQuadratic Probing\n");
    printf("====================\n");
    for(int i = 0; i < n; i++) {
        printf("Index %d : %d\n", i, quad[i]);
    }
    return 0;
}