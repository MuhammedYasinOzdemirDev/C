#include <stdio.h>
#include <stdio.h>
#include <string.h>
#define size 50
typedef int t;
typedef float f;
struct araba
{
    t teker, vites, yil, beygir, i;
    f motor;
    char marka[size], model[];

} a;
int main()
{
    printf("araba markasini giriniz:");
    gets(a.marka);
    printf("araba modelini giriniz:");
    gets(a.model);
    printf("araba yil giriniz:");
    scanf("%d", &a.yil);
    printf("araba vites sayisini giriniz:");
    scanf("%d", &a.vites);
    printf("araba teker sayisini giriniz:");
    scanf("%d", &a.teker);
    printf("araba beygir giriniz:");
    scanf("%f", &a.motor);
    printf("marka:");
    printf(a.marka);
    printf("\nmodel:");
    printf(a.model);
    printf("yil:%d\n",a.yil);
    printf("vites:%d\n",a.vites);
    printf("teker:%d\n",a.teker);
    printf("beygir:%f",a.motor);
    getchar();
    return 0;
}
