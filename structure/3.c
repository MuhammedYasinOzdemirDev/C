#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 15

int main()
{
    srand(time(NULL));
    int i, j, dizi[size], temp;
    for (i = 0; i < size; i++)
    {
        dizi[i] = rand() % 10;
        printf("%d  ", dizi[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size - 1; j++)
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

    return 0;
}
