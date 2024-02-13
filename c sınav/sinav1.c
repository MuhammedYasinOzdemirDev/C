#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,sayi,toplam,s,a;
    toplam=0;
    printf("kac hak ise giriniz:");
    scanf("%d",&s);
    for(i=0;i<s;i++){
        printf("%d. sayiyi giriniz:",i+1);
        scanf("%d",&sayi);
        if(sayi%100>1 && sayi%100<10){
            toplam++; }
    }
printf("toplam=%d",toplam);
getchar();
return 0;
}