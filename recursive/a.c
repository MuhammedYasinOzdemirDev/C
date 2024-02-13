#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int sayi=153,a,r,n=0,t=0;
    a=sayi;
    while(sayi!=0){
     sayi/=10;
     n++;
    }
    sayi=a;
    while (a!=0)
    {
       r=a%10;
       t+=pow(r,n);
       a/=10;
    }
    if(sayi==t){
    printf("arm");
    }
    else{
        printf("degil");
    }

    
}