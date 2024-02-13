#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main(){
float i,j,toplam,fakt,x,a;
printf(" e  uzeri x icin x degeri giriniz");
scanf("%f",&x);

for(i=1;i<=15;i++){
	if(i==1){
		toplam=1;
	}
	else {
		for(j=1;j<=i;j++){
			fakt=1;
			fakt=fakt*j;
		}
		toplam=(pow(x,i-1)/fakt)+toplam;
	}	
}
printf("%f",toplam);
}
