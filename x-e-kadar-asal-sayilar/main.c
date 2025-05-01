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
        int asalMi = 1; // Asall�k kontrol�
        int j = 2;

        while (j <= i / 2) {
            if (i % j == 0) {
                asalMi = 0; // Asal de�il
                break;       // B�l�nebilir bir say� bulduk
            }
            j++;
        }

        if (!asalMi) {
            i++;       // Bir sonraki say�ya ge�
            continue;  // Asal de�ilse d�ng�n�n ba��na d�n
        }

        // Asal ise yazd�r
        printf("%d\n", i);
        i++;
    }
    return 0;
}
