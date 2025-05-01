#include <stdio.h>
#include <stdlib.h>

int main()
{
    int topdk;
    int sa, dk;
    const int tumsaat = 60;
    printf("dakika girin: ");
    scanf("%d",&topdk);

    sa = topdk / tumsaat;
    dk = topdk % tumsaat;

    printf("%d saat, %d dakika.",sa,dk);

    return 0;
}
