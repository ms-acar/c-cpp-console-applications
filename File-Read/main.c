#include <stdio.h>

int main() {
    FILE *dosya;
    int dizi[8];
    int hedef;
    int i, j, toplam;
    int bulundu = 0;

    dosya = fopen("veri.txt", "r");

    for (i = 0; i < 8; i++) {
        fscanf(dosya, "%d", &dizi[i]);
        printf("%d",dizi[i]);
    }
    printf("\n");

    scanf("%d", &hedef);


    for (i = 0; i < 8; i++) {
        toplam = 0;
        for (j = i; j < 8; j++) {
            toplam += dizi[j];
            if (toplam == hedef) {
                printf("Toplam %d, dizi[%d] ile dizi[%d] arasinda bulundu.\n", hedef, i+1, j+1);
                bulundu = 1;
            }
        }
    }

    if (!bulundu) {
        printf("Hedef toplam bulunamadi.\n");
    }

    return 0;
}
