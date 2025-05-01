#include <stdio.h>
#include <stdlib.h>


int main() {
    int matris[3][4] = {{1, 2, 5, 4}, {1, 9, 0, 5}, {2, 5, 6, 10}};
    int dizi[12] = {10, 2}; // Dizi tan�mland� ama kullan�lm�yor.
    int i, j, k = 0; // k'nin ba�lang�� de�eri 0 olarak ayarland�.
    int egc = sizeof(matris) / sizeof(int);
    int tut = sizeof(matris[0]) / sizeof(int);

    // Matris elemanlar�n� kontrol et ve tek say�lar�n say�s�n� tut
    for (i = 0; i < egc; i++) {
        for (j = 0; j < tut; j++) {
            if (matris[i][j] % 2 == 0)
                continue; // �ift say�lar� atla hesaba katma
            else
                k++; // Tek say�lar� say
        }
    }

    // Matris elemanlar�n� yazd�r
    for (i = 0; i < egc; i++) {
        for (j = 0; j < tut; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n"); // Yeni sat�r
    }

    // Tek say�lar�n say�s�n� yazd�r
    printf("Tek say�lar�n say�s�: %d\n", k);

    return 0;
}
