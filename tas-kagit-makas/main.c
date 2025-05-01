#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
/*void rastgele(int *rast1, int *rast2)
{
     srand(time(NULL));
     rast1 = (rand()%3)+1;//1,2,3 1-tas, 2-kagit, 3-makas
     rast2 = (rand()%3)+1;
}
void kontrol(int *rastgeleDizi[])
{
     if((rastgeleDizi[0]== 1 && rastgeleDizi[1]== 3)||
        (rastgeleDizi[0]== 2 && rastgeleDizi[1]== 1)||
        (rastgeleDizi[0]== 3 && rastgeleDizi[1]== 2) )
        {
            printf("oyuncu 1 kazandi");
        }else {
            printf("oyuncu 2 kazandi");
        }
}
void main()
{
    int rast1,rast2;
    rastgele(&rast1,&rast2);
    int rastgeleDizi[2] = {rast1,rast2};
    kontrol(&rastgeleDizi);
}*/


void rastgele(int *rast1, int *rast2) {
    // Rastgele sayý üreteci için baþlangýç deðeri
    srand(time(NULL));

    // Pointer ile gösterilen adreslere rastgele deðer atama
    *rast1 = (rand() % 3) + 1; // 1, 2, 3
    *rast2 = (rand() % 3) + 1;
}

/*bool durum(int rastgeleDizi[])
{
    bool durum;
        if ((rastgeleDizi[0] == 1 && rastgeleDizi[1] == 3) ||
        (rastgeleDizi[0] == 2 && rastgeleDizi[1] == 1) ||
        (rastgeleDizi[0] == 3 && rastgeleDizi[1] == 2))
        {
            durum = true;
        }else{
            durum = false;
        }
        return &durum;
}
void kontrol(int rastgeleDizi[]) {
    // Kazananý kontrol etme
    if ((rastgeleDizi[0] == 1 && rastgeleDizi[1] == 3) ||
        (rastgeleDizi[0] == 2 && rastgeleDizi[1] == 1) ||
        (rastgeleDizi[0] == 3 && rastgeleDizi[1] == 2)) {
        printf("Oyuncu 1 kazandi\n");
        if(rastgeleDizi[0] == 1){
            printf("tas - makas");

        }else if(rastgeleDizi[0] == 2){
            printf("kagit - tas");

        }else{
            printf("makas - kagit");

        }
    } else if((rastgeleDizi[0] == 1 && rastgeleDizi[1] == 2) ||
        (rastgeleDizi[0] == 2 && rastgeleDizi[1] == 3) ||
        (rastgeleDizi[0] == 3 && rastgeleDizi[1] == 1)){
        printf("Oyuncu 2 kazandi\n");
                if(rastgeleDizi[0] == 1){
            printf("tas - kagit");

        }else if(rastgeleDizi[0] == 2){
            printf("kagit - makas");

        }else{
            printf("makas - tas");

        }
    }
*/


void kontrol(int rastgeleDizi[]) {

    if ((rastgeleDizi[0] == 1 && rastgeleDizi[1] == 3) ||
        (rastgeleDizi[0] == 2 && rastgeleDizi[1] == 1) ||
        (rastgeleDizi[0] == 3 && rastgeleDizi[1] == 2)) {
        printf("Oyuncu 1 kazandi!\n");
        if (rastgeleDizi[0] == 1) {
            printf("Tas - Makas\n");
        } else if (rastgeleDizi[0] == 2) {
            printf("Kagit - Tas\n");
        } else {
            printf("Makas - Kagit\n");
        }
    } else if ((rastgeleDizi[0] == 1 && rastgeleDizi[1] == 2) ||
               (rastgeleDizi[0] == 2 && rastgeleDizi[1] == 3) ||
               (rastgeleDizi[0] == 3 && rastgeleDizi[1] == 1)) {
        printf("Oyuncu 2 kazandi!\n");
        if (rastgeleDizi[1] == 1) {
            printf("Tas - Kagit\n");
        } else if (rastgeleDizi[1] == 2) {
            printf("Kagit - Makas\n");
        } else {
            printf("Makas - Tas\n");
        }
    } else {
        printf("Berabere!\n");
    }
}

int main() {
    int rast1, rast2;
    /*int devam;
    scanf("%d",&devam);
    do{*/
    rastgele(&rast1, &rast2);

    int rastgeleDizi[2] = {rast1, rast2};
    kontrol(rastgeleDizi);
    /*printf("devam etmek icin 1 e basiniz");
    }while(devam == 1);*/

    return 0;
}

