#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int Armstrongsayi(int x);
int main() {
	int sayi;
	printf("Sayiyi giriniz:");
	scanf("%d",&sayi);
	if(Armstrongsayi(sayi))
	printf("Armstrong sayidir.");
	else
	printf("Armstrong sayi degildir.");
}

int Armstrongsayi(int x) {
	int a, basamak, isaret;
	int sonuc = 0, us = 0;
	a = x;
	while(a != 0) {
		a /= 10;
		us++;
	}	
	a = x; 
	while(a != 0) {
		basamak = a % 10;
		sonuc += pow(basamak, us);
		a /= 10;	
	}
	if(sonuc == x)
	isaret = 1;
	else
	isaret = 0;
	
	return isaret;
}
