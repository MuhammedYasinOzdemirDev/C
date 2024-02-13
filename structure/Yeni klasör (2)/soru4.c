#include <stdio.h>

main (){
	
	int i,j,x,n;
	double toplam, k,t;
	printf ("X Degerini Giriniz = ");
	scanf ("%d", &x);
		toplam = 1;
		for (i=1;i<=15;i++){
			k=x;if(i!=1){
			
			for (n=i;n>=2;n--)
				k= (k * x);}
			t=1;
			for (n=i;n>=2;n--)
				t = t * n;
			toplam= toplam + (k  / t);
			printf ("\nSonuc = %f",toplam);
	}
	
	
	return 0;
}
