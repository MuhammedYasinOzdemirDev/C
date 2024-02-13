#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define a 5
#define b 4
int main()
{
 
    int i, j, dizi[a][b], toplam[b] = {0};
    srand(time(NULL));
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            dizi[i][j] = rand() % 10;
            printf("%d  ", dizi[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            toplam[j]+=dizi[i][j];
        }
    }
    for(j=0;j<b;j++){
        printf("%d. sutun toplam:%d\n",j+1,toplam[j]);
    }
    getchar();
    return 0;
}