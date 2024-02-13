#include <stdio.h>
//merhaba
//!merhaba
//?merhaba
//
#include <string.h>
#include <stdlib.h>
#define size 50
int main()
{
    char metin[size];
    printf("bilgiyi giriniz:");
    gets(metin);
    printf("bilgi:");
    puts(metin);
    getchar();
    getchar();
    return 0;
}