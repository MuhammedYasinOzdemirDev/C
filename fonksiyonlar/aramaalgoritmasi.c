#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 20
void arama(int[]);
int siralama(int[]);
int main()
{
    srand(time(NULL));
    int bas, bit, dizi[size];
    for (bas = 0; bas < size; bas++)
    {
        dizi[bas] = rand() % 100;
        printf("%5d", dizi[bas]);
    }
    printf("\n\n");
    siralama(dizi);
     for (bas = 0; bas < size; bas++)
    {
        printf("%5d", dizi[bas]);
    }
    arama(dizi);
    return 0;
}
int siralama(int a[])
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void arama(int a[])
{
    int bas=0,bit=size,aranan,orta;
    printf("\naranan sayiyi girin:");
    scanf("%d",&aranan);
    while(bas<bit){
        orta=(bas+bit)/2;
        if(a[orta]>aranan){
            bit=orta-1;
        }
        else if(a[orta]<aranan){
            bas=orta+1;
        }
        else{
            printf("aranan deger dizinin %d elemanında",orta+1);break;
        }
    }
    if(bas==bit){
        printf("aranan bulanamdi.");
    }


}