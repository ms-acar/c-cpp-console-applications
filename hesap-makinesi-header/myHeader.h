/*#ifndef MYHEADER_H_INCLUDED
#define MYHEADER_H_INCLUDED



#endif // MYHEADER_H_INCLUDED
int toplama (int a, int b)
{
    return a + b;
}
int carpma (int a, int b)
{
    return a * b;
}*/
void hesapmak(int a,char islem,int b)
{
    float sonuc;
    switch(islem)
    {
             case '+':
       sonuc = a + b;
       break;
              case '-':
       sonuc = a - b;
       break;
              case '*':
       sonuc = a * b;
       break;
              case '/':
       sonuc = a / b;
       break;
              default:
                printf("gecerli islem giriniz.");
    }
    printf("islem sonucu = %.2f",sonuc);
}
void hesapmak2(char input[4], double sayi)
{
    double result;

    if (strcmp(input, "log") == 0) {
        if (sayi <= 0) {
            printf("Hata: Logaritma sadece pozitif degerler icin tanimlidir!\n");
            return;
        }
        result = log(sayi);
        printf("log(%.2lf) = %.2lf\n", sayi, result);
    } else if (strcmp(input, "sin") == 0) {
        result = sin(sayi);
        printf("sin(%.2lf) = %.2lf\n", sayi, result);
    } else if (strcmp(input, "cos") == 0) {
        result = cos(sayi);
        printf("cos(%.2lf) = %.2lf\n", sayi, result);
    } else if (strcmp(input, "tan") == 0) {
        result = tan(sayi);
        printf("tan(%.2lf) = %.2lf\n", sayi, result);
    } else if (strcmp(input, "abs") == 0) {
        result = fabs(sayi);
        printf("|%.2lf| = %.2lf\n", sayi, result);
    } else {
        printf("Gecersiz komut!\n");
    }
}
