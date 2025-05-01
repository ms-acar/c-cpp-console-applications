#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ltfiyat,km,ucret,kmbasi;
    printf("guncel litre fiyati girin =");
    scanf("%f",&ltfiyat);
    printf("katedilen km girin =");
    scanf("%f",&km);
    kmbasi = km / 20;
    ucret = kmbasi*ltfiyat;
    printf("Akaryakit icin odenmesi gereken = %f",ucret);

    return 0;
}
