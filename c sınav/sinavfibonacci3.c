#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=1,b=1,c=0,i,s;
    printf("--------------fibonocci----------------\n\n");
    printf("kaca kadarsa giriniz:");
    scanf("%d",&s);
    for(i=0;i<s;i++){
        printf("%d  ",a);
        c=a+b;
        a=b;
        b=c;
    }
    getchar();
    return 0;
}