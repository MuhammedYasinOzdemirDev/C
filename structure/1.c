#include <stdio.h>
#include <math.h>
#define size 10
typedef float t;
int main()
{
    t aro = 0, st,dizi[size], var=0;
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%f",&dizi[i]);
        aro += dizi[i];
    }
    aro = aro / size;
    for (i = 0; i < size; i++)
    {
        var += pow((aro - dizi[i]), 2);
    }
    var = var / (size - 1);
    st = sqrt(var);
    printf("standart sapma:%.3f\n", st);
    printf("aritmetik ortalama:%.3f", aro);
    printf("varyans:%.3f", var);
    getchar();
    return 0;
}