#include<stdio.h>
#include<stdlib.h>
int carp(int,int);
int main(){
   printf("%d",carp(11,8));
}
int carp(int a,int b ){
    static int r=0,i=0;
    if(i<a){
        r+=b;
        i++;
        carp(a,b);
    }
    else{
        return r;
    }
}