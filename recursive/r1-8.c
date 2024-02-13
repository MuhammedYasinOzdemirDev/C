#include<stdio.h>
#include<stdlib.h>
int asal(int i,int a){
    if(a==1){
        return 1;
    }
    else{
        if(i%a==0){
   return 0;
        
    }
    else{
        asal(i,a-1);
    }
}
}
int main(){
    int a=4;

    if(asal(a,a-1)==1){
        printf("asal");
    }
    else{
    printf("degil");
}}