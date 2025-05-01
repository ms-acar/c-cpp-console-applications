#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,average;
    int sayi,birler,onlar;
    printf("4 adet sayi giriniz:\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    average = (a+b+c+d)/4;
    printf("Aritmetik ortalama = %f\n",average);
    printf("iki basamakli bir sayi giriniz:\t");
    scanf("%d",sayi);
    birler = sayi % 10;
    onlar = (sayi % 100)/10;
    printf("Onlar basamagi = %d,Birler basamagi = %d.",onlar,birler);
    return 0;
}
