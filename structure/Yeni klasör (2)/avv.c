#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main(){
	int size,i,j,z;
	printf("kac elamanli dizi istiyorsaniz giriniz:");
	scanf("%d",&size);
	int dizi[size];
    srand(time(NULL));
	printf("\nDizinin normal siralanisi:\n\n");
	for(i=0;i<size;i++){
		dizi[i]=rand()%10;	
	    printf("%d  ",dizi[i]);}
	for(i=0;i<size;i++){
		for(z=i+1;z<size;z++){
	  if(dizi[i]==dizi[z]){
	  	  for(j=i;j<size;j++){
		    dizi[j]=dizi[j+1];	}
	        size--;}
	        
	}
	}
	        printf("\n\nDizinin tekrarsiz siralanmasi:\n\n");
	for(i=0;i<size;i++){
		printf("%d  ",dizi[i]);
	}
	   return 0;
}
