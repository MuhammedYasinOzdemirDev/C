#include<stdio.h>
main(){
	int i,j;
	int grafik3[14]={0,1,2,3,4,5,6,7,7,7,7,7,7,7};
	int grafik[14]= {2,2,2,2,2,2,2,2,2,2,2,2,2,2};
	int grafik1[14]={12,10,8,6,4,2,0,0,0,0,0,0,0,0,0,0,0};
   int grafik2[14]= {2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0};
	for(i=0;i<14;i++){
		for(j=0;j<grafik3[i];j++){
			printf(" ");
		}
		for(j=0;j<grafik[i];j++){
			printf("*");
		}
		for(j=0;j<grafik1[i];j++){
			printf(" ");
		}
		for(j=0;j<grafik2[i];j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	}
