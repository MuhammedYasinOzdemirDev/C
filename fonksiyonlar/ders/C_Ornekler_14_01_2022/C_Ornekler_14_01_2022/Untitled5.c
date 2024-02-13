#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int en_buyuk_bulucu(int x[50],int sayac,int en_buyuk)
{
	if(x[sayac]>en_buyuk)
	{
		en_buyuk=x[sayac];
	}
	if(sayac==50)
	{
		return en_buyuk;
	}
	return en_buyuk_bulucu(x,sayac+1,en_buyuk);
}

int main()
{
	int dizi[50];
	int i;
	srand(time(0));
	for(i=0;i<50;i++)
	{
		dizi[i]=rand()%100+1;
	}
	printf("En buyuk sayi %d dir!",en_buyuk_bulucu(dizi,0,0));
	return 0;
}
