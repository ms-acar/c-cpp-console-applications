#include <stdio.h>
#include <stdlib.h>

int test(int num) {
    while (num > 0) {
        if (num % 2 == 0) {
            printf("Num: %d\n", num);
            return test(num - 3);
        } else {
            printf("Num: %d\n", num);
            return test(--num);
        }
    }
    return num;
}

int main() {
    // İlk bölüm
    int i = 1, total = 0, cum_total = 0, j, num = 0;
    while (i < 10) {
        total = total + i;
        if (i % 3 == 0) {
            j = num++;
            for (; j < 5; j++) {
                if (j == 3)
                    break;
                cum_total += total;
            }
        }
        i = i + 2;
    }
    printf("Total = %d \n", total);
    printf("Cum_Total = %d \n", cum_total);
    printf("i = %d, num = %d, j = %d\n", i, num, j);

    // İkinci bölüm
    int num_input;
    printf("Sayi giriniz: ");
    scanf("%d", &num_input);
    int sonuc = test(num_input);
    printf("Sonuc: %d\n", sonuc);

    // Üçüncü bölüm
    int matris[3][4] = {{1, 2, 5, 4}, {1, 9, 0, 5}, {2, 5, 6, 10}};
    int gec, tut,k;
    gec = sizeof(matris) / sizeof(int);
    tut = sizeof(matris[0]) / sizeof(matris[0][0]);

    for (int i = 0; i < gec / tut; i++) {
        for (int j = 0; j < tut; j++) {
            if (matris[i][j] % 2 != 0)
                continue;
            else
                matris[i][j] = k++;
        }
    }

    for (int i = 0; i < gec / tut; i++) {
        for (int j = 0; j < tut; j++) {
            printf("%d\t", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}
