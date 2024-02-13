#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int size = 30;
    srand(time(NULL));
    int i, j, dizi[size], c, a;
    a = size;
    for (i = 0; i < size; i++)
    {
        dizi[i] = rand() % 10;
        printf("%d  ", dizi[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (dizi[i] == dizi[j])
            {

                dizi[j] = -1;
            }
        }
    }
    printf("\n\n");
    for (i = 0; i < size; i++)
    {
        if (dizi[i] != -1)
        {
            printf("%d  ", dizi[i]);
        }
    }
    return 0;
}