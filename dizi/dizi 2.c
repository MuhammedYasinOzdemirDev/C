#include<stdio.h>
#include<stdlib.h>
main(){
	//int teksayilar[]={1,3,5,7,9,};
	//printf("%d",teksayilar[2]);
	//char sehir[8]={'i','s','t','a','n','b','u','L'};	
	//printf("%s",sehir);
	/*int sayilar[4];
	sayilar[0]=45;
	sayilar[1]=456;
	sayilar[2]=4;
	sayilar[3]=5;
	printf("%d",sayilar[2]);*/
	/*int sayilar[]={10,20,30,40,50,60,70,80,90,100};
	int i,toplam;
	toplam=0;
	for(i=0;i<10;i++){
		toplam+=sayilar[i];
		printf("%d\n",toplam);
	}
	char sehir[3][15];

	int i;
	
	for(i=0;i<3;i++){
		printf("il giriniz:");
		scanf("%s",sehir[i]);
		
	}
	for(i=0;i<3;i++){
		printf("%d. il:%s\n",i+1,sehir[i]);
	}
*/
int dizi[100];
int sayi,i,toplam;
toplam=0;
printf("eleman sayisini giriniz=");
scanf("%d",&sayi);
for(i=0;i<sayi;i++){
	printf("%d. elemani giriniz=",i+1);
	scanf("%d",&dizi[i]);	
}
for(i=0;i<sayi;i++){
	toplam+=dizi[i];
}
printf("%d",toplam);
}

