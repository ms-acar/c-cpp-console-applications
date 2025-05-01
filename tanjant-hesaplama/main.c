#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    float alan;
    printf("kure hacim hesaplama icin yaricap girin: ");
    scanf("%d",&r);
    float pi = 3.14;
    alan = pi*r*r*r;
    printf("kure hacmi:%f",alan);
    return 0;
}
