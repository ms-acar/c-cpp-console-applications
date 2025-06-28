#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int kontrol (int sayi)
{
    int rakamlar[2];
    int sonuc;
    bool durum;
    for(int i = 2; i >=0;i--){
        rakamlar[i] = sayi%10;
        sayi /= 10;
    }
    for(int i = 0;i <3; i++){
        sonuc = pow(rakamlar[i],3);
        sonuc +=sonuc;
    }
    if(sonuc == sayi){
        durum = true;
    }else{
        durum = false;
    }
     return durum;
}
void main()
{
    int sayi;
    printf("3 basamakli bir sayi giriniz");
    scanf("%d",&sayi);

    int durum = kontrol (sayi);
    if (durum == 1){
        printf("girdiginiz sayi bir narsist sayi ornegidir.\n");
    }else{
        printf("girdiginiz sayi bir narsist sayi örneği değildir.\n");
    }
}
