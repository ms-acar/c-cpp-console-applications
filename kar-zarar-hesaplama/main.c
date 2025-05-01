#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float mal,sat;
printf("urun maliyetini giriniz : ");
scanf("%f",&mal);
printf("urun satis bedelini giriniz : ");
scanf("%f",&sat);

if (sat>mal){
    printf("kar miktari = -%.2fTL",mal-sat);
}else if(mal>sat){
    printf("zarar miktari = +%.2fTL",fabs(sat-mal));
}else{
    printf("kar yada zarar edilmemiþtir (0)");

}
    return 0;
}
