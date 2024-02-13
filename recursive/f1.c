#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, a = 1, b = 1, c = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%3d", a);
        c = a + b;
        a = b;
        b = c;
    }
}