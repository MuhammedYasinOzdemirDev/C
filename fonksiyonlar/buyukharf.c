#include <stdio.h>
char buyuk(char);
int main()
{
    char harf;
    printf("harf giriniz:");
    scanf("%c",&harf);
    printf("%c ", buyuk(harf));
}
char buyuk(char a)
{
    if (a >= 'a' && a <= 'z')
    {
        return a - 32;
    }
    else
    {
        return a;
    }
}