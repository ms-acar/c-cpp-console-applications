#include <stdio.h>
#include <stdlib.h>
#define maxyas2 100

int main()
{
    int yas[maxyas2];
    int n;


    printf("eleman sayisini girin (%d'e kadar): ",maxyas2);
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++ ){
        printf ("eleman %d: ",i + 1);
        scanf("%d", &yas[i]);
    }
    int length = sizeof(yas) / sizeof(yas[0]);

    int minyas = yas[0];
    int maxyas = yas[0];

    for(int i = 1 ; i < n ; i++ ){
        if (minyas>yas[i]){
            minyas = yas[i];
        }
        if (maxyas<yas[i]){
            maxyas = yas[i];
        }
    }
    printf("dizideki minimum yas : %d\n",minyas );
    printf("dizideki maximum yas : %d\n",maxyas );


    return 0;
}
