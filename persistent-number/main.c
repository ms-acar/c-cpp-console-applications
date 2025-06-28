#include <stdio.h>
#include <stdlib.h>


void main()
{
    int sayi[20];
    printf("enter a number");
    scanf("%s",sayi);
    printf("%s",sayi);
    while(strlen(sayi)>1){
        int carpim = 1;
        for(int i =0;sayi[i]!='\0';i++){
            carpim *=sayi[i];
        }
        printf("%d",carpim);
        sprintf(sayi,"%d",carpim);
    }
    printf("persistent sayi sonucu: ",sayi);
}
