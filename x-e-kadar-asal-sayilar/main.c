#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Sayi giriniz: ");
    scanf("%d", &n);

    printf("%d'e kadar asal sayilar:\n", n);
    int i = 2;
    while (i <= n) {
        int asalMi = 1; // Asallýk kontrolü
        int j = 2;

        while (j <= i / 2) {
            if (i % j == 0) {
                asalMi = 0; // Asal deðil
                break;       // Bölünebilir bir sayý bulduk
            }
            j++;
        }

        if (!asalMi) {
            i++;       // Bir sonraki sayýya geç
            continue;  // Asal deðilse döngünün baþýna dön
        }

        // Asal ise yazdýr
        printf("%d\n", i);
        i++;
    }
    return 0;
}
