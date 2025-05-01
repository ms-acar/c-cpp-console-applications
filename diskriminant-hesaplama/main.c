#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 float a,b,c,toplam,kok1,kok2,delta,imajiner;
 float esit =-b/(2*a);
 printf("[ax2 + bx + c] seklindeki ifadenin sirasiyla a, b ve c degerlerini giriniz : ");
 scanf("%f%f%f",&a,&b,&c);

 delta = (b*b)-4*a*c;

 kok1 = (-b+sqrt(delta))/(2*a);
 kok2 = (b+sqrt(delta))/(2*a);

 if(delta>0){

    printf("farkli iki adet reel kok bulunmaktadır : %.2f ve %.2f",kok1,kok2);

 }else if(delta == 0){

    printf("birbirine esit iki kok bulunmaktadir : %.2f",esit);

 } else if (delta < 0) {
        imajiner = sqrt(-delta) / (2 * a);

        if (esit == 0) {

            printf("Farkli iki adet saf imajiner kok bulunmaktadır : +(%.1f)i ve -(%.1f)i\n", imajiner, imajiner);
        } else {

            printf("Farkli iki adet imajiner kok bulunmaktadır : %.2f + (%.1f)i ve %.2f - (%.1f)i\n", esit, imajiner, esit, imajiner);
        }
    }

 return 0;
}
