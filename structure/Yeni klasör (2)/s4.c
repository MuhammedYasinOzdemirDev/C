#include <stdio.h>
int armstrong (int sayi){
	int i,j,toplam=0,rakam;
	for (i=sayi;i>0;i=i/10){
			rakam = i % 10;
			toplam = toplam + (rakam*rakam*rakam);
	}		
	if (toplam == sayi){
		return 1;
	}
	else
		return 0;
}
int main (){
	int sayi,sonuc;
	printf ("Sayiyi Giriniz: ");
	scanf ("%d",&sayi);
	sonuc = armstrong (sayi);
	if (sonuc == 1)
		printf ("Armstrong Sayisidir.");
	if (sonuc == 0)
		printf ("Armstrong Sayisi Degildir.");
	return 0;
}
