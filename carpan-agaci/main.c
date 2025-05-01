#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
printf("sayiyi giriniz : ");
scanf("%d",&num);

for(int i = 1;i<=num;i++){


    printf("%d x %d = %d\n",num,i,(num*i));

  }
    return 0;
}
