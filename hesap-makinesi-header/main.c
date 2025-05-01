#include <stdio.h>
#include <stdlib.h>
#include "myHeader.h"
#include <math.h>
#include <string.h>
int main()
{
    int a,b,durum;
    double sayi;
    char input[4];
    char islem;
    printf ("1)[sayi] [islem(+,-,*,/)] [sayi] formatini kullaniniz.\n2)[islem (log,sin,cos,tan,abs)] [sayi] formatini kullaniniz.\n");
    printf("seciminiz : ");
    scanf("%d",&durum);
        if(durum == 1){
            scanf("%d%c%d",&a,&islem,&b);
            hesapmak(a,islem,b);
        }else if(durum == 2){
                scanf("%3s%lf", input,&sayi);
                hesapmak2(input,sayi);
        }else{
            printf("lutfen gecerli islem giriniz");
        }
    return 0;
}
