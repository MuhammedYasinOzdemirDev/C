#include<stdio.h>
#include<stdlib.h>
int toplam(int a){
    if(a<1){
        return 0;
    }
    else{
        return a+toplam(a-1);
    }

}
int main(){
    int i;
    for(i=0;i<50;i++){
        printf("%d\n",toplam(i));
    }
    return 0;
}