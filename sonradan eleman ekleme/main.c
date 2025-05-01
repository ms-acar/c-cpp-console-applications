#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eklenecek_indeks,eklenecek_eleman;
    int dizi[]={1,2,3,4,5,6,7,8,9};
    int length = sizeof(dizi)/sizeof(dizi[0]);

    for(int i = 0;i<length;i++){
        printf("%d\t",dizi[i]);
    }
    printf("\neklenecek elemani giriniz: ");
    scanf("%d",&eklenecek_eleman);
    printf("eklenecek elemanin indeksini giriniz: ");
    scanf("%d",&eklenecek_indeks);
    for(int indeks = length - 1; indeks > eklenecek_indeks; indeks--){
        dizi[indeks]=dizi[indeks-1];
    }
    dizi[eklenecek_indeks]=eklenecek_eleman;
    for(int indeks = 0;indeks<length;indeks++){
        printf("%d\t",dizi[indeks]);
    }
    return 0;
}
