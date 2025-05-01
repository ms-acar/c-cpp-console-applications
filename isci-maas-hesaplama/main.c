#include <stdio.h>
#include <stdlib.h>

float hesapla_gelir(float U, float S) {
    const int normal_saat = 40;
    float fazla_mesai_ucreti = U * 1.5;
    float toplam_gelir;

    if (S <= normal_saat) {
        toplam_gelir = U * S;
    } else {
        float normal_gelir = U * normal_saat;
        float fazla_mesai_saat = S - normal_saat;
        toplam_gelir = normal_gelir + (fazla_mesai_ucreti * fazla_mesai_saat);
    }

    return toplam_gelir;
}

int main() {
    float U, S, gelir;

    printf("Saatlik ucret girin: ");
    scanf("%f", &U);

    printf("Toplam çalisma saati girin: ");
    scanf("%f", &S);

    gelir = hesapla_gelir(U, S);

    printf("iscinin kazanacagi toplam gelir: %.2f lira\n", gelir);

    return 0;
}
