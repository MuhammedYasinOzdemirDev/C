#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 100

int main()
{
    srand(time(NULL));
    int z[6][6] = {0}, z1, z2, i, j;
    for (i = 0; i < size; i++)
    {
        z1 = rand() % 6;
        z2 = rand() % 6;
        z[z1][z2]++;
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("[%d ,%d]=%d\n", i + 1, j + 1, z[i][j] + 1);
        }
    }
    return 0;
}