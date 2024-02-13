#include <stdio.h>
#include <stdlib.h>
float babil(float, float);
int main()
{
    float s=5, t=8;
    printf("%f", babil(s,t));
}
float babil(float s, float t)
{
    float h;
    do
    {
        t = (t + (s / t)) / 2;
        h = t * t * -s;
    } while (h > 0.000002);
    if (t < 0)
    {
        t *= -1;
    }
    return t;
}
