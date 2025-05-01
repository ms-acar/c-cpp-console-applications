#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n2, i, *isaretci, toplam = 0; // toplam'ý 0 ile baþlatýyoruz

    printf("ilk boyutu giriniz: ");
    scanf("%d", &n);

    isaretci = (int*)malloc(n * sizeof(int));

    printf("ayrilan ilk bellek adresleri:\n");
    for (i = 0; i < n; ++i) {
        printf("%pc\n",isaretci+1);

    }
    printf("ikinci boyutu giriniz: ");
    scanf("%d", &n2);
    printf("ayrilan ilk bellek adresleri:\n");
    for (i = 0; i < n2; ++i) {
        printf("%pc\n",isaretci+1);

    }

    isaretci = realloc(isaretci,n2*sizeof(int));
    if (isaretci == NULL) { // Burada = yerine == kullanmalýsýnýz
        printf("Bellek iþlemi baþarýsýz\n");
        exit(0);
    }

    printf("Toplanacak elemanlarý giriniz:\n");
    for (i = 0; i < n2; ++i) {
        printf("%d. elemaný giriniz: ", i + 1);
        scanf("%d", &isaretci[i]); // Burada [isaretci+1] yerine isaretci[i] kullanmalýsýnýz
        toplam += isaretci[i]; // Burada *(isaretci + i) yerine isaretci[i] kullanabilirsiniz
    }

    printf("Toplam = %d\n", toplam);
    free(isaretci);
    return 0;
}
