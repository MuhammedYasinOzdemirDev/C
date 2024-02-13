#include<stdio.h>
int main(){
    int i,j,s;
    for(i=1;i<=100;i++){
        s=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                s++;
            }
        }
        if(s>2||i==1){
            printf("%d. sayisi asal degildir\n",i);
        }
        else{
            printf("%d sayisi asaldir\n",i);
        }
    }
    return 0;
}