#include<stdio.h>
main(){
	//mod alma
	int i,tekrar=0,j,a;
	int dizi[15],mod[15]={0};
	for(i=0;i<15;i++){
		printf("%d. sayiyi giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<15;i++){
		for(j=0;j<15;j++){
			if(dizi[i]==dizi[j]){
				mod[i]+=1;}	
		}
			if(mod[i]>tekrar){
				tekrar=mod[i];
				a=dizi[i];}
		}
		printf("dizinin modu:%d",a);
		return 0;
	}
