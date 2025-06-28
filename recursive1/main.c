#include <stdio.h>
#include <stdlib.h>
void printArr(int a[],int boyut,int index)
{
    if(index ==boyut){
        return;
    }
    printf("%d\t",a[index]);
    printArr(a,boyut,index+1);
}
void main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    printArr(arr,8,0);
}
