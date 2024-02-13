#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int i = 9,max = 0;
int max_bul (int dizi[]){
	if (dizi[i]>max)
		max = dizi[i];
	i--;
	if (i>-1)
		max_bul(dizi);
	else
		return max;
	}	
main (){
	srand(time(NULL));
	int dizi[10],i,j,max;
	printf ("Dizi = ");
	for (i=0;i<=9;i++){
		dizi[i] = rand () % 100;
		printf ("%d ", dizi[i]); 
	}
	max = max_bul (dizi);
	printf ("\nMax = %d",max);
	
	return 0;
}	
