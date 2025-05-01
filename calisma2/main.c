#include <stdio.h>
#include <stdlib.h>


int main() {
    int matris[3][4] = {{1, 2, 5, 4}, {1, 9, 0, 5}, {2, 5, 6, 10}};
    int dizi[12] = {10, 2}; // Dizi tanýmlandý ama kullanýlmýyor.
    int i, j, k = 0; // k'nin baþlangýç deðeri 0 olarak ayarlandý.
    int egc = sizeof(matris) / sizeof(int);
    int tut = sizeof(matris[0]) / sizeof(int);

    // Matris elemanlarýný kontrol et ve tek sayýlarýn sayýsýný tut
    for (i = 0; i < egc; i++) {
        for (j = 0; j < tut; j++) {
            if (matris[i][j] % 2 == 0)
                continue; // Çift sayýlarý atla hesaba katma
            else
                k++; // Tek sayýlarý say
        }
    }

    // Matris elemanlarýný yazdýr
    for (i = 0; i < egc; i++) {
        for (j = 0; j < tut; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n"); // Yeni satýr
    }

    // Tek sayýlarýn sayýsýný yazdýr
    printf("Tek sayýlarýn sayýsý: %d\n", k);

    return 0;
}
