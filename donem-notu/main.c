#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float vize,finall,toplam=0,ortalama=0;
    scanf("%f",&vize);scanf("%f",&finall);
    toplam = vize + finall ; ortalama = toplam/2;
    if(ortalama<=100&&ortalama>0){
        if (ortalama < 50){
            printf("not ortalamasi = %f, ve harf notu : DD",ortalama);
        }else  if (ortalama <65 && ortalama >= 50){
            printf("not ortalamasi = %f, ve harf notu : BB",ortalama);
        }else if (ortalama <85 && ortalama >= 65){
            printf("not ortalamasi = %f, ve harf notu : CC",ortalama);
        }else if (ortalama <100 && ortalama >= 85){
            printf("not ortalamasi = %f, ve harf notu : AA",ortalama);
        }else{
            printf("dersten kaldiniz");
        }
    }else{
        printf("gecerli bir not giriniz");

    }


    return 0;
}
