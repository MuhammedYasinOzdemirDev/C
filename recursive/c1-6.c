#include <stdio.h>
#include <stdlib.h>
// ekok
int ekok(int, int);
int main()
{
   printf("%d",ekok(7,6));
}
int ekok(int a, int b)
{
    static int temp = 1;
    if(temp%a==0 &&temp%b==0){
        return temp;
    }
    temp++;
    ekok(a,b);
}
