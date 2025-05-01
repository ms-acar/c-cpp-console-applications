#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Include math.h for the tan function
#ifndef M_PI
#define M_PI 3.14
#endif

int main() {
    int n;
    double u, alan;

    printf("Kenar sayisi girin: ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Bir cokgenin en az 3 kenari olmalidir.\n");
        return 1;
    }

    printf("Kenar uzunlugu girin: ");
    scanf("%lf", &u); // Use %lf for double

    // Removed duplicated check for n
    alan = (n * u * u) / (4 * tan(M_PI / n));
    printf("Cokgenin alani = %.2f\n", alan);

    return 0;
}
