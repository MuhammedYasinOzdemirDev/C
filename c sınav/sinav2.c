#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,sayi,toplam,s,a,b,c,d;
    toplam=0;
    for(i=100;i<1000;i++){
       a=i/100;
       b=i/10;
       b=b%10;
       c=i%10;
        if(a!=b && b!=c&& a!=c){
            printf("%d. sayi:%d\n",d+1,i); }
            d++;
    }

getchar();
return 0;
}