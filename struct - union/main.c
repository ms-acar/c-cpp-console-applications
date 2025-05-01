#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct personelBilgisi {int yas; float maas;char isim[30];char cinsiyet[8]};
union arac {int lastik; float yakit; char marka[30]};

int main()
{
  struct personelBilgisi personel1;

  personel1.yas=34;
  personel1.maas=30000.0;

  strcpy(personel1.isim,"Ahmet Celik"); //strcpy kullanýlmazsa hatalý olur.
  strcpy(personel1.cinsiyet, "erkek"); //struct tarafýndan ayrýlan alana kopyalanýr.


  printf("personel adi : %s\n",personel1.isim);
  printf("personel cinsiyeti : %s\n",personel1.cinsiyet);
  printf("personel yasi : %d\n",personel1.yas);
  printf("personel maasi: %lf\n",personel1.maas);

  union arac arac1;

  arac1.lastik = 195;
  arac1.yakit = 8.7;
  strcpy(arac1.marka, "Mercedes-Benz");

    printf("arac ne kadar yakýyor = %fL\n",arac1.yakit);
    printf("aracýn lastik ebatý = %d\n",arac1.lastik);

      printf("aracýn markasý = %s\n",arac1.marka);

  return 0;
}
