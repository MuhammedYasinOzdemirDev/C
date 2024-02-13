#include<stdio.h>
main(){

	float toplam,k,z;
    int i,j,x,a;
    printf("x degerini giriniz=");
    scanf("%d",&x);
    toplam=x+1;
   	printf("1. sonuc=%f\n",toplam);
    for(i=2;i<=15;i++){
    	a=1;
    	for(j=i;j>=1;j--){
    	a=a*j;
		}
		k=1;
		for(j=1;j<=i;j++){
			
			k=x;
			k=x*k;
		}
		
		z=k/a;
		toplam=toplam+z;
		printf("%d.sonuc=%f\n",i,toplam);
	}
	}
    

