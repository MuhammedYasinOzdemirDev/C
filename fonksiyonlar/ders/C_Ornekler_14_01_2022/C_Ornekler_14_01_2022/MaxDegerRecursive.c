#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int maxsayi(int a[], int x) {
    
	if(x == 1) {
      return a[0];
    }
    else 
	{
        int max= maxsayi(a, x - 1);
        if (a[x - 1] > max){
        	return a[x - 1];	
		} 
		
        
		return max;
    }

}

int main() {
	int sayilar[20], i;
	srand(time(NULL)); 
		for(i = 0; i < 20; i++) {
			sayilar[i] = rand()%100+1;
			printf("%4d", sayilar[i]); 
		}
	printf("\nDizinin en buyuk elemani: %d", maxsayi(sayilar, 19));
	getchar();

}
