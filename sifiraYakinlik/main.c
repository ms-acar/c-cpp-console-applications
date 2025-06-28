#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int dizi[] = {-3,-2,-1,1,4,2,7,8};
    int enkucuk=dizi[0];
    int boyut = sizeof(dizi)/sizeof(dizi[0]);
    for(int i = 1; i<boyut; i++){
        if(abs(dizi[i]) < abs(enkucuk)){
           enkucuk = dizi[i];
        } else if (abs(dizi[i]) == abs(enkucuk) && dizi[i] > enkucuk) {
            enkucuk = dizi[i];
        }
    }
    printf("%d",enkucuk);
    return 0;
}
