#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10
int main()
{
    int i, dizi[size], bas = 0, bit = size, orta, temp, aranan, j;
    srand(time(NULL));
    for (i = 0; i < size; i++)
    {
        dizi[i] = rand() % 10;
        printf("%d  ", dizi[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (dizi[i] > dizi[j])
            {
                temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
        }
    }
    printf("\n\n");
    for (i = 0; i < size; i++)

    {
        printf("%d  ", dizi[i]);
    }
    printf("\n\naranan degeri giriniz:");
    scanf("%d", &aranan);
    while (bas < bit)
    {
        orta = (bas + bit) / 2;
        if (dizi[orta] > aranan)
        {
            bit = orta - 1;
        }
        else if (dizi[orta] < aranan)
        {
            bas = orta + 1;
        }
        else
        {
            printf("aranan deger %d indiste", orta);
            break;
        }
    }
    if (bas == bit)
    {
        printf("aranan bulunamdi");
    }
    getchar();
    return 0;
}