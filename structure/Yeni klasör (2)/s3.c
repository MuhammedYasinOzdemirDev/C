#include <stdlib.h>
main (){
	int ksart=0,bsart=0,rsart=0,i;
	char sifre[50];
	printf ("Lutfen sifre giriniz: ");
	scanf ("%s",sifre);
	
	for (i=0;sifre[i]!='\0';i++){
		if (sifre[i] >= 65 && sifre [i] <= 90)
			bsart=1;
		if (sifre[i] >= 97 && sifre [i] <= 122)
			ksart=1;
		if (sifre[i] >= 48 && sifre [i] <= 57)
			rsart=1;
	}
	
	if (rsart==1 && ksart == 1 && bsart == 1){
		printf ("Guvenli Sifre");
	}
	else 
		printf ("Guvensiz Sifre");
	
	return 0;
}
