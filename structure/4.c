#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10
int main()
{
    srand(time(NULL));
    int i, j, dizi[size], temp, index;
    for (i = 0; i < size; i++)
    {
        dizi[i] = rand() % 10;
        printf("%d  ", dizi[i]);
    }

    for (i = 0; i < size; i++)
    {
        index = i;
        for (j = i + 1; j < size; j++)
        {
            if (dizi[index] > dizi[j])
            {
                index = j;
            }
        }
        temp = dizi[i];
        dizi[i] = dizi[index];
        dizi[index] = temp;
    }
    printf("\n\n");
    for (i = 0; i < size; i++)
    {
        printf("%d  ", dizi[i]);
    }
    return 0;
}
