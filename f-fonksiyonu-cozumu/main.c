#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f_hesapla(int n,float x[],float y[])
{
  float f=0;
  for(int i=0;i<n;i++)
  {
   f +=fabs(x[i]-y[i]);
  }
  return f;
}

float m_hesapla(int n,float x[])
{
  float m=0,t=0;
  for(int i=0;i<n;i++)
  {
   t=t+x[i];
  }
  m=t/n;
  return m;
}

float k_hesapla(int n,float y[])
{
  float k=0,t=0;
  for(int i=0;i<n;i++)
  {
   t=t+y[i];
  }
  k=t/n;
  return k;
}

int main()
{
 int n;
 float x[n]; float y[n];
 printf("eleman sayisini girin: ");
 scanf("%d",&n);
 float m,k,f,d;
 float xx[n];
 float yy[n];
 for(int i=0;i<n;i++){
    printf("eleman girin (x icin) ");
    scanf("%f",&x[i]);
    printf("eleman girin (y icin) ");
    scanf("%f",&y[i]);
 }
 f=f+f_hesapla(n,xx,yy);
 m=m+m_hesapla(n, xx);
 k=k+k_hesapla(n, yy);
 d = f*m-n;

 printf("sonuc = %f",d);

 return 0;
}



