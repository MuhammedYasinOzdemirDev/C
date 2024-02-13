#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
void harf(char x[]);	
int main() {
	
	setlocale(LC_ALL, "Turkish");
	char metin[200];
	printf("Metni giriniz:");
	gets(metin);
	printf(metin);
    harf(metin);
    return 0;
}
	void harf (char x[]) {
	
	int rakam = 0, kucukharf = 0, buyukharf = 0, i;
	for(i = 0; x[i] != '\0'; i++) {
		if(isdigit(x[i]))
		   rakam++;
		if(islower(x[i]))
		   kucukharf++;
		if (isupper(x[i]))
		   buyukharf++;
    }
	
    printf("\nMetin %d harften olusmaktadir.\n", strlen(x));
	printf("Kucuk harf sayisi:%d\nBuyuk harf sayisi:%d\nRakam sayisi:%d", kucukharf, buyukharf, rakam);
    }
