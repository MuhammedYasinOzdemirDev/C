#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(void){
	int a[50],b[50],i,j,l,k=50;
	srand(time(NULL));
	printf("normal\n\n");
	for(i=0;i<50;i++){
		a[i]=rand()%20;
		printf("%d  ",a[i]);
	}
	for(i=0;i<50;i++){
		for(j=i+1;j<50;j++){
			if(a[i]!=0&&a[i]==a[j]){
				a[j]=0;
				k--;	}
	}
	}
	j=0;
	for(i=0;i<k;i++){
		for(l=0;l<50;l++){
			if(a[j]!=0){
				b[i]=a[j];
				a[j]=0;
			j++;
			break;
		
			}
			else{
				j++;
			}
		}
	}
	printf("\n\nyeni\n\n");
	for(i=0;i<k;i++){
		printf("%d  ",b[i]);
	}
	return 0;
}
