#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main (){
	int i,j;
	srand(time(NULL));
	int m1[3][2],m2[3][2];
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			m1[i][j]=rand()%100;
			m2[i][j]=rand()%100;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
		printf("%3d",m1[i][j]);
		}printf("\n");
	}
	printf("\n\n");
		for(i=0;i<3;i++){
		for(j=0;j<2;j++){
		printf("%3d",m2[i][j]);
		}
		printf("\n");
	}
	
	
}
