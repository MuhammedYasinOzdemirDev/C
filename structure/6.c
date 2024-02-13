#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 15
int main()
{
    srand(time(NULL));
    int i, dizi[size], aranan;
    for (i = 0; i < size; i++)
    {
        dizi[i] = rand() % 10;
        printf("%d   ", dizi[i]);
    }
    printf("aranan sayi giriniz");
    scanf("%d", &aranan);
    for (i = 0; i < size; i++)
    {
        if (dizi[i] == aranan)
        {
            printf("aranan sayi dizinin %d elemaninada", i + 1);
            break;
        }
    }
    return 0;
}