#include<stdio.h>
main(){
	int i,c,j;
	int m1[2][2],m2[2][2],carp[2][2]={0};
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){	
		printf("%dx%d:",i+1,j+1);	
		scanf("%d",&m1[i][j]);
	}}
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("%dx%d:",i+1,j+1);		
		scanf("%d",&m2[i][j]);
	}}
	for(i=0;i<2;i++){
		
		for(j=0;j<2;j++){
			for(c=0;c<2;c++){
				carp[i][j]+=m1[i][c]*m2[c][j];
			}
			
			printf("%d ",carp[i][j]);
		}
		printf("\n");
	}
	
}
