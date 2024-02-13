#include<stdio.h>
#include<stdlib.h>
int pr(int );
int main(){
    pr(10);
}
int pr(int a){
    if(a<0){
        putchar('-');
        a=-a;
    }
    if(a/10){
        pr(a/10);
        putchar(a%10 +'0');


    }
}