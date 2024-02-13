#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 50
int main()
{
    char m1[size], m2[size];
    strcpy(m2,"yasin");
    strcpy(m1,"yasin");
    if (strcmp(m1,m2))
    {
        printf("esittir");
    }
    else
    {
        printf("farklidir");
        return 0;
    }
}