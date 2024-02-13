#include<stdio.h>
#include<stdlib.h>
int fibonocci(int a){
    if(a==1 || a==0){
        return 1;
    }
    else{
        return fibonocci(a-2)+fibonocci(a-1);
    }
}
int main(){
    int i;
    for(i=0;i<20;i++){
        printf("%8d",fibonocci(i));
    }
    return 0;
}