#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int uzunluk_bul (char dizi[]){
	int h;
	for (h=0;dizi[h] !='\0';h++)
		printf ("%c",dizi[h]);
		
	return h;
}

int asmaca (char tahmin,char array[],char dizi[], int *hak){
	int i,hata=0;
	for (i=0;dizi[i]!='\0';i++)
		if (tahmin == dizi[i])
			array[i]=dizi[i];
	
	for (i=0;dizi[i]!='\0';i++){
		if (array[i]>=97 && array[i]<=122)
			printf ("%c",array[i]);
		else {
			printf ("_");
			hata = 1;	
		}
	}
	
	if (hata==0){
		printf ("\nTebrikler Buldunuz.");
		*hak = 0;
	}
}

int main (){
	srand(time(NULL));
	int h=0,rast,i,j,depo,hak;
	char tahmin,ikinci[10];
	char kelime[10][10]={"elma","armut","marmara","karpuz","kavun","badem","ceviz","kaju","lokum","jelibon"};
	
	rast = rand () % 10;
	h = uzunluk_bul (kelime[rast]);
	hak = 2 * h;
	printf ("\nhak = %d ",hak);
	
	while (hak>0){
		printf ("\nHarf Alayim: ");
		scanf (" %c",&tahmin);
		hak--;
		if (hak==0){
			hak+= 5;
			printf ("5 Hak daha verildi\n");
		}
		asmaca(tahmin,ikinci,kelime[rast],&hak);	
	}
	
	return 0;
}
