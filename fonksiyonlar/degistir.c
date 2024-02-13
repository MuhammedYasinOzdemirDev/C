#include<stdio.h>
int degistir(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}