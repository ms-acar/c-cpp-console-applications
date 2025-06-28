#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bilgi {
    char ad[10];
    char soyad[15];
    int kimlik;
};

int main() {
    int n;
    printf("Kiþi sayýsý giriniz: ");
    scanf("%d", &n);

    struct bilgi kisiler[n]; // her kiþi için struct dizisi

    for (int i = 0; i < n; i++) {
        char ad[10];
        char soyad[15];
        int kimlik;

        printf("\nKiþi %d:\n", i + 1);
        printf("Ad: ");
        scanf("%s", ad);
        printf("Soyad: ");
        scanf("%s", soyad);
        printf("Kimlik: ");
        scanf("%d", &kimlik);

        strcpy(kisiler[i].ad, ad);
        strcpy(kisiler[i].soyad, soyad);
        kisiler[i].kimlik = kimlik;
    }

    printf("\n--- Kayýtlý Kiþiler ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d. Kiþi: %s %s - Kimlik: %d\n", i + 1,
               kisiler[i].ad, kisiler[i].soyad, kisiler[i].kimlik);
    }

    return 0;
}
